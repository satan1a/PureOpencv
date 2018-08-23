#include <stdio.h>
#include <math.h>
#include "plyfile.hpp"



float plyfile::getLongitude(float y, float x)
{
    return atan2(y,x);
}

float plyfile::getLagitude(float y, float x, float z)
{
    return atan2(z,sqrtf (x*x+y*y));
}

float plyfile::getNormalX(float longitude)
{

}

float plyfile::getNormalY(float latitude)
{

}
