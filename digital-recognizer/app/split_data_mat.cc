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


#define STR_EXPAND(tok) #tok
#define STR(tok) STR_EXPAND(tok)
#define TRAIN_FILE_FN DATA_DIR"/train.csv"
#define DATA_FILE_FN DATA_DIR"/test.csv."STR(NUMS_TEST_SET)
#define RESULT_FILE_FN DATA_DIR"/result.csv"

// int train_label[NUMS_TRAIN_SET];
// int train_feature[NUMS_TRAIN_SET*NUMS_FEATURE_SET];
// int test_feature[NUMS_TRAIN_SET*NUMS_FEATURE_SET];

int test_reduce_fun()
{
  // read the csv file for test matrix
  CvMLData train_data;
  int ret = train_data.read_csv(DATA_DIR"/test_input.csv");
  if(ret<0)
  {
    perror("can not read train csv file ");
    return -1;
  }

  const CvMat* cvmat_input_data = train_data.get_values();
  const cv::Mat input_data = cv::cvarrToMat(cvmat_input_data);

  // get the feature and label
	//cv::Mat reduced_train_feature = pca_reduce_dimension(input_data, 1);

  // write the result to file 
	//write_max2csv(reduced_train_feature,DATA_DIR"/test_output.csv");
  return 0;
}

int test_knn_classifier()
{
  // read the data
  CvMLData train_data;
  train_data.set_header_lines_number(1);
  int ret = train_data.read_csv(DATA_DIR"/train.csv");
  // 
  if(ret<0)
  {
    perror("can not read train csv file ");
    return -1;
  }
  const CvMat* cvmat_train_set_data = train_data.get_values();
  const cv::Mat train_set_data = cv::cvarrToMat(cvmat_train_set_data);

  CvMLData test_data;
  test_data.set_header_lines_number(1);
  ret = test_data.read_csv(DATA_DIR"/test.csv");
  if(ret<0)
  {
    perror("can not read test csv file ");
    return -1;
  }
  const CvMat* cvmat_test_set_data = test_data.get_values();
  const cv::Mat test_set_data = cv::cvarrToMat(cvmat_test_set_data);

  cv::Mat train_set = train_set_data.rowRange(0,100);

  cv::Mat train_feature = train_set.colRange(1,train_set.cols);
  cv::Mat train_label   = train_set.colRange(0,1);
  cv::Mat test_feature  = test_set_data.rowRange(0,100);

  write_max2csv(train_feature, DATA_DIR"/test_knn_classifier_input_train_feature.csv");
  write_max2csv(train_label  , DATA_DIR"/test_knn_classifier_input_train_label.csv");
  write_max2csv(test_feature , DATA_DIR"/test_knn_classifier_input_test_feature.csv");

  cv::Mat test_label=knn_classifier(train_feature, train_label, test_feature, 10);
  write_max2csv(test_label, DATA_DIR"/test_knn_classifier_output.csv");
  return 0;
}

int knn_find_maxk(const cv::Mat feature, const cv::Mat label) 
{
  int rows_feature = feature.rows;
  int rows_label   = label.rows;

  if(rows_label != rows_feature)
  {
    debug_info(" rows of the label is not same to rows of the feature");
    exit(-1);
  }

  // split the feature into train set and valid set
  int rows_train = rows_feature * .8;

  cv::Mat train_feature;
  cv::Mat train_label;
  cv::Mat valid_feature;
  cv::Mat valid_label;

  std::vector<int> ordlist = random_permutation_generator(rows_feature);
  int best_k=-1;
  int best_hit=-1;
  {
    int i;
    for(i=0;i<rows_train;i++)
    {
      int idx=ordlist[i];
      train_label.push_back(label.row(idx));
      train_feature.push_back(feature.row(idx));
    }
    for(; i<rows_feature; i++)
    {
      int idx=ordlist[i];
      valid_label.push_back(label.row(idx));
      valid_feature.push_back(feature.row(idx));
    }

    dump_mat_info("train_feature", train_feature);
    dump_mat_info("train_label"  , train_label);
    dump_mat_info("valid_feature", valid_feature);

    // train the knn classifier
    debug_info(" start trainn the knn classifier");
    cv::KNearest knn( train_feature, train_label);
    debug_info(" knn.get_max_k = %d", knn.get_max_k());
    debug_info(" end trainn the knn classifier");


    // find the nearest
    int max_k=knn.get_max_k();
    int k;
    for(k=1;k<=max_k;k++)
    {
      cv::Mat result;
      debug_info("begin knn classifier");
      knn.find_nearest(valid_feature, k, &result);
      debug_info("end knn classifier");
      dump_mat_info("presult", result);
      int hit=0;
      for(i=0;i<result.rows;i++)
      {
        float expected  = valid_label.at<float>(i,0);
        float predicted = result.at<float>(i,0);
        if(abs(expected-predicted)<.0001)
          hit++;
      }
      debug_info("hit = %d, k=%d", hit, k);
      if(hit > best_hit)
      {
        best_k=k;
        best_hit=hit;
      }
    }
  }
  return best_k;
}

int test_random_permutation_generator()
{
  std::vector<int>::iterator it;
  std::vector<int> ordlist = random_permutation_generator(5);
  for(it=ordlist.begin();it!=ordlist.end();it++)
  {
    int i=*it;
    std::cout << i << std::endl;
  }
  return 0;
}

int test_knn_classifier_find_maxk() 
{
  // read the csv file for test matrix
  CvMLData train_data;
  train_data.set_header_lines_number(1);
  int ret = train_data.read_csv(TRAIN_FILE_FN);
  // 
  if(ret<0)
  {
    perror("can not read train csv file ");
    return -1;
  }

  const CvMat* cvmat_train_set_data = train_data.get_values();
  const cv::Mat train_set_data = cv::cvarrToMat(cvmat_train_set_data);
  dump_mat_info("train_set_data", train_set_data);

  // get the feature and label
  cv::Mat train_label ;
  cv::Mat train_feature ;
  int train_set_cols = train_set_data.cols;
  train_label        = train_set_data.colRange(0,1);
  train_feature      = train_set_data.colRange(1,train_set_cols);
  dump_mat_info("train_label"  , train_label);
  dump_mat_info("train_feature", train_feature);

  int bestk = knn_find_maxk(train_feature, train_label);
  debug_info("bestk=%d",bestk);

  return 0;
}

int split_data_file(const char* src, const char* feature_fn, const char* label_fn)
{
  cv::Mat mat = read_csv2mat(src,1);
  
  cv::Mat feature = mat.colRange(1,mat.cols);
  cv::Mat label   = mat.col(0);

  write_max2csv(feature, feature_fn);
  write_max2csv(label  , label_fn  );
  return 0;
}

int main(int argc, const char * argv[])
{

  debug_info("start program");
  // this program process the download csv file 

  split_data_file(DATA_DIR"/train.csv", DATA_DIR"/digital_recognizer_train_feature.csv", DATA_DIR"/digital_recognizer_train_label.csv");
  cv::Mat mat = read_csv2mat(DATA_DIR"/test.csv", 1);
  write_max2csv(mat, DATA_DIR"/digital_recognizer_test_feature.csv");

  debug_info("finished");

  return 0;
}

