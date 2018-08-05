#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(char argc, char* argv[]){

    //CV_8UC(n), ..., CV_64FC(n)
    Mat A(5,5,CV_64FC1,1);
    std::cout << "A= " << endl << " " << A << endl;

    Mat B(5,5,CV_64FC1,2);
    std::cout << "B= " << endl << " " << B << endl;

    Mat C(5,5,CV_64FC3,Scalar(6.0f,7.0f,8.0f));
    std::cout << "B= " << endl << " " << C << endl;

    Mat D = Mat::eye(3,3,CV_64F);
    std::cout << "D= " << endl << " " << D << endl;

    Mat E = Mat::ones(3,3,CV_64F);
    std::cout << "E= " << endl << " " << E << endl;

    Mat F = Mat::zeros(3,3,CV_64F);
    std::cout << "F= " << endl << " " << F << endl;

    Mat G;
    G = F.clone();
    std::cout << "G= " << endl << " " << G << endl;

    Mat H;
    F.copyTo(H);
    std::cout << "H= " << endl << " " << H << endl;

    return 0;
}
