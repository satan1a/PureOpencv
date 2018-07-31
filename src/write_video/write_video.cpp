#include <iostream>
#include <opencv2/video/video.hpp>
#include <opencv2/videoio/videoio.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main(char argc,char** argv){
    int lowThreshold;

    namedWindow("first_video",cv::WINDOW_AUTOSIZE);
    namedWindow("first_video_out",cv::WINDOW_AUTOSIZE);
    namedWindow("first_video_out_canny",cv::WINDOW_AUTOSIZE);
    //createTrackbar("mybar","first_video_out_canny",&lowThreshold,100,)
    VideoCapture cap;
    VideoWriter video_writer;
    cap.open(argv[1]);
    Size video_size(cap.get(CAP_PROP_FRAME_WIDTH),cap.get(CAP_PROP_FRAME_HEIGHT));
    video_writer.open(argv[1],CV_FOURCC('I','Y','U','V'),cap.get(cv::CAP_PROP_FPS),video_size);
    Mat frame;
    Mat out,canny;
    for(;;){
        cap >> frame;
        if(frame.empty()){
            break;
        }
        GaussianBlur(frame,out,Size(5,5),3,3);
        Canny(out,canny,10,100);
        imshow("first_video",frame);
        imshow("first_video_out",out);
        imshow("first_video_out_canny",canny);
        video_writer << canny;
        if(waitKey(33) >= 0){
            break;
        }
        waitKey(10);
    }
    cap.release();
    return 0;
}
