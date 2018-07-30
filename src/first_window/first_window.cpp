#include <iostream>
#include <opencv2/opencv.hpp>

int main(char argc,char** argv){
    std::cout << "first window" << std::endl;
    cv::Mat img = cv::imread(argv[1],-1);
    if(img.empty()){
        return -1;
    }
    cv::namedWindow("FirstWindoes",cv::WINDOW_NORMAL);
    cv::imshow("FirstWindoes",img);
    cv::waitKey( 0 );
    cv::destroyWindow("FirstWindoes");
    return 0;
}
