#include "cut_img.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;

void CutImg::setOriImg(const char *path)
{
    m_oriImg = imread(path,IMREAD_COLOR);
}

void CutImg::setDstImg(cv::Rect roi)
{
    if(m_oriImg.empty ()){
        return;
    }
    if((roi.x + roi.width) < m_oriImg.cols && (roi.y + roi.height) < m_oriImg.rows){
        m_desImg = m_oriImg(roi);
    }else if((roi.x + roi.width) > m_oriImg.cols && (roi.y + roi.height) < m_oriImg.rows ){
        printf("log1\n");
        int RightImagWidth  = m_oriImg.cols - roi.x;
        m_edgeRightImg = m_oriImg( cv::Rect(roi.x, roi.y, RightImagWidth, roi.height));
        m_edgeLeftImg = m_oriImg( cv::Rect( 0, roi.y, roi.width - RightImagWidth, roi.height));
        //m_desImg = m_edgeLeftImg + m_edgeRightImg;
        printf("log2 RightImagWidth is %d\n",RightImagWidth);
        Mat ret(m_edgeLeftImg.rows,m_edgeLeftImg.cols + m_edgeRightImg.cols, m_edgeLeftImg.type ());
        printf("log3 m_edgeRightImg.cols is %d\n",m_edgeRightImg.cols);

        m_edgeRightImg.colRange (0,m_edgeRightImg.cols).copyTo (ret.colRange (0,m_edgeRightImg.cols));
        printf("log4 m_edgeLeftImg.cols is %d\n",m_edgeLeftImg.cols);

        m_edgeLeftImg.colRange (0,m_edgeLeftImg.cols).copyTo (ret.colRange(m_edgeRightImg.cols, ret.cols));
        printf("log5\n");
        m_desImg = ret;
        printf("log6\n");
    }
}

void CutImg::saveDstImg(const char *path)
{
    if(m_desImg.empty ()){
        return;
    }
    imwrite (path,m_desImg);

}
