#ifndef     _CUT_IMG_
#define     _CUT_IMG_

#include "opencv2/core.hpp"

class CutImg{

public:
    CutImg(){};
    void setOriImg(const char* path);
    void setDstImg(cv::Rect roi);
    void saveDstImg(const char* path);
private:
    cv::Mat m_oriImg;
    cv::Mat m_desImg;
    cv::Mat m_edgeLeftImg;
    cv::Mat m_edgeRightImg;
};


#endif
