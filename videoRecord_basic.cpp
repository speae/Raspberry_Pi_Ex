/**
  @file videocapture_basic.cpp
  @brief A very basic sample for using VideoCapture and VideoWriter
  @author PkLab.net
  @date Aug 24, 2016
*/

#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <stdio.h>

using namespace cv;
using namespace std;

int main(int, char**)
{
    // 1. VideoCapture("동영상 파일의 경로") 함수 사용
    // VideoCapture(0)
    VideoCapture cap(0);
    Mat frame;

    // STEP 1. 카메라 장치 열기
    int deviceID = 0;
    int apiID = cv::CAP_V4L2;
    cap.open(deviceID, apiID);

    if (!cap.isOpened()) {
        perror("ERROR! Unable to open camera\n");
        return -1;
    }

    cap.set(CAP_PROP_FPS, 60);
    cap.set(CAP_PROP_FRAME_WIDTH, 1280);
    cap.set(CAP_PROP_FRAME_HEIGHT, 740);
    

    // Video Recording
    // 현재 카메라에서 초당 몇 프레임으로 출력하는지 확인
    float videoFPS = cap.get(CAP_PROP_FPS);

    // 해상도
    int videoWidth = cap.get(CAP_PROP_FRAME_WIDTH);
    int videoHeight = cap.get(CAP_PROP_FRAME_HEIGHT);
    
    printf("videoFPGS = %f\n", videoFPS);
    printf("width = %d, height = %d\n", videoWidth, videoHeight);
    
    
    // while (1)
    // {
        
    // }
    
    return 0;
}
