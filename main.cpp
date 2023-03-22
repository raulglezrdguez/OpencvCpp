//
//  main.cpp
//
//  Created by Raul Glez Rdguez on 18/3/23.
// https://www.youtube.com/watch?v=2FYm3GOonhk
// https://www.computervision.zone/topic/chapter-4-draw-shapes-and-text-3/
//
//

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/* webcam */
int main()
{

    VideoCapture cap(0);
    Mat img;

    while (true)
    {

        cap.read(img);
        imshow("Image", img);
        waitKey(1);
    }

    return 0;
}

/* video */
/*
int main(){
    string path = "Resources/test_video.mp4";
    VideoCapture cap(path);

    Mat img;

    while(true) {
        cap.read(img);

        if (!img.empty()) {
            imshow("Video", img);

            waitKey(42);
        } else {
            return 0;
        }

    }
}
*/
/* images */
/*
int main(){

    string path = "Resources/lambo.png";
    Mat img = imread(path);

    imshow("Image", img);

    waitKey(0);

    return 0;
}
*/
