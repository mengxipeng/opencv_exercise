//
//  main.c
//  test_mac_console
//
//  Created by mengxipeng on 9/11/12.
//  Copyright (c) 2012 mengxipeng. All rights reserved.
//

#include "common.h"

#define NUMS_TRAIN_SET 42000
#define NUMS_TEST_SET 28000
#define NUMS_PIXS 28
#define NUMS_FEATURE_SET (NUMS_PIXS*NUMS_PIXS)
#define K 10


#define TRAIN_FILE_FN DATA_DIR"/train.csv"
#define DATA_FILE_FN DATA_DIR"/test.csv."STR(NUMS_TEST_SET)
#define RESULT_FILE_FN DATA_DIR"/result.csv"


int test_crosss_validation()
{
  cv::Mat feature_set = read_csv2mat(DATA_DIR "/digital_recognizer_train_feature.csv");
  cv::Mat label_set   = read_csv2mat(DATA_DIR "/digital_recognizer_train_label.csv");

  // split data set into feature and label with 2/8  rule
  cv::Mat train_feature;
  cv::Mat train_label;
  cv::Mat valid_feature;
  cv::Mat valid_label;
  std::vector<int> ordlist = random_permutation_generator_sorting(feature_set.rows);
  int rows_train = feature_set.rows * 0.8;

  int i;
  int idx;
  for(i=0;i<rows_train;i++)
  {
    idx=ordlist[i];
    debug_info("idx = %d", idx);
    train_label.push_back(label_set.row(idx));
    train_feature.push_back(feature_set.row(idx));
  }
  for(;i<feature_set.rows;i++)
  {
    idx=ordlist[i];
    debug_info("idx = %d", idx);
    valid_label.push_back(label_set.row(idx));
    valid_feature.push_back(feature_set.row(idx));
  }

  // apply machine learning method
  int k=3;
  cv::Mat result_label = knn_classifier(train_feature, train_label, valid_feature, k);
  cv::Mat hit = result_label == valid_label;
  write_max2csv(hit, RESULT_DIR"/digital_recognizer_knn3_cross_validation.csv");
  debug_info(" hit rate : %f %%", countNonZero(hit)*100.0/result_label.rows);
  return 0;
}

int main(int argc, const char * argv[])
{

  debug_info("start program");

  test_crosss_validation();

  debug_info("finished");

  return 0;
}

