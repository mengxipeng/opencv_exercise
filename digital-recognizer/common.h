
// all common stuff for opencv c standalone program or m


#ifndef __COMMON__
#define __COMMON__

#if C_TYPE  == 1

#define PRINT  mexPrintf
#include "mex.h"

#elif C_TYPE == 0

#define PRINT  debug_info

#endif

// all c stdlib header
#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>

// all cplusplus  stdlib header

// alll opencv header 
#include <opencv2/core/core.hpp>
#include <opencv2/core/core_c.h>
#include <opencv2/ml/ml.hpp>



#include "utils.h"

// all core function declare in here
cv::Mat knn_classifier(const cv::Mat train_feature, const cv::Mat train_label, const cv::Mat test_feature, int k);

#endif

