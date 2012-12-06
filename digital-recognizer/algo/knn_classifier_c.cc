
#include "common.h"

cv::Mat knn_classifier(const cv::Mat train_feature, const cv::Mat train_label, const cv::Mat test_feature, int k)
{
  cv::Mat test_label;
  cv::KNearest knn( train_feature, train_label);
  if(k<=0 || k>knn.get_max_k())
  {
    PRINT("k is not correct, knn.get_max_k()=%d", knn.get_max_k());
    exit(-1);
  }
  knn.find_nearest(test_feature, k, &test_label);
  return test_label;
}

