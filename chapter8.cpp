
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
// to work with haarcascade
#include <opencv2/objdetect.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/* face detection using haarcascade */
int main()
{
    CascadeClassifier faceCascade;
    faceCascade.load("Resources/haarcascade_frontalface_default.xml");

    if (faceCascade.empty())
    {
        cout << "faceCascade is empty" << endl;
    }

    // faces bounding boxes
    vector<Rect> faces;

    VideoCapture cap(0);
    Mat img;

    while (true)
    {

        cap.read(img);

        // detect faces
        faceCascade.detectMultiScale(img, faces, 1.5, 10);

        // draw faces
        for (int i = 0; i < faces.size(); i++)
        {
            // rectangle(img, faces[i], Scalar(255, 255, 0), 2);
            rectangle(img, faces[i].tl(), faces[i].br(), Scalar(255, 255, 0), 2);
        }

        imshow("Image", img);
        waitKey(1);
    }

    return 0;
}
