#include <stdio.h>
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/features2d.hpp>
#include <opencv2/xfeatures2d.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/xfeatures2d/nonfree.hpp>

using namespace cv;
using namespace cv::xfeatures2d;


int main(int argc,char* argv[]){

    Mat img1_ori = imread( argv[1], -1 );
    Mat img2 = imread( argv[2], -1 );
    Mat img1 = img1_ori( Rect(0,1350,img1_ori.cols, 1500) );;
    if( !img1.data || !img2.data ){
        std::cout << "Error reading data" << std::endl;
    }

    int minHessian = 1000;

    Ptr<SURF> detector = SURF::create( minHessian );
    //SurfFeatureDetector detector( minHessian );
    std::vector<KeyPoint> keypoints_1,keypoints_2;
    detector->detect( img1,keypoints_1);
    detector->detect( img2,keypoints_2);
    //draw keypoints


    Mat img_keypoints_1;
    Mat img_keypoints_2;

    //SurfDescriptorExtractor extractor;
    Ptr<SURF> extractor = SURF::create( minHessian );

    extractor->compute(img1,keypoints_1,img_keypoints_1);
    extractor->compute(img2,keypoints_2,img_keypoints_2);

    FlannBasedMatcher matcher;

    std::vector<DMatch> matches;
    matcher.match(img_keypoints_1,img_keypoints_2,matches);

    std::nth_element(matches.begin(),matches.begin()+9,matches.end());
    matches.erase(matches.begin()+10,matches.end());

    double max_dist = 0; double min_dist = 100;

    for(int i=0; i<img_keypoints_1.rows;i++){
        double dist = matches[i].distance;
        if(dist < min_dist) min_dist = dist;
        if(dist > max_dist) max_dist = dist;
    }

    printf("---- min dist is %f ----\n", min_dist);
    printf("---- max dist is %f ----\n", max_dist);

    std::vector <DMatch> good_matches;
    for(int i=0;i<img_keypoints_1.rows;i++){
        if(matches[i].distance <= max(2*min_dist,0.02) ){
            good_matches.push_back( matches[i] );
        }
    }


    Mat img_matches;
    Mat img_matches_2;
    drawMatches(img1,keypoints_1,img2,keypoints_2,
                matches,img_matches,Scalar::all(-1),Scalar::all(-1),
                std::vector<char>(),DrawMatchesFlags::NOT_DRAW_SINGLE_POINTS );

    drawMatches(img1,keypoints_1,img2,keypoints_2,
                matches,img_matches_2,Scalar::all(-1),Scalar::all(-1),
                std::vector<char>(),DrawMatchesFlags::NOT_DRAW_SINGLE_POINTS );

    //drawKeypoints(img1,keypoints_1,img_keypoints_1, Scalar::all(-1),DrawMatchesFlags::DEFAULT);
    //drawKeypoints(img2,keypoints_2,img_keypoints_2, Scalar::all(-1),DrawMatchesFlags::DEFAULT);

    cv::namedWindow("keyp1",cv::WINDOW_NORMAL);
    cv::namedWindow("keyp2",cv::WINDOW_NORMAL);

    imshow("keyp1",img_matches);
    imshow("keyp2",img_matches_2);

    waitKey(0);


}
