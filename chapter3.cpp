#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/*
resize and crop
*/
int main()
{

    string path = "Resources/lambo.png";
    Mat img = imread(path);
    Mat imgResized, imgCrop;

    // find image dimensions
    cout << img.size() << endl;

    // resize image to specified dimensions
    // resize(img, imgResized, Size(640, 480));

    // resize image to some scaled dimensions
    resize(img, imgResized, Size(), 0.5, 0.5);

    // crop image
    // region of interest
    Rect roi(100, 100, 150, 150);
    imgCrop = img(roi);

    imshow("Image", img);
    // imshow("Image resized", imgResized);
    imshow("Image crop", imgCrop);

    waitKey(0);

    return 0;
}
