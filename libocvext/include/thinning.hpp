#ifndef THINNING_H
#define THINNING_H

#include <opencv4/opencv2/core.hpp>

namespace ocvext {

extern void thinning_Zhang_Suen(const cv::Mat& I, cv::Mat &O);

extern void thinning_Guo_Hall(const cv::Mat& I, cv::Mat &O);

extern void thinning_morpho(const cv::Mat &I, cv::Mat &O);

}

#endif
