#ifndef HDRLIB_DEBAYER_HPP_
#define HDRLIB_DEBAYER_HPP_


#include "hdrlib_base.hpp"

namespace hdr
{

cv::Mat debayer(cv::Mat& in);
void floatDebayer(cv::Mat &image, cv::Mat &outputImage);
}


#endif /* HDRLIB_DEBAYER_HPP_ */
