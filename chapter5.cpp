
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/*
warp images
*/
int main()
{

    string path = "Resources/cards.jpg";
    Mat img = imread(path);

    float w = 250, h = 350;
    Mat matrix, imgWarp;

    // original points on the image
    Point2f src[4] = {{529, 142}, {771, 190}, {674, 457}, {405, 395}};
    // points on the resulting image
    Point2f dst[4] = {{0.0f, 0.0f}, {w, 0.0f}, {w, h}, {0.0f, h}};

    // transformation matrix
    matrix = getPerspectiveTransform(src, dst);

    // make the transformation
    warpPerspective(img, imgWarp, matrix, Point(w, h));

    for (int i = 0; i < 4; i++)
    {
        circle(img, src[i], 5, Scalar(255, 255, 0), FILLED);
    }

    imshow("Image", img);
    imshow("Image warp", imgWarp);

    waitKey(0);

    return 0;
}
