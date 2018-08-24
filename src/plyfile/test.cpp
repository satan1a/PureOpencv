#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

#include "plyfile.hpp"

#define PI  3.141592f

std::vector<std::string> split(const  std::string& s, const std::string& delim);

using namespace cv;



int main(int argc,char** argv){


    float longt1 = atan2(0,0);
    float altitu1 = atan2(1800, sqrtf (0*0+0*0));

    double img_x1 = longt1/PI;
    double img_y1 = 2*altitu1/PI;

    int col1 = (int)(img_x1 * 4000)+4000;
    int row1 = ((int)(img_y1 * 2000));
    printf("row is %d, col is %d\n",row1,col1);
    //return 0;

    char* line = NULL;
    char out[256] = { 0 };
    FILE *fp = NULL;
    FILE *fp_out = NULL;
    ssize_t read;
    size_t  len = 0;
//    fp = fopen(argv[1],"rw");
//    fp_out = fopen(argv[2],"w+");
//    Mat img = imread(argv[3], IMREAD_COLOR);

    //system ("rm -rf /home/res/test.ply");
    fp = fopen("/home/res/05asc.ply","rw");
    fp_out = fopen("/home/res/test.ply","w+");
    Mat img = imread("/home/res/sence.jpg", IMREAD_COLOR);
    Mat img_litte = img(Rect(0,0,1000,1000));
    imwrite ("/home/res/test.jpg",img_litte);
    if(fp == NULL){
        printf ("open file %s failed\n",argv[1]);
        return -1;
    }
    if(fp_out == NULL){
        printf ("open file %s failed\n",argv[2]);
        return -1;
    }
    int i = 0;
    bool isPoint = false;
    std::string tmp_str;
    cv::Vec3b point;
    int row = 0;
    int col = 0;
    while((read = getline (&line, &len,fp)) != -1){
        printf ("current line is %s:%d ==>",line,read);
        i++;
        if( isPoint ){
//            if(i > 30 ){
//                break;
//            }
            tmp_str = line;
            std::vector<std::string> list = split(tmp_str," ");
            double x = atof(list[0].c_str ());
            double y = atof(list[1].c_str ());
            double z = atof(list[2].c_str ());

//            float longti = fastAtan2 (y,x);
//            float altitu = fastAtan2 (z, cv::sqrt (x*x+y*y));
            double longti = atan2(y,x);
            double altitu = atan2(z, sqrtf (x*x+y*y));

            //printf("longti is %f,altitu is %f)\n",longti,altitu);
            double img_x = longti/PI;
            double img_y = 2*altitu/PI;

            row = (int)(img_x * 4000)+4000;
            col = ((int)(img_y * 2000));
            if(row<img.rows && col < img.cols){
                point = img.at<cv::Vec3b>(row,col);
            }
            printf("image point is (%d, %d)\n",row,col);
            //printf ("b:%d, g:%d, r:%d \n",point(0),point(1),point(2));

            line[strlen(line) - 1] = ' ';

            sprintf ( out,"%s %d %d %d \n",line,point(2),point(1),point(0));
            printf("%d final str is:%s \n",i,out);

            //fwrite (out,1,strlen(out),fp_out);
            fwrite (out,strlen (out),1,fp_out);
            memset (out,0,sizeof(out));
            continue;
        }

        if( strcmp ( line, "end_header\n") == 0){
            isPoint = true;
        }

        fwrite (line,strlen(line),1,fp_out);
    }
    fclose (fp);
    fclose (fp_out);
    return 0;
}

std::vector<std::string> split(const  std::string& s, const std::string& delim)
{
    std::vector<std::string> elems;
    size_t pos = 0;
    size_t len = s.length();
    size_t delim_len = delim.length();
    if (delim_len == 0) return elems;
    while (pos < len)
    {
        int find_pos = s.find(delim, pos);
        if (find_pos < 0)
        {
            elems.push_back(s.substr(pos, len - pos));
            break;
        }
        elems.push_back(s.substr(pos, find_pos - pos));
        pos = find_pos + delim_len;
    }
    return elems;
}
