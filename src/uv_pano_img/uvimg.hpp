#ifndef _UVIMG_H_
#define _UVIMG_H_

#include <iostream>
#include <vector>
#include <stdio.h>
#include "opencv2/core/core.hpp"

class UvImg{

public:
    UvImg(){};
    void processXyzFile(const char* path,const char *outpath,cv::Mat img);
    void addPlyHeader();
private:
    std::vector<std::string> split(const std::string &s, const std::string &delim);
};

#endif
