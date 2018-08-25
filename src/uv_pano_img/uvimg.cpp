
#include "uvimg.hpp"


void UvImg::processXyzFile(const char *inpath,const char *outpath,cv::Mat img)
{

    char plyHeader[] ="ply\n"
            "format ascii 1.0\n"
            "element vertex           \n"
            "property float x\n"
            "property float y\n"
            "property float z\n"
            "property uchar red\n"
            "property uchar green\n"
            "property uchar blue\n"
            "end_header\n";

    int offset = strlen("ply\n"
                        "format ascii 1.0\n"
                        "element vertex ");

    FILE *fp = NULL;
    FILE *fp_out = NULL;
    ssize_t read;
    size_t  len = 0;
    double x,y,z;

    char* line = NULL;
    char out[256] = { 0 };

    fp = fopen (inpath,"rw");
    fp_out = fopen(outpath,"w+");
    if(fp == NULL ){
        printf ("open file %s failed",inpath);
        return;
    }
    if(fp_out == NULL){
        printf ("open file %s failed",outpath);
        return;
    }
    if(img.empty ()){
        printf ("image is empty failed");
        return;
    }
    fwrite (plyHeader, strlen (plyHeader),1, fp_out);

    std::string tmp_str;
    cv::Vec3b point;
    printf ("input file is %s \n",inpath);
    printf ("output file is %s \n",outpath);
    int i=0;

    std::vector<std::string> list;
    int u;
    int v;
    float rate = 4000.0 / 5120.0;

    while((read = getline (&line, &len,fp)) != -1){


        tmp_str = line;
        list = split(tmp_str," ");

        if(list.size () < 5){
            continue;
        }

        x = atof(list[0].c_str ());
        y = atof(list[1].c_str ());
        z = atof(list[2].c_str ());

        u = atoi(list[3].c_str ());

        u = (int)((float)u/640.0 * 700) * rate;
        v = atoi(list[4].c_str ());
        v = (int)((float)v/480.0 * 500) * rate;
        //bgr
        if( u < img.cols && v < img.rows){
            i++;
            unsigned char* rgb_p = img.ptr <uchar>(v);
            int r = rgb_p[3*u + 2];
            int g = rgb_p[3*u + 1];
            int b = rgb_p[3*u + 0];

            sprintf (out,"%f %f %f %d %d %d \n",
                    x,y,z,
                    r , g, b);
            printf ("final str is %s \n",out)   ;
            fwrite (out,1, strlen (out),fp_out);
            memset (out,0,100);
            list.clear ();
        }
    }
    memset (out,0,100);
    sprintf (out,"%d",i);
    fseek (fp_out,offset,SEEK_SET);
    fwrite (out,1, strlen (out),fp_out);
    fclose (fp);
    fclose (fp_out);
}


std::vector<std::string> UvImg::split(const  std::string& s, const std::string& delim)
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
