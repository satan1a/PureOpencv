#ifndef     _PLYFILE__
#define     _PLYFILE__

class plyfile{

public:
    plyfile(){}
    char* plyhead =  "ply\n"
            "format ascii 1.0 \n"
            "element vertex %d \n"
            "property float x \n"
            "property float y \n"
            "property float z \n"
            "property uchar red\n"
            "property uchar green\n"
            "property uchar blue\n"
            "end_header\n";

    float getLongitude(float y,float x);
    float getLagitude(float y,float x,float z);
    float getNormalX(float longitude);
    float getNormalY(float latitude);

};

#endif

