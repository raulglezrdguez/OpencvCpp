#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/*
basic functions
*/
int main()
{

    string path = "Resources/lambo.png";
    Mat img = imread(path);
    Mat imgGray, imgBlur, imgCanny, imgDilate, imgErode;

    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    GaussianBlur(imgGray, imgBlur, Size(5, 5), 5, 0);

    // edge detection using always with image blurred
    Canny(imgBlur, imgCanny, 50, 150);

    // better edge detection
    Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
    // dilate canny image
    dilate(imgCanny, imgDilate, kernel);
    // erode dilate canny image
    erode(imgDilate, imgErode, kernel);

    // imshow("Image", img);
    // imshow("Image Gray", imgGray);
    // imshow("Image Blur", imgBlur);
    imshow("Image Canny", imgCanny);
    // imshow("Image Dilate", imgDilate);
    imshow("Image Erode", imgErode);

    waitKey(0);

    return 0;
}
