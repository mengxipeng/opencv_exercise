

#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <stdarg.h>

#include "common.h"

#include "utils.h"

int write_max2csv(const cv::Mat& mat, const char* fn)
{
  // check parameters
  if(!fn)
  {
    PRINT("fn is null");
    return -1;
  }

  FILE* fp;
  fp=fopen(fn,"w");
  if(!fp)
  {
    PRINT("can\'t open file %s", fn);
    return -2;
  }

  int rows=mat.rows;
  int cols=mat.cols;
  int x;
  int y;

  for(y=0;y<rows;y++)
  {
    for(x=0;x<cols-1;x++)
    {
      fprintf(fp,"%f,", *mat.ptr<float>(y,x));
    }
    fprintf(fp,"%f\n", *mat.ptr<float>(y,cols-1));
  }
  
  fclose(fp);
  return 0;
}


int write_max2csv_int(const cv::Mat& mat, const char* fn)
{
  // check parameters
  if(!fn)
  {
    PRINT("fn is null");
    return -1;
  }

  FILE* fp;
  fp=fopen(fn,"w");
  if(!fp)
  {
    PRINT("can\'t open file %s", fn);
    return -2;
  }

  int rows=mat.rows;
  int cols=mat.cols;
  int x;
  int y;

  for(y=0;y<rows;y++)
  {
    for(x=0;x<cols-1;x++)
    {
      fprintf(fp,"%d,", (int)(*mat.ptr<float>(y,x)));
    }
    fprintf(fp,"%d\n", (int)(*mat.ptr<float>(y,cols-1)));
  }
  
  fclose(fp);
  return 0;
}

cv::Mat read_csv2mat(const char* fn, int header)
{
  // check parameters
  if(!fn)
  {
    perror(" fn is null");
  }

  CvMLData data;
  data.set_header_lines_number(header);
  int ret = data.read_csv(fn);
  if(ret<0)
  {
    perror("can not read train csv file ");
  }

  const CvMat* cvmat_data  = data.get_values();
  const cv::Mat mat = cv::cvarrToMat(cvmat_data).clone();

  return mat;
}



// random permutation generator 
std::vector<int> random_permutation_generator(int len)
{
  std::vector<int> ord;
  int i;
  for(i=0;i<len;i++)
  {
    ord.push_back(i);
  }

  // shuffle 
  {
    srand(time(0));
    for(i=0;i<len;i++)
    {
      int idx=rand()%(len-1);
      int t;
      t=ord[idx];
      ord[idx]=ord[idx+1];
      ord[idx+1]=t;
    }
  }
  return ord;
}


struct _number
{
  int number;
  int id;
};

int compare_number(const void* a, const void* b)
{
  struct _number* pa=(struct _number*)a;
  struct _number* pb=(struct _number*)b;
  return pa->number-pb->number;
}

// random permutation generator using sorting method
std::vector<int> random_permutation_generator_sorting(int len)
{
  std::vector<int> ord ;
  int i;
  // generate len random number
  srand(time(0));
  struct _number* rng = new struct _number[len];
  for(i=0;i<len;i++)
  {
    rng [i].number=rand();
    rng [i].id=i;
  }

  // sort the array with standard sort algorithm
  qsort(rng, len, sizeof(struct _number), compare_number);

  for(i=0;i<len;i++)
  {
    ord.push_back(rng[i].id);
  }
  delete [] rng;

  return ord;
}


int dump_mat_info(const char* name, const cv::Mat& mat)
{
  PRINT("mat name %s", name);
  PRINT("   rows %d ", mat.rows);
  PRINT("   cols %d ", mat.cols);
  PRINT("   type %d ", mat.type());
  PRINT("   depth %d", mat.depth());
  PRINT("   channels %d", mat.channels());
  PRINT("   total %d", mat.total());
  return 0;
}

// write yaml
int write_mat2file(cv::Mat& mat, const char* fn )
{
  cv::FileStorage fs(fn, cv::FileStorage::WRITE);
  fs<<"value"<<mat;
  fs.release();
  return 0;
}
