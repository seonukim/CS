#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main() {
    VideoCapture cap(0);
    if (!cap.isOpened()) {
        printf("cannot open the camera \n");
    }

    Mat f;
    namedWindow("w", 1);

    for (;;) {
        cap >> f;
        imshow("w", f);
        if (waitKey(100) > 0) break;
    }
    return 0;
}