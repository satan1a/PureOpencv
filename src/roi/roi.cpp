#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;
using namespace std;

int main(int argc,char* argv[]){

    Mat img_ori = imread(argv[1],IMREAD_COLOR);
    std::cout << "row is " << img_ori.rows << std::endl;
    std::cout << "col is " << img_ori.cols << std::endl;
    Mat img_des = img_ori( Rect(0,1350,img_ori.cols, 1500) );
    //img_ori(Rect(1000,0,2000,img_ori.cols)).copyTo(img_des);
    cv::namedWindow("img_des",cv::WINDOW_NORMAL);
    //imshow("img_ori",img_ori);
    imshow("img_des",img_des);
    waitKey(0);
}
