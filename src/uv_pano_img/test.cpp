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

    if(strcmp (argv[1],"-cut") == 0){

        Mat img = imread (argv[2],-1);
        Mat resize_small;
        resize (img,resize_small,Size(img.cols / 2,img.rows / 2),0,0,INTER_LINEAR);
        imwrite (argv[3],resize_small);

    }else if(strcmp (argv[1],"-deal") == 0){
        UvImg uvimg;
        Mat img = imread (argv[4],-1);
        uvimg.processXyzFile (argv[2],
                              argv[3],
                              img);
    }



//    resize (resize_big,resize_small,
//            Size(resize_big.cols / 25,resize_big.rows / 25),0,0,INTER_LINEAR);

//    imwrite ("/home/single3D/big.jpg",resize_small);
//    std::cout << resize_small.cols << "," << resize_small.rows << std::endl;

//    imshow ("1",img);
//    imshow ("2",resize_small);
//    waitKey (0);




    return 0;
}

