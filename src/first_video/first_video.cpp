#include <opencv2/imgcodecs/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;


int main(char argc, char** argv){

    int lowThreshold;

    namedWindow("first_video",cv::WINDOW_AUTOSIZE);
    namedWindow("first_video_out",cv::WINDOW_AUTOSIZE);
    namedWindow("first_video_out_canny",cv::WINDOW_AUTOSIZE);
    //createTrackbar("mybar","first_video_out_canny",&lowThreshold,100,)
    VideoCapture cap;
    cap.open(argv[1]);
    Mat frame;
    Mat out,canny;
    for(;;){
        cap >> frame;
        if(frame.empty()){
            break;
        }
        GaussianBlur(frame,out,Size(5,5),3,3);
        Canny(out,canny,50,100);
        imshow("first_video",frame);
        imshow("first_video_out",out);
        imshow("first_video_out_canny",canny);
        if(waitKey(33) >= 0){
            break;
        }
    }
    return 0;
}
