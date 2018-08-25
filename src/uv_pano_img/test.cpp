#include "opencv2/opencv.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "uvimg.hpp"

using namespace cv;

std::vector<std::string> split(const  std::string& s, const std::string& delim);

int main(int argc,char** argv){

//    if (argc != 4){
//        printf ("Usage: ./uvimg infile outfile img\n");
//    }

    std::cout << "start\n" << std::endl;
    //Mat img = imread ("/home/panosingle/camera_2_point3d_0.jpg",-1);
    Mat img = imread ("/home/panosingle/pic0_mid_1.jpg",-1);

    UvImg uvimg;

    uvimg.processXyzFile ("/home/panosingle/camera_2_point3d_uv_0.xyz",
                          "/home/panosingle/camera_2_point3d_rgb4.ply",
                          img);

    return 0;
}
