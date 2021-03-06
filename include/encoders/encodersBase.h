#ifndef _ENCODERS_BASE_H_
#define _ENCODERS_BASE_H_

#include <yarp/os/all.h>
#include <yarp/sig/all.h>
#include <opencv/cv.h>
#include <opencv/highgui.h>

using namespace std;
using namespace cv;
using namespace yarp::os;
using namespace yarp::sig;

class encodersBase
{
        virtual Mat get(Bottle *rawEncoders) = 0;
};

#endif
