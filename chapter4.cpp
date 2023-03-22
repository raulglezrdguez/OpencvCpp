#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/*
draw shapes and text
*/
int main()
{

    // create an image
    // 8 bit image, unsigned, 3 color channels
    // color as Scalar(bgr color)
    Mat img(480, 640, CV_8UC3, Scalar(255, 0, 0));

    // create a circle
    // origin point, radius, color as Scalar(bgr color), thickness or filled
    // circle(img, Point(320, 240), 100, Scalar(255, 255, 0), 5);
    circle(img, Point(320, 240), 100, Scalar(255, 255, 0), FILLED);

    // create a rectangle
    // using region of interest, color and filled
    Rect roi(10, 10, 100, 50);
    rectangle(img, roi, Scalar(255, 255, 0), FILLED);
    // using 2 points, color and thickness
    rectangle(img, Point(320, 240), Point(400, 300), Scalar(255, 0, 255), 5);

    // create a line
    // using starting point and ending point, color and thickness
    line(img, Point(10, 20), Point(300, 200), Scalar(255, 0, 255), 5);

    // create a text
    // text to draw, starting point base line, font, scale of the font, font color and thickness
    putText(img, "Laura and Kevin", Point(10, 400), FONT_HERSHEY_COMPLEX, 1, Scalar(255, 0, 255), 3);
    imshow("Image", img);

    waitKey(0);

    return 0;
}
