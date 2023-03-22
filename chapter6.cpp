

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/*
color detection
*/
int main()
{

    string path = "Resources/lambo.png";
    Mat img = imread(path);

    Mat imgHSV, mask;
    int hmin = 0, smin = 110, vmin = 153;
    int hmax = 19, smax = 240, vmax = 255;

    // create a window with trackbars
    // create a window
    namedWindow("Trackbars");
    // create a trackbar inside the window
    // trackbar name, in the window, which value, max value
    createTrackbar("Hue min", "Trackbars", &hmin, 179);
    createTrackbar("Hue max", "Trackbars", &hmax, 179);
    createTrackbar("Saturation min", "Trackbars", &smin, 255);
    createTrackbar("Saturation max", "Trackbars", &smax, 255);
    createTrackbar("Value min", "Trackbars", &vmin, 255);
    createTrackbar("Value max", "Trackbars", &vmax, 255);

    while (true)
    {

        // change to space color hsv (hue saturation and value) to find the color more easily
        cvtColor(img, imgHSV, COLOR_BGR2HSV);

        // get mask with colors from lower to upper
        Scalar lower(hmin, smin, vmin), upper(hmax, smax, vmax);
        inRange(imgHSV, lower, upper, mask);

        imshow("Image", img);
        imshow("Image HSV", imgHSV);
        imshow("Image mask", mask);

        waitKey(1);
    }

    return 0;
}
