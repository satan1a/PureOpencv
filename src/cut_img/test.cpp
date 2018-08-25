#include "cut_img.hpp"

#include "opencv2/core.hpp"

using namespace cv;

int main(int argc,char** argv){

    if(argc != 7){
        printf("Usage: ./cut_img input-img out-img x y w h\n");
    }
    CutImg m_cutIMg;
    printf("input img is %s\n",argv[1]);
    printf("output img is %s\n",argv[2]);
    printf("start point is (%d, %d)   w:%d  h:%d\n",atoi(argv[3]), atoi(argv[4]),atoi(argv[5]),atoi(argv[6]));

    m_cutIMg.setOriImg (argv[1]);
    m_cutIMg.setDstImg (Rect(atoi(argv[3]), atoi(argv[4]), atoi(argv[5]),atoi(argv[6])));
    m_cutIMg.saveDstImg (argv[2]);
    return 0;
}
