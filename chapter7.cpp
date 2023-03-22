
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/*
shape and contour detection
*/

void getContours(Mat imgDil, Mat img)
{
    // contours
    vector<vector<Point>> contours;
    vector<Vec4i> hierarchy;

    findContours(imgDil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
    // draw all contours (-1), with color and width 2
    // drawContours(img, contours, -1, Scalar(255, 0, 255), 2);

    // approximation contour polygon
    vector<vector<Point>> conPoly(contours.size());
    vector<Rect> boundRect(contours.size());

    // for all contours
    for (int i = 0; i < contours.size(); i++)
    {
        // get the contour area
        double area = contourArea(contours[i]);
        // show contour area
        cout << area << endl;
        string objectType;

        // draw only contours with area > 1000
        if (area > 1000)
        {
            // get the perimeter of the contour, the countour is closed
            float peri = arcLength(contours[i], true);
            // approximate the contour to a polygon
            approxPolyDP(contours[i], conPoly[i], 0.02 * peri, true);
            // show the count of points the approximate polygon has
            cout << conPoly[i].size() << endl;
            // find the rectangle that contains the contour
            boundRect[i] = boundingRect(conPoly[i]);

            // get the object corners count
            int objCor = (int)conPoly[i].size();

            // its a triangle
            if (objCor == 3)
            {
                objectType = "Tri";
            } // it has 4 corners
            else if (objCor == 4)
            {
                // divide width and height: it should be around 1 to be a square
                float aspRatio = (float)boundRect[i].width / (float)boundRect[i].height;
                cout << aspRatio << endl;
                // its a square
                if (aspRatio > 0.95 && aspRatio < 1.05)
                {
                    objectType = "Square";
                }
                else // its a rectangle
                {
                    objectType = "Rect";
                }
            } // its a circle
            else if (objCor > 4)
            {
                objectType = "Circle";
            }

            drawContours(img, conPoly, i, Scalar(255, 0, 255), 2);
            // draw rectangle at tl (top left) and br (bottom right) with a color and border width
            rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 5);
            putText(img, objectType, {boundRect[i].x, boundRect[i].y - 5}, FONT_HERSHEY_PLAIN, 1, Scalar(0, 69, 255), 2);
        }
    }
}

int main()
{

    string path = "Resources/shapes.png";
    Mat img = imread(path);

    Mat imgGray, imgBlur, imgCanny, imgDilate, imgErode;

    // preprocessing the image
    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    GaussianBlur(imgGray, imgBlur, Size(3, 3), 3, 0);
    // edge detection using always with image blurred
    Canny(imgBlur, imgCanny, 25, 75);
    // better edge detection
    Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
    // dilate canny image
    dilate(imgCanny, imgDilate, kernel);

    // get contours and display them
    getContours(imgDilate, img);

    imshow("Image", img);
    imshow("Image dilate", imgDilate);

    waitKey(0);

    return 0;
}
