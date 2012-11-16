
#ifndef __RW__CSV__
#define __RW__CSV__



#include <stdio.h>
#include <opencv/cv.h>

// read the data opencv
// parameter:
//    fn -- file name
//    label -- matrix for label vector
//    feature -- matrix for feature matrix
//    header  -- the line number of header
//    rows -- the line number want to read , -1 indicate read all  lines in the data file
int read_train_set_tomax(char* fn, CvMat* label, CvMat* feature, int header, int rows)
{
  int num_features = cvGetDimSize(feature,1);
  int num_samples = cvGetDimSize(feature,0);
  FILE* fp = fopen(fn,"r");
  if(fp)
  {
    static char line [8000];
    int i;
    for(i=0;i<header;i++)
    {
      fgets(line, sizeof line, fp); // skip the header line
    }
    int lineno=0;
    while (fgets(line, sizeof line, fp) != NULL)
    {
      //printf("\rline %d", lineno);
      //printf("line %s\n", line);
      if( num_features + 1 != sscanf(line,
         "%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
                        , &label->data.fl[lineno]
                        , &feature->data.fl[ num_features*lineno + 0  ]
                        , &feature->data.fl[ num_features*lineno + 1  ]
                        , &feature->data.fl[ num_features*lineno + 2  ]
                        , &feature->data.fl[ num_features*lineno + 3  ]
                        , &feature->data.fl[ num_features*lineno + 4  ]
                        , &feature->data.fl[ num_features*lineno + 5  ]
                        , &feature->data.fl[ num_features*lineno + 6  ]
                        , &feature->data.fl[ num_features*lineno + 7  ]
                        , &feature->data.fl[ num_features*lineno + 8  ]
                        , &feature->data.fl[ num_features*lineno + 9  ]
                        , &feature->data.fl[ num_features*lineno + 10 ]
                        , &feature->data.fl[ num_features*lineno + 11 ]
                        , &feature->data.fl[ num_features*lineno + 12 ]
                        , &feature->data.fl[ num_features*lineno + 13 ]
                        , &feature->data.fl[ num_features*lineno + 14 ]
                        , &feature->data.fl[ num_features*lineno + 15 ]
                        , &feature->data.fl[ num_features*lineno + 16 ]
                        , &feature->data.fl[ num_features*lineno + 17 ]
                        , &feature->data.fl[ num_features*lineno + 18 ]
                        , &feature->data.fl[ num_features*lineno + 19 ]
                        , &feature->data.fl[ num_features*lineno + 20 ]
                        , &feature->data.fl[ num_features*lineno + 21 ]
                        , &feature->data.fl[ num_features*lineno + 22 ]
                        , &feature->data.fl[ num_features*lineno + 23 ]
                        , &feature->data.fl[ num_features*lineno + 24 ]
                        , &feature->data.fl[ num_features*lineno + 25 ]
                        , &feature->data.fl[ num_features*lineno + 26 ]
                        , &feature->data.fl[ num_features*lineno + 27 ]
                        , &feature->data.fl[ num_features*lineno + 28 ]
                        , &feature->data.fl[ num_features*lineno + 29 ]
                        , &feature->data.fl[ num_features*lineno + 30 ]
                        , &feature->data.fl[ num_features*lineno + 31 ]
                        , &feature->data.fl[ num_features*lineno + 32 ]
                        , &feature->data.fl[ num_features*lineno + 33 ]
                        , &feature->data.fl[ num_features*lineno + 34 ]
                        , &feature->data.fl[ num_features*lineno + 35 ]
                        , &feature->data.fl[ num_features*lineno + 36 ]
                        , &feature->data.fl[ num_features*lineno + 37 ]
                        , &feature->data.fl[ num_features*lineno + 38 ]
                        , &feature->data.fl[ num_features*lineno + 39 ]
                        , &feature->data.fl[ num_features*lineno + 40 ]
                        , &feature->data.fl[ num_features*lineno + 41 ]
                        , &feature->data.fl[ num_features*lineno + 42 ]
                        , &feature->data.fl[ num_features*lineno + 43 ]
                        , &feature->data.fl[ num_features*lineno + 44 ]
                        , &feature->data.fl[ num_features*lineno + 45 ]
                        , &feature->data.fl[ num_features*lineno + 46 ]
                        , &feature->data.fl[ num_features*lineno + 47 ]
                        , &feature->data.fl[ num_features*lineno + 48 ]
                        , &feature->data.fl[ num_features*lineno + 49 ]
                        , &feature->data.fl[ num_features*lineno + 50 ]
                        , &feature->data.fl[ num_features*lineno + 51 ]
                        , &feature->data.fl[ num_features*lineno + 52 ]
                        , &feature->data.fl[ num_features*lineno + 53 ]
                        , &feature->data.fl[ num_features*lineno + 54 ]
                        , &feature->data.fl[ num_features*lineno + 55 ]
                        , &feature->data.fl[ num_features*lineno + 56 ]
                        , &feature->data.fl[ num_features*lineno + 57 ]
                        , &feature->data.fl[ num_features*lineno + 58 ]
                        , &feature->data.fl[ num_features*lineno + 59 ]
                        , &feature->data.fl[ num_features*lineno + 60 ]
                        , &feature->data.fl[ num_features*lineno + 61 ]
                        , &feature->data.fl[ num_features*lineno + 62 ]
                        , &feature->data.fl[ num_features*lineno + 63 ]
                        , &feature->data.fl[ num_features*lineno + 64 ]
                        , &feature->data.fl[ num_features*lineno + 65 ]
                        , &feature->data.fl[ num_features*lineno + 66 ]
                        , &feature->data.fl[ num_features*lineno + 67 ]
                        , &feature->data.fl[ num_features*lineno + 68 ]
                        , &feature->data.fl[ num_features*lineno + 69 ]
                        , &feature->data.fl[ num_features*lineno + 70 ]
                        , &feature->data.fl[ num_features*lineno + 71 ]
                        , &feature->data.fl[ num_features*lineno + 72 ]
                        , &feature->data.fl[ num_features*lineno + 73 ]
                        , &feature->data.fl[ num_features*lineno + 74 ]
                        , &feature->data.fl[ num_features*lineno + 75 ]
                        , &feature->data.fl[ num_features*lineno + 76 ]
                        , &feature->data.fl[ num_features*lineno + 77 ]
                        , &feature->data.fl[ num_features*lineno + 78 ]
                        , &feature->data.fl[ num_features*lineno + 79 ]
                        , &feature->data.fl[ num_features*lineno + 80 ]
                        , &feature->data.fl[ num_features*lineno + 81 ]
                        , &feature->data.fl[ num_features*lineno + 82 ]
                        , &feature->data.fl[ num_features*lineno + 83 ]
                        , &feature->data.fl[ num_features*lineno + 84 ]
                        , &feature->data.fl[ num_features*lineno + 85 ]
                        , &feature->data.fl[ num_features*lineno + 86 ]
                        , &feature->data.fl[ num_features*lineno + 87 ]
                        , &feature->data.fl[ num_features*lineno + 88 ]
                        , &feature->data.fl[ num_features*lineno + 89 ]
                        , &feature->data.fl[ num_features*lineno + 90 ]
                        , &feature->data.fl[ num_features*lineno + 91 ]
                        , &feature->data.fl[ num_features*lineno + 92 ]
                        , &feature->data.fl[ num_features*lineno + 93 ]
                        , &feature->data.fl[ num_features*lineno + 94 ]
                        , &feature->data.fl[ num_features*lineno + 95 ]
                        , &feature->data.fl[ num_features*lineno + 96 ]
                        , &feature->data.fl[ num_features*lineno + 97 ]
                        , &feature->data.fl[ num_features*lineno + 98 ]
                        , &feature->data.fl[ num_features*lineno + 99 ]
                        , &feature->data.fl[ num_features*lineno + 100]
                        , &feature->data.fl[ num_features*lineno + 101]
                        , &feature->data.fl[ num_features*lineno + 102]
                        , &feature->data.fl[ num_features*lineno + 103]
                        , &feature->data.fl[ num_features*lineno + 104]
                        , &feature->data.fl[ num_features*lineno + 105]
                        , &feature->data.fl[ num_features*lineno + 106]
                        , &feature->data.fl[ num_features*lineno + 107]
                        , &feature->data.fl[ num_features*lineno + 108]
                        , &feature->data.fl[ num_features*lineno + 109]
                        , &feature->data.fl[ num_features*lineno + 110]
                        , &feature->data.fl[ num_features*lineno + 111]
                        , &feature->data.fl[ num_features*lineno + 112]
                        , &feature->data.fl[ num_features*lineno + 113]
                        , &feature->data.fl[ num_features*lineno + 114]
                        , &feature->data.fl[ num_features*lineno + 115]
                        , &feature->data.fl[ num_features*lineno + 116]
                        , &feature->data.fl[ num_features*lineno + 117]
                        , &feature->data.fl[ num_features*lineno + 118]
                        , &feature->data.fl[ num_features*lineno + 119]
                        , &feature->data.fl[ num_features*lineno + 120]
                        , &feature->data.fl[ num_features*lineno + 121]
                        , &feature->data.fl[ num_features*lineno + 122]
                        , &feature->data.fl[ num_features*lineno + 123]
                        , &feature->data.fl[ num_features*lineno + 124]
                        , &feature->data.fl[ num_features*lineno + 125]
                        , &feature->data.fl[ num_features*lineno + 126]
                        , &feature->data.fl[ num_features*lineno + 127]
                        , &feature->data.fl[ num_features*lineno + 128]
                        , &feature->data.fl[ num_features*lineno + 129]
                        , &feature->data.fl[ num_features*lineno + 130]
                        , &feature->data.fl[ num_features*lineno + 131]
                        , &feature->data.fl[ num_features*lineno + 132]
                        , &feature->data.fl[ num_features*lineno + 133]
                        , &feature->data.fl[ num_features*lineno + 134]
                        , &feature->data.fl[ num_features*lineno + 135]
                        , &feature->data.fl[ num_features*lineno + 136]
                        , &feature->data.fl[ num_features*lineno + 137]
                        , &feature->data.fl[ num_features*lineno + 138]
                        , &feature->data.fl[ num_features*lineno + 139]
                        , &feature->data.fl[ num_features*lineno + 140]
                        , &feature->data.fl[ num_features*lineno + 141]
                        , &feature->data.fl[ num_features*lineno + 142]
                        , &feature->data.fl[ num_features*lineno + 143]
                        , &feature->data.fl[ num_features*lineno + 144]
                        , &feature->data.fl[ num_features*lineno + 145]
                        , &feature->data.fl[ num_features*lineno + 146]
                        , &feature->data.fl[ num_features*lineno + 147]
                        , &feature->data.fl[ num_features*lineno + 148]
                        , &feature->data.fl[ num_features*lineno + 149]
                        , &feature->data.fl[ num_features*lineno + 150]
                        , &feature->data.fl[ num_features*lineno + 151]
                        , &feature->data.fl[ num_features*lineno + 152]
                        , &feature->data.fl[ num_features*lineno + 153]
                        , &feature->data.fl[ num_features*lineno + 154]
                        , &feature->data.fl[ num_features*lineno + 155]
                        , &feature->data.fl[ num_features*lineno + 156]
                        , &feature->data.fl[ num_features*lineno + 157]
                        , &feature->data.fl[ num_features*lineno + 158]
                        , &feature->data.fl[ num_features*lineno + 159]
                        , &feature->data.fl[ num_features*lineno + 160]
                        , &feature->data.fl[ num_features*lineno + 161]
                        , &feature->data.fl[ num_features*lineno + 162]
                        , &feature->data.fl[ num_features*lineno + 163]
                        , &feature->data.fl[ num_features*lineno + 164]
                        , &feature->data.fl[ num_features*lineno + 165]
                        , &feature->data.fl[ num_features*lineno + 166]
                        , &feature->data.fl[ num_features*lineno + 167]
                        , &feature->data.fl[ num_features*lineno + 168]
                        , &feature->data.fl[ num_features*lineno + 169]
                        , &feature->data.fl[ num_features*lineno + 170]
                        , &feature->data.fl[ num_features*lineno + 171]
                        , &feature->data.fl[ num_features*lineno + 172]
                        , &feature->data.fl[ num_features*lineno + 173]
                        , &feature->data.fl[ num_features*lineno + 174]
                        , &feature->data.fl[ num_features*lineno + 175]
                        , &feature->data.fl[ num_features*lineno + 176]
                        , &feature->data.fl[ num_features*lineno + 177]
                        , &feature->data.fl[ num_features*lineno + 178]
                        , &feature->data.fl[ num_features*lineno + 179]
                        , &feature->data.fl[ num_features*lineno + 180]
                        , &feature->data.fl[ num_features*lineno + 181]
                        , &feature->data.fl[ num_features*lineno + 182]
                        , &feature->data.fl[ num_features*lineno + 183]
                        , &feature->data.fl[ num_features*lineno + 184]
                        , &feature->data.fl[ num_features*lineno + 185]
                        , &feature->data.fl[ num_features*lineno + 186]
                        , &feature->data.fl[ num_features*lineno + 187]
                        , &feature->data.fl[ num_features*lineno + 188]
                        , &feature->data.fl[ num_features*lineno + 189]
                        , &feature->data.fl[ num_features*lineno + 190]
                        , &feature->data.fl[ num_features*lineno + 191]
                        , &feature->data.fl[ num_features*lineno + 192]
                        , &feature->data.fl[ num_features*lineno + 193]
                        , &feature->data.fl[ num_features*lineno + 194]
                        , &feature->data.fl[ num_features*lineno + 195]
                        , &feature->data.fl[ num_features*lineno + 196]
                        , &feature->data.fl[ num_features*lineno + 197]
                        , &feature->data.fl[ num_features*lineno + 198]
                        , &feature->data.fl[ num_features*lineno + 199]
                        , &feature->data.fl[ num_features*lineno + 200]
                        , &feature->data.fl[ num_features*lineno + 201]
                        , &feature->data.fl[ num_features*lineno + 202]
                        , &feature->data.fl[ num_features*lineno + 203]
                        , &feature->data.fl[ num_features*lineno + 204]
                        , &feature->data.fl[ num_features*lineno + 205]
                        , &feature->data.fl[ num_features*lineno + 206]
                        , &feature->data.fl[ num_features*lineno + 207]
                        , &feature->data.fl[ num_features*lineno + 208]
                        , &feature->data.fl[ num_features*lineno + 209]
                        , &feature->data.fl[ num_features*lineno + 210]
                        , &feature->data.fl[ num_features*lineno + 211]
                        , &feature->data.fl[ num_features*lineno + 212]
                        , &feature->data.fl[ num_features*lineno + 213]
                        , &feature->data.fl[ num_features*lineno + 214]
                        , &feature->data.fl[ num_features*lineno + 215]
                        , &feature->data.fl[ num_features*lineno + 216]
                        , &feature->data.fl[ num_features*lineno + 217]
                        , &feature->data.fl[ num_features*lineno + 218]
                        , &feature->data.fl[ num_features*lineno + 219]
                        , &feature->data.fl[ num_features*lineno + 220]
                        , &feature->data.fl[ num_features*lineno + 221]
                        , &feature->data.fl[ num_features*lineno + 222]
                        , &feature->data.fl[ num_features*lineno + 223]
                        , &feature->data.fl[ num_features*lineno + 224]
                        , &feature->data.fl[ num_features*lineno + 225]
                        , &feature->data.fl[ num_features*lineno + 226]
                        , &feature->data.fl[ num_features*lineno + 227]
                        , &feature->data.fl[ num_features*lineno + 228]
                        , &feature->data.fl[ num_features*lineno + 229]
                        , &feature->data.fl[ num_features*lineno + 230]
                        , &feature->data.fl[ num_features*lineno + 231]
                        , &feature->data.fl[ num_features*lineno + 232]
                        , &feature->data.fl[ num_features*lineno + 233]
                        , &feature->data.fl[ num_features*lineno + 234]
                        , &feature->data.fl[ num_features*lineno + 235]
                        , &feature->data.fl[ num_features*lineno + 236]
                        , &feature->data.fl[ num_features*lineno + 237]
                        , &feature->data.fl[ num_features*lineno + 238]
                        , &feature->data.fl[ num_features*lineno + 239]
                        , &feature->data.fl[ num_features*lineno + 240]
                        , &feature->data.fl[ num_features*lineno + 241]
                        , &feature->data.fl[ num_features*lineno + 242]
                        , &feature->data.fl[ num_features*lineno + 243]
                        , &feature->data.fl[ num_features*lineno + 244]
                        , &feature->data.fl[ num_features*lineno + 245]
                        , &feature->data.fl[ num_features*lineno + 246]
                        , &feature->data.fl[ num_features*lineno + 247]
                        , &feature->data.fl[ num_features*lineno + 248]
                        , &feature->data.fl[ num_features*lineno + 249]
                        , &feature->data.fl[ num_features*lineno + 250]
                        , &feature->data.fl[ num_features*lineno + 251]
                        , &feature->data.fl[ num_features*lineno + 252]
                        , &feature->data.fl[ num_features*lineno + 253]
                        , &feature->data.fl[ num_features*lineno + 254]
                        , &feature->data.fl[ num_features*lineno + 255]
                        , &feature->data.fl[ num_features*lineno + 256]
                        , &feature->data.fl[ num_features*lineno + 257]
                        , &feature->data.fl[ num_features*lineno + 258]
                        , &feature->data.fl[ num_features*lineno + 259]
                        , &feature->data.fl[ num_features*lineno + 260]
                        , &feature->data.fl[ num_features*lineno + 261]
                        , &feature->data.fl[ num_features*lineno + 262]
                        , &feature->data.fl[ num_features*lineno + 263]
                        , &feature->data.fl[ num_features*lineno + 264]
                        , &feature->data.fl[ num_features*lineno + 265]
                        , &feature->data.fl[ num_features*lineno + 266]
                        , &feature->data.fl[ num_features*lineno + 267]
                        , &feature->data.fl[ num_features*lineno + 268]
                        , &feature->data.fl[ num_features*lineno + 269]
                        , &feature->data.fl[ num_features*lineno + 270]
                        , &feature->data.fl[ num_features*lineno + 271]
                        , &feature->data.fl[ num_features*lineno + 272]
                        , &feature->data.fl[ num_features*lineno + 273]
                        , &feature->data.fl[ num_features*lineno + 274]
                        , &feature->data.fl[ num_features*lineno + 275]
                        , &feature->data.fl[ num_features*lineno + 276]
                        , &feature->data.fl[ num_features*lineno + 277]
                        , &feature->data.fl[ num_features*lineno + 278]
                        , &feature->data.fl[ num_features*lineno + 279]
                        , &feature->data.fl[ num_features*lineno + 280]
                        , &feature->data.fl[ num_features*lineno + 281]
                        , &feature->data.fl[ num_features*lineno + 282]
                        , &feature->data.fl[ num_features*lineno + 283]
                        , &feature->data.fl[ num_features*lineno + 284]
                        , &feature->data.fl[ num_features*lineno + 285]
                        , &feature->data.fl[ num_features*lineno + 286]
                        , &feature->data.fl[ num_features*lineno + 287]
                        , &feature->data.fl[ num_features*lineno + 288]
                        , &feature->data.fl[ num_features*lineno + 289]
                        , &feature->data.fl[ num_features*lineno + 290]
                        , &feature->data.fl[ num_features*lineno + 291]
                        , &feature->data.fl[ num_features*lineno + 292]
                        , &feature->data.fl[ num_features*lineno + 293]
                        , &feature->data.fl[ num_features*lineno + 294]
                        , &feature->data.fl[ num_features*lineno + 295]
                        , &feature->data.fl[ num_features*lineno + 296]
                        , &feature->data.fl[ num_features*lineno + 297]
                        , &feature->data.fl[ num_features*lineno + 298]
                        , &feature->data.fl[ num_features*lineno + 299]
                        , &feature->data.fl[ num_features*lineno + 300]
                        , &feature->data.fl[ num_features*lineno + 301]
                        , &feature->data.fl[ num_features*lineno + 302]
                        , &feature->data.fl[ num_features*lineno + 303]
                        , &feature->data.fl[ num_features*lineno + 304]
                        , &feature->data.fl[ num_features*lineno + 305]
                        , &feature->data.fl[ num_features*lineno + 306]
                        , &feature->data.fl[ num_features*lineno + 307]
                        , &feature->data.fl[ num_features*lineno + 308]
                        , &feature->data.fl[ num_features*lineno + 309]
                        , &feature->data.fl[ num_features*lineno + 310]
                        , &feature->data.fl[ num_features*lineno + 311]
                        , &feature->data.fl[ num_features*lineno + 312]
                        , &feature->data.fl[ num_features*lineno + 313]
                        , &feature->data.fl[ num_features*lineno + 314]
                        , &feature->data.fl[ num_features*lineno + 315]
                        , &feature->data.fl[ num_features*lineno + 316]
                        , &feature->data.fl[ num_features*lineno + 317]
                        , &feature->data.fl[ num_features*lineno + 318]
                        , &feature->data.fl[ num_features*lineno + 319]
                        , &feature->data.fl[ num_features*lineno + 320]
                        , &feature->data.fl[ num_features*lineno + 321]
                        , &feature->data.fl[ num_features*lineno + 322]
                        , &feature->data.fl[ num_features*lineno + 323]
                        , &feature->data.fl[ num_features*lineno + 324]
                        , &feature->data.fl[ num_features*lineno + 325]
                        , &feature->data.fl[ num_features*lineno + 326]
                        , &feature->data.fl[ num_features*lineno + 327]
                        , &feature->data.fl[ num_features*lineno + 328]
                        , &feature->data.fl[ num_features*lineno + 329]
                        , &feature->data.fl[ num_features*lineno + 330]
                        , &feature->data.fl[ num_features*lineno + 331]
                        , &feature->data.fl[ num_features*lineno + 332]
                        , &feature->data.fl[ num_features*lineno + 333]
                        , &feature->data.fl[ num_features*lineno + 334]
                        , &feature->data.fl[ num_features*lineno + 335]
                        , &feature->data.fl[ num_features*lineno + 336]
                        , &feature->data.fl[ num_features*lineno + 337]
                        , &feature->data.fl[ num_features*lineno + 338]
                        , &feature->data.fl[ num_features*lineno + 339]
                        , &feature->data.fl[ num_features*lineno + 340]
                        , &feature->data.fl[ num_features*lineno + 341]
                        , &feature->data.fl[ num_features*lineno + 342]
                        , &feature->data.fl[ num_features*lineno + 343]
                        , &feature->data.fl[ num_features*lineno + 344]
                        , &feature->data.fl[ num_features*lineno + 345]
                        , &feature->data.fl[ num_features*lineno + 346]
                        , &feature->data.fl[ num_features*lineno + 347]
                        , &feature->data.fl[ num_features*lineno + 348]
                        , &feature->data.fl[ num_features*lineno + 349]
                        , &feature->data.fl[ num_features*lineno + 350]
                        , &feature->data.fl[ num_features*lineno + 351]
                        , &feature->data.fl[ num_features*lineno + 352]
                        , &feature->data.fl[ num_features*lineno + 353]
                        , &feature->data.fl[ num_features*lineno + 354]
                        , &feature->data.fl[ num_features*lineno + 355]
                        , &feature->data.fl[ num_features*lineno + 356]
                        , &feature->data.fl[ num_features*lineno + 357]
                        , &feature->data.fl[ num_features*lineno + 358]
                        , &feature->data.fl[ num_features*lineno + 359]
                        , &feature->data.fl[ num_features*lineno + 360]
                        , &feature->data.fl[ num_features*lineno + 361]
                        , &feature->data.fl[ num_features*lineno + 362]
                        , &feature->data.fl[ num_features*lineno + 363]
                        , &feature->data.fl[ num_features*lineno + 364]
                        , &feature->data.fl[ num_features*lineno + 365]
                        , &feature->data.fl[ num_features*lineno + 366]
                        , &feature->data.fl[ num_features*lineno + 367]
                        , &feature->data.fl[ num_features*lineno + 368]
                        , &feature->data.fl[ num_features*lineno + 369]
                        , &feature->data.fl[ num_features*lineno + 370]
                        , &feature->data.fl[ num_features*lineno + 371]
                        , &feature->data.fl[ num_features*lineno + 372]
                        , &feature->data.fl[ num_features*lineno + 373]
                        , &feature->data.fl[ num_features*lineno + 374]
                        , &feature->data.fl[ num_features*lineno + 375]
                        , &feature->data.fl[ num_features*lineno + 376]
                        , &feature->data.fl[ num_features*lineno + 377]
                        , &feature->data.fl[ num_features*lineno + 378]
                        , &feature->data.fl[ num_features*lineno + 379]
                        , &feature->data.fl[ num_features*lineno + 380]
                        , &feature->data.fl[ num_features*lineno + 381]
                        , &feature->data.fl[ num_features*lineno + 382]
                        , &feature->data.fl[ num_features*lineno + 383]
                        , &feature->data.fl[ num_features*lineno + 384]
                        , &feature->data.fl[ num_features*lineno + 385]
                        , &feature->data.fl[ num_features*lineno + 386]
                        , &feature->data.fl[ num_features*lineno + 387]
                        , &feature->data.fl[ num_features*lineno + 388]
                        , &feature->data.fl[ num_features*lineno + 389]
                        , &feature->data.fl[ num_features*lineno + 390]
                        , &feature->data.fl[ num_features*lineno + 391]
                        , &feature->data.fl[ num_features*lineno + 392]
                        , &feature->data.fl[ num_features*lineno + 393]
                        , &feature->data.fl[ num_features*lineno + 394]
                        , &feature->data.fl[ num_features*lineno + 395]
                        , &feature->data.fl[ num_features*lineno + 396]
                        , &feature->data.fl[ num_features*lineno + 397]
                        , &feature->data.fl[ num_features*lineno + 398]
                        , &feature->data.fl[ num_features*lineno + 399]
                        , &feature->data.fl[ num_features*lineno + 400]
                        , &feature->data.fl[ num_features*lineno + 401]
                        , &feature->data.fl[ num_features*lineno + 402]
                        , &feature->data.fl[ num_features*lineno + 403]
                        , &feature->data.fl[ num_features*lineno + 404]
                        , &feature->data.fl[ num_features*lineno + 405]
                        , &feature->data.fl[ num_features*lineno + 406]
                        , &feature->data.fl[ num_features*lineno + 407]
                        , &feature->data.fl[ num_features*lineno + 408]
                        , &feature->data.fl[ num_features*lineno + 409]
                        , &feature->data.fl[ num_features*lineno + 410]
                        , &feature->data.fl[ num_features*lineno + 411]
                        , &feature->data.fl[ num_features*lineno + 412]
                        , &feature->data.fl[ num_features*lineno + 413]
                        , &feature->data.fl[ num_features*lineno + 414]
                        , &feature->data.fl[ num_features*lineno + 415]
                        , &feature->data.fl[ num_features*lineno + 416]
                        , &feature->data.fl[ num_features*lineno + 417]
                        , &feature->data.fl[ num_features*lineno + 418]
                        , &feature->data.fl[ num_features*lineno + 419]
                        , &feature->data.fl[ num_features*lineno + 420]
                        , &feature->data.fl[ num_features*lineno + 421]
                        , &feature->data.fl[ num_features*lineno + 422]
                        , &feature->data.fl[ num_features*lineno + 423]
                        , &feature->data.fl[ num_features*lineno + 424]
                        , &feature->data.fl[ num_features*lineno + 425]
                        , &feature->data.fl[ num_features*lineno + 426]
                        , &feature->data.fl[ num_features*lineno + 427]
                        , &feature->data.fl[ num_features*lineno + 428]
                        , &feature->data.fl[ num_features*lineno + 429]
                        , &feature->data.fl[ num_features*lineno + 430]
                        , &feature->data.fl[ num_features*lineno + 431]
                        , &feature->data.fl[ num_features*lineno + 432]
                        , &feature->data.fl[ num_features*lineno + 433]
                        , &feature->data.fl[ num_features*lineno + 434]
                        , &feature->data.fl[ num_features*lineno + 435]
                        , &feature->data.fl[ num_features*lineno + 436]
                        , &feature->data.fl[ num_features*lineno + 437]
                        , &feature->data.fl[ num_features*lineno + 438]
                        , &feature->data.fl[ num_features*lineno + 439]
                        , &feature->data.fl[ num_features*lineno + 440]
                        , &feature->data.fl[ num_features*lineno + 441]
                        , &feature->data.fl[ num_features*lineno + 442]
                        , &feature->data.fl[ num_features*lineno + 443]
                        , &feature->data.fl[ num_features*lineno + 444]
                        , &feature->data.fl[ num_features*lineno + 445]
                        , &feature->data.fl[ num_features*lineno + 446]
                        , &feature->data.fl[ num_features*lineno + 447]
                        , &feature->data.fl[ num_features*lineno + 448]
                        , &feature->data.fl[ num_features*lineno + 449]
                        , &feature->data.fl[ num_features*lineno + 450]
                        , &feature->data.fl[ num_features*lineno + 451]
                        , &feature->data.fl[ num_features*lineno + 452]
                        , &feature->data.fl[ num_features*lineno + 453]
                        , &feature->data.fl[ num_features*lineno + 454]
                        , &feature->data.fl[ num_features*lineno + 455]
                        , &feature->data.fl[ num_features*lineno + 456]
                        , &feature->data.fl[ num_features*lineno + 457]
                        , &feature->data.fl[ num_features*lineno + 458]
                        , &feature->data.fl[ num_features*lineno + 459]
                        , &feature->data.fl[ num_features*lineno + 460]
                        , &feature->data.fl[ num_features*lineno + 461]
                        , &feature->data.fl[ num_features*lineno + 462]
                        , &feature->data.fl[ num_features*lineno + 463]
                        , &feature->data.fl[ num_features*lineno + 464]
                        , &feature->data.fl[ num_features*lineno + 465]
                        , &feature->data.fl[ num_features*lineno + 466]
                        , &feature->data.fl[ num_features*lineno + 467]
                        , &feature->data.fl[ num_features*lineno + 468]
                        , &feature->data.fl[ num_features*lineno + 469]
                        , &feature->data.fl[ num_features*lineno + 470]
                        , &feature->data.fl[ num_features*lineno + 471]
                        , &feature->data.fl[ num_features*lineno + 472]
                        , &feature->data.fl[ num_features*lineno + 473]
                        , &feature->data.fl[ num_features*lineno + 474]
                        , &feature->data.fl[ num_features*lineno + 475]
                        , &feature->data.fl[ num_features*lineno + 476]
                        , &feature->data.fl[ num_features*lineno + 477]
                        , &feature->data.fl[ num_features*lineno + 478]
                        , &feature->data.fl[ num_features*lineno + 479]
                        , &feature->data.fl[ num_features*lineno + 480]
                        , &feature->data.fl[ num_features*lineno + 481]
                        , &feature->data.fl[ num_features*lineno + 482]
                        , &feature->data.fl[ num_features*lineno + 483]
                        , &feature->data.fl[ num_features*lineno + 484]
                        , &feature->data.fl[ num_features*lineno + 485]
                        , &feature->data.fl[ num_features*lineno + 486]
                        , &feature->data.fl[ num_features*lineno + 487]
                        , &feature->data.fl[ num_features*lineno + 488]
                        , &feature->data.fl[ num_features*lineno + 489]
                        , &feature->data.fl[ num_features*lineno + 490]
                        , &feature->data.fl[ num_features*lineno + 491]
                        , &feature->data.fl[ num_features*lineno + 492]
                        , &feature->data.fl[ num_features*lineno + 493]
                        , &feature->data.fl[ num_features*lineno + 494]
                        , &feature->data.fl[ num_features*lineno + 495]
                        , &feature->data.fl[ num_features*lineno + 496]
                        , &feature->data.fl[ num_features*lineno + 497]
                        , &feature->data.fl[ num_features*lineno + 498]
                        , &feature->data.fl[ num_features*lineno + 499]
                        , &feature->data.fl[ num_features*lineno + 500]
                        , &feature->data.fl[ num_features*lineno + 501]
                        , &feature->data.fl[ num_features*lineno + 502]
                        , &feature->data.fl[ num_features*lineno + 503]
                        , &feature->data.fl[ num_features*lineno + 504]
                        , &feature->data.fl[ num_features*lineno + 505]
                        , &feature->data.fl[ num_features*lineno + 506]
                        , &feature->data.fl[ num_features*lineno + 507]
                        , &feature->data.fl[ num_features*lineno + 508]
                        , &feature->data.fl[ num_features*lineno + 509]
                        , &feature->data.fl[ num_features*lineno + 510]
                        , &feature->data.fl[ num_features*lineno + 511]
                        , &feature->data.fl[ num_features*lineno + 512]
                        , &feature->data.fl[ num_features*lineno + 513]
                        , &feature->data.fl[ num_features*lineno + 514]
                        , &feature->data.fl[ num_features*lineno + 515]
                        , &feature->data.fl[ num_features*lineno + 516]
                        , &feature->data.fl[ num_features*lineno + 517]
                        , &feature->data.fl[ num_features*lineno + 518]
                        , &feature->data.fl[ num_features*lineno + 519]
                        , &feature->data.fl[ num_features*lineno + 520]
                        , &feature->data.fl[ num_features*lineno + 521]
                        , &feature->data.fl[ num_features*lineno + 522]
                        , &feature->data.fl[ num_features*lineno + 523]
                        , &feature->data.fl[ num_features*lineno + 524]
                        , &feature->data.fl[ num_features*lineno + 525]
                        , &feature->data.fl[ num_features*lineno + 526]
                        , &feature->data.fl[ num_features*lineno + 527]
                        , &feature->data.fl[ num_features*lineno + 528]
                        , &feature->data.fl[ num_features*lineno + 529]
                        , &feature->data.fl[ num_features*lineno + 530]
                        , &feature->data.fl[ num_features*lineno + 531]
                        , &feature->data.fl[ num_features*lineno + 532]
                        , &feature->data.fl[ num_features*lineno + 533]
                        , &feature->data.fl[ num_features*lineno + 534]
                        , &feature->data.fl[ num_features*lineno + 535]
                        , &feature->data.fl[ num_features*lineno + 536]
                        , &feature->data.fl[ num_features*lineno + 537]
                        , &feature->data.fl[ num_features*lineno + 538]
                        , &feature->data.fl[ num_features*lineno + 539]
                        , &feature->data.fl[ num_features*lineno + 540]
                        , &feature->data.fl[ num_features*lineno + 541]
                        , &feature->data.fl[ num_features*lineno + 542]
                        , &feature->data.fl[ num_features*lineno + 543]
                        , &feature->data.fl[ num_features*lineno + 544]
                        , &feature->data.fl[ num_features*lineno + 545]
                        , &feature->data.fl[ num_features*lineno + 546]
                        , &feature->data.fl[ num_features*lineno + 547]
                        , &feature->data.fl[ num_features*lineno + 548]
                        , &feature->data.fl[ num_features*lineno + 549]
                        , &feature->data.fl[ num_features*lineno + 550]
                        , &feature->data.fl[ num_features*lineno + 551]
                        , &feature->data.fl[ num_features*lineno + 552]
                        , &feature->data.fl[ num_features*lineno + 553]
                        , &feature->data.fl[ num_features*lineno + 554]
                        , &feature->data.fl[ num_features*lineno + 555]
                        , &feature->data.fl[ num_features*lineno + 556]
                        , &feature->data.fl[ num_features*lineno + 557]
                        , &feature->data.fl[ num_features*lineno + 558]
                        , &feature->data.fl[ num_features*lineno + 559]
                        , &feature->data.fl[ num_features*lineno + 560]
                        , &feature->data.fl[ num_features*lineno + 561]
                        , &feature->data.fl[ num_features*lineno + 562]
                        , &feature->data.fl[ num_features*lineno + 563]
                        , &feature->data.fl[ num_features*lineno + 564]
                        , &feature->data.fl[ num_features*lineno + 565]
                        , &feature->data.fl[ num_features*lineno + 566]
                        , &feature->data.fl[ num_features*lineno + 567]
                        , &feature->data.fl[ num_features*lineno + 568]
                        , &feature->data.fl[ num_features*lineno + 569]
                        , &feature->data.fl[ num_features*lineno + 570]
                        , &feature->data.fl[ num_features*lineno + 571]
                        , &feature->data.fl[ num_features*lineno + 572]
                        , &feature->data.fl[ num_features*lineno + 573]
                        , &feature->data.fl[ num_features*lineno + 574]
                        , &feature->data.fl[ num_features*lineno + 575]
                        , &feature->data.fl[ num_features*lineno + 576]
                        , &feature->data.fl[ num_features*lineno + 577]
                        , &feature->data.fl[ num_features*lineno + 578]
                        , &feature->data.fl[ num_features*lineno + 579]
                        , &feature->data.fl[ num_features*lineno + 580]
                        , &feature->data.fl[ num_features*lineno + 581]
                        , &feature->data.fl[ num_features*lineno + 582]
                        , &feature->data.fl[ num_features*lineno + 583]
                        , &feature->data.fl[ num_features*lineno + 584]
                        , &feature->data.fl[ num_features*lineno + 585]
                        , &feature->data.fl[ num_features*lineno + 586]
                        , &feature->data.fl[ num_features*lineno + 587]
                        , &feature->data.fl[ num_features*lineno + 588]
                        , &feature->data.fl[ num_features*lineno + 589]
                        , &feature->data.fl[ num_features*lineno + 590]
                        , &feature->data.fl[ num_features*lineno + 591]
                        , &feature->data.fl[ num_features*lineno + 592]
                        , &feature->data.fl[ num_features*lineno + 593]
                        , &feature->data.fl[ num_features*lineno + 594]
                        , &feature->data.fl[ num_features*lineno + 595]
                        , &feature->data.fl[ num_features*lineno + 596]
                        , &feature->data.fl[ num_features*lineno + 597]
                        , &feature->data.fl[ num_features*lineno + 598]
                        , &feature->data.fl[ num_features*lineno + 599]
                        , &feature->data.fl[ num_features*lineno + 600]
                        , &feature->data.fl[ num_features*lineno + 601]
                        , &feature->data.fl[ num_features*lineno + 602]
                        , &feature->data.fl[ num_features*lineno + 603]
                        , &feature->data.fl[ num_features*lineno + 604]
                        , &feature->data.fl[ num_features*lineno + 605]
                        , &feature->data.fl[ num_features*lineno + 606]
                        , &feature->data.fl[ num_features*lineno + 607]
                        , &feature->data.fl[ num_features*lineno + 608]
                        , &feature->data.fl[ num_features*lineno + 609]
                        , &feature->data.fl[ num_features*lineno + 610]
                        , &feature->data.fl[ num_features*lineno + 611]
                        , &feature->data.fl[ num_features*lineno + 612]
                        , &feature->data.fl[ num_features*lineno + 613]
                        , &feature->data.fl[ num_features*lineno + 614]
                        , &feature->data.fl[ num_features*lineno + 615]
                        , &feature->data.fl[ num_features*lineno + 616]
                        , &feature->data.fl[ num_features*lineno + 617]
                        , &feature->data.fl[ num_features*lineno + 618]
                        , &feature->data.fl[ num_features*lineno + 619]
                        , &feature->data.fl[ num_features*lineno + 620]
                        , &feature->data.fl[ num_features*lineno + 621]
                        , &feature->data.fl[ num_features*lineno + 622]
                        , &feature->data.fl[ num_features*lineno + 623]
                        , &feature->data.fl[ num_features*lineno + 624]
                        , &feature->data.fl[ num_features*lineno + 625]
                        , &feature->data.fl[ num_features*lineno + 626]
                        , &feature->data.fl[ num_features*lineno + 627]
                        , &feature->data.fl[ num_features*lineno + 628]
                        , &feature->data.fl[ num_features*lineno + 629]
                        , &feature->data.fl[ num_features*lineno + 630]
                        , &feature->data.fl[ num_features*lineno + 631]
                        , &feature->data.fl[ num_features*lineno + 632]
                        , &feature->data.fl[ num_features*lineno + 633]
                        , &feature->data.fl[ num_features*lineno + 634]
                        , &feature->data.fl[ num_features*lineno + 635]
                        , &feature->data.fl[ num_features*lineno + 636]
                        , &feature->data.fl[ num_features*lineno + 637]
                        , &feature->data.fl[ num_features*lineno + 638]
                        , &feature->data.fl[ num_features*lineno + 639]
                        , &feature->data.fl[ num_features*lineno + 640]
                        , &feature->data.fl[ num_features*lineno + 641]
                        , &feature->data.fl[ num_features*lineno + 642]
                        , &feature->data.fl[ num_features*lineno + 643]
                        , &feature->data.fl[ num_features*lineno + 644]
                        , &feature->data.fl[ num_features*lineno + 645]
                        , &feature->data.fl[ num_features*lineno + 646]
                        , &feature->data.fl[ num_features*lineno + 647]
                        , &feature->data.fl[ num_features*lineno + 648]
                        , &feature->data.fl[ num_features*lineno + 649]
                        , &feature->data.fl[ num_features*lineno + 650]
                        , &feature->data.fl[ num_features*lineno + 651]
                        , &feature->data.fl[ num_features*lineno + 652]
                        , &feature->data.fl[ num_features*lineno + 653]
                        , &feature->data.fl[ num_features*lineno + 654]
                        , &feature->data.fl[ num_features*lineno + 655]
                        , &feature->data.fl[ num_features*lineno + 656]
                        , &feature->data.fl[ num_features*lineno + 657]
                        , &feature->data.fl[ num_features*lineno + 658]
                        , &feature->data.fl[ num_features*lineno + 659]
                        , &feature->data.fl[ num_features*lineno + 660]
                        , &feature->data.fl[ num_features*lineno + 661]
                        , &feature->data.fl[ num_features*lineno + 662]
                        , &feature->data.fl[ num_features*lineno + 663]
                        , &feature->data.fl[ num_features*lineno + 664]
                        , &feature->data.fl[ num_features*lineno + 665]
                        , &feature->data.fl[ num_features*lineno + 666]
                        , &feature->data.fl[ num_features*lineno + 667]
                        , &feature->data.fl[ num_features*lineno + 668]
                        , &feature->data.fl[ num_features*lineno + 669]
                        , &feature->data.fl[ num_features*lineno + 670]
                        , &feature->data.fl[ num_features*lineno + 671]
                        , &feature->data.fl[ num_features*lineno + 672]
                        , &feature->data.fl[ num_features*lineno + 673]
                        , &feature->data.fl[ num_features*lineno + 674]
                        , &feature->data.fl[ num_features*lineno + 675]
                        , &feature->data.fl[ num_features*lineno + 676]
                        , &feature->data.fl[ num_features*lineno + 677]
                        , &feature->data.fl[ num_features*lineno + 678]
                        , &feature->data.fl[ num_features*lineno + 679]
                        , &feature->data.fl[ num_features*lineno + 680]
                        , &feature->data.fl[ num_features*lineno + 681]
                        , &feature->data.fl[ num_features*lineno + 682]
                        , &feature->data.fl[ num_features*lineno + 683]
                        , &feature->data.fl[ num_features*lineno + 684]
                        , &feature->data.fl[ num_features*lineno + 685]
                        , &feature->data.fl[ num_features*lineno + 686]
                        , &feature->data.fl[ num_features*lineno + 687]
                        , &feature->data.fl[ num_features*lineno + 688]
                        , &feature->data.fl[ num_features*lineno + 689]
                        , &feature->data.fl[ num_features*lineno + 690]
                        , &feature->data.fl[ num_features*lineno + 691]
                        , &feature->data.fl[ num_features*lineno + 692]
                        , &feature->data.fl[ num_features*lineno + 693]
                        , &feature->data.fl[ num_features*lineno + 694]
                        , &feature->data.fl[ num_features*lineno + 695]
                        , &feature->data.fl[ num_features*lineno + 696]
                        , &feature->data.fl[ num_features*lineno + 697]
                        , &feature->data.fl[ num_features*lineno + 698]
                        , &feature->data.fl[ num_features*lineno + 699]
                        , &feature->data.fl[ num_features*lineno + 700]
                        , &feature->data.fl[ num_features*lineno + 701]
                        , &feature->data.fl[ num_features*lineno + 702]
                        , &feature->data.fl[ num_features*lineno + 703]
                        , &feature->data.fl[ num_features*lineno + 704]
                        , &feature->data.fl[ num_features*lineno + 705]
                        , &feature->data.fl[ num_features*lineno + 706]
                        , &feature->data.fl[ num_features*lineno + 707]
                        , &feature->data.fl[ num_features*lineno + 708]
                        , &feature->data.fl[ num_features*lineno + 709]
                        , &feature->data.fl[ num_features*lineno + 710]
                        , &feature->data.fl[ num_features*lineno + 711]
                        , &feature->data.fl[ num_features*lineno + 712]
                        , &feature->data.fl[ num_features*lineno + 713]
                        , &feature->data.fl[ num_features*lineno + 714]
                        , &feature->data.fl[ num_features*lineno + 715]
                        , &feature->data.fl[ num_features*lineno + 716]
                        , &feature->data.fl[ num_features*lineno + 717]
                        , &feature->data.fl[ num_features*lineno + 718]
                        , &feature->data.fl[ num_features*lineno + 719]
                        , &feature->data.fl[ num_features*lineno + 720]
                        , &feature->data.fl[ num_features*lineno + 721]
                        , &feature->data.fl[ num_features*lineno + 722]
                        , &feature->data.fl[ num_features*lineno + 723]
                        , &feature->data.fl[ num_features*lineno + 724]
                        , &feature->data.fl[ num_features*lineno + 725]
                        , &feature->data.fl[ num_features*lineno + 726]
                        , &feature->data.fl[ num_features*lineno + 727]
                        , &feature->data.fl[ num_features*lineno + 728]
                        , &feature->data.fl[ num_features*lineno + 729]
                        , &feature->data.fl[ num_features*lineno + 730]
                        , &feature->data.fl[ num_features*lineno + 731]
                        , &feature->data.fl[ num_features*lineno + 732]
                        , &feature->data.fl[ num_features*lineno + 733]
                        , &feature->data.fl[ num_features*lineno + 734]
                        , &feature->data.fl[ num_features*lineno + 735]
                        , &feature->data.fl[ num_features*lineno + 736]
                        , &feature->data.fl[ num_features*lineno + 737]
                        , &feature->data.fl[ num_features*lineno + 738]
                        , &feature->data.fl[ num_features*lineno + 739]
                        , &feature->data.fl[ num_features*lineno + 740]
                        , &feature->data.fl[ num_features*lineno + 741]
                        , &feature->data.fl[ num_features*lineno + 742]
                        , &feature->data.fl[ num_features*lineno + 743]
                        , &feature->data.fl[ num_features*lineno + 744]
                        , &feature->data.fl[ num_features*lineno + 745]
                        , &feature->data.fl[ num_features*lineno + 746]
                        , &feature->data.fl[ num_features*lineno + 747]
                        , &feature->data.fl[ num_features*lineno + 748]
                        , &feature->data.fl[ num_features*lineno + 749]
                        , &feature->data.fl[ num_features*lineno + 750]
                        , &feature->data.fl[ num_features*lineno + 751]
                        , &feature->data.fl[ num_features*lineno + 752]
                        , &feature->data.fl[ num_features*lineno + 753]
                        , &feature->data.fl[ num_features*lineno + 754]
                        , &feature->data.fl[ num_features*lineno + 755]
                        , &feature->data.fl[ num_features*lineno + 756]
                        , &feature->data.fl[ num_features*lineno + 757]
                        , &feature->data.fl[ num_features*lineno + 758]
                        , &feature->data.fl[ num_features*lineno + 759]
                        , &feature->data.fl[ num_features*lineno + 760]
                        , &feature->data.fl[ num_features*lineno + 761]
                        , &feature->data.fl[ num_features*lineno + 762]
                        , &feature->data.fl[ num_features*lineno + 763]
                        , &feature->data.fl[ num_features*lineno + 764]
                        , &feature->data.fl[ num_features*lineno + 765]
                        , &feature->data.fl[ num_features*lineno + 766]
                        , &feature->data.fl[ num_features*lineno + 767]
                        , &feature->data.fl[ num_features*lineno + 768]
                        , &feature->data.fl[ num_features*lineno + 769]
                        , &feature->data.fl[ num_features*lineno + 770]
                        , &feature->data.fl[ num_features*lineno + 771]
                        , &feature->data.fl[ num_features*lineno + 772]
                        , &feature->data.fl[ num_features*lineno + 773]
                        , &feature->data.fl[ num_features*lineno + 774]
                        , &feature->data.fl[ num_features*lineno + 775]
                        , &feature->data.fl[ num_features*lineno + 776]
                        , &feature->data.fl[ num_features*lineno + 777]
                        , &feature->data.fl[ num_features*lineno + 778]
                        , &feature->data.fl[ num_features*lineno + 779]
                        , &feature->data.fl[ num_features*lineno + 780]
                        , &feature->data.fl[ num_features*lineno + 781]
                        , &feature->data.fl[ num_features*lineno + 782]
                        , &feature->data.fl[ num_features*lineno + 783]
                        ))
      {
        fprintf(stderr, " read malformed file " );
        break;
      }
      lineno++;
    }
    fclose(fp);
  }
  else
  {
    fprintf(stderr," cant open input file %s", fn);
    perror( "open" );
    return -4;
  }
  return 0;
}

int read_test_set_tomax(char* fn, CvMat* feature)
{
  int num_features = cvGetDimSize(feature,1);
  int num_samples = cvGetDimSize(feature,0);

  FILE* fp = fopen(fn,"r");
  if(fp)
  {
    static char line [8000];
    fgets(line, sizeof line, fp); // skip the header line
    int lineno=0;
    while (fgets(line, sizeof line, fp) != NULL)
    {
      if( (num_features) != sscanf(line,
         "%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
        ",%f"
                                       , &feature->data.fl[ num_features*lineno + 0  ]
                                       , &feature->data.fl[ num_features*lineno + 1  ]
                                       , &feature->data.fl[ num_features*lineno + 2  ]
                                       , &feature->data.fl[ num_features*lineno + 3  ]
                                       , &feature->data.fl[ num_features*lineno + 4  ]
                                       , &feature->data.fl[ num_features*lineno + 5  ]
                                       , &feature->data.fl[ num_features*lineno + 6  ]
                                       , &feature->data.fl[ num_features*lineno + 7  ]
                                       , &feature->data.fl[ num_features*lineno + 8  ]
                                       , &feature->data.fl[ num_features*lineno + 9  ]
                                       , &feature->data.fl[ num_features*lineno + 10 ]
                                       , &feature->data.fl[ num_features*lineno + 11 ]
                                       , &feature->data.fl[ num_features*lineno + 12 ]
                                       , &feature->data.fl[ num_features*lineno + 13 ]
                                       , &feature->data.fl[ num_features*lineno + 14 ]
                                       , &feature->data.fl[ num_features*lineno + 15 ]
                                       , &feature->data.fl[ num_features*lineno + 16 ]
                                       , &feature->data.fl[ num_features*lineno + 17 ]
                                       , &feature->data.fl[ num_features*lineno + 18 ]
                                       , &feature->data.fl[ num_features*lineno + 19 ]
                                       , &feature->data.fl[ num_features*lineno + 20 ]
                                       , &feature->data.fl[ num_features*lineno + 21 ]
                                       , &feature->data.fl[ num_features*lineno + 22 ]
                                       , &feature->data.fl[ num_features*lineno + 23 ]
                                       , &feature->data.fl[ num_features*lineno + 24 ]
                                       , &feature->data.fl[ num_features*lineno + 25 ]
                                       , &feature->data.fl[ num_features*lineno + 26 ]
                                       , &feature->data.fl[ num_features*lineno + 27 ]
                                       , &feature->data.fl[ num_features*lineno + 28 ]
                                       , &feature->data.fl[ num_features*lineno + 29 ]
                                       , &feature->data.fl[ num_features*lineno + 30 ]
                                       , &feature->data.fl[ num_features*lineno + 31 ]
                                       , &feature->data.fl[ num_features*lineno + 32 ]
                                       , &feature->data.fl[ num_features*lineno + 33 ]
                                       , &feature->data.fl[ num_features*lineno + 34 ]
                                       , &feature->data.fl[ num_features*lineno + 35 ]
                                       , &feature->data.fl[ num_features*lineno + 36 ]
                                       , &feature->data.fl[ num_features*lineno + 37 ]
                                       , &feature->data.fl[ num_features*lineno + 38 ]
                                       , &feature->data.fl[ num_features*lineno + 39 ]
                                       , &feature->data.fl[ num_features*lineno + 40 ]
                                       , &feature->data.fl[ num_features*lineno + 41 ]
                                       , &feature->data.fl[ num_features*lineno + 42 ]
                                       , &feature->data.fl[ num_features*lineno + 43 ]
                                       , &feature->data.fl[ num_features*lineno + 44 ]
                                       , &feature->data.fl[ num_features*lineno + 45 ]
                                       , &feature->data.fl[ num_features*lineno + 46 ]
                                       , &feature->data.fl[ num_features*lineno + 47 ]
                                       , &feature->data.fl[ num_features*lineno + 48 ]
                                       , &feature->data.fl[ num_features*lineno + 49 ]
                                       , &feature->data.fl[ num_features*lineno + 50 ]
                                       , &feature->data.fl[ num_features*lineno + 51 ]
                                       , &feature->data.fl[ num_features*lineno + 52 ]
                                       , &feature->data.fl[ num_features*lineno + 53 ]
                                       , &feature->data.fl[ num_features*lineno + 54 ]
                                       , &feature->data.fl[ num_features*lineno + 55 ]
                                       , &feature->data.fl[ num_features*lineno + 56 ]
                                       , &feature->data.fl[ num_features*lineno + 57 ]
                                       , &feature->data.fl[ num_features*lineno + 58 ]
                                       , &feature->data.fl[ num_features*lineno + 59 ]
                                       , &feature->data.fl[ num_features*lineno + 60 ]
                                       , &feature->data.fl[ num_features*lineno + 61 ]
                                       , &feature->data.fl[ num_features*lineno + 62 ]
                                       , &feature->data.fl[ num_features*lineno + 63 ]
                                       , &feature->data.fl[ num_features*lineno + 64 ]
                                       , &feature->data.fl[ num_features*lineno + 65 ]
                                       , &feature->data.fl[ num_features*lineno + 66 ]
                                       , &feature->data.fl[ num_features*lineno + 67 ]
                                       , &feature->data.fl[ num_features*lineno + 68 ]
                                       , &feature->data.fl[ num_features*lineno + 69 ]
                                       , &feature->data.fl[ num_features*lineno + 70 ]
                                       , &feature->data.fl[ num_features*lineno + 71 ]
                                       , &feature->data.fl[ num_features*lineno + 72 ]
                                       , &feature->data.fl[ num_features*lineno + 73 ]
                                       , &feature->data.fl[ num_features*lineno + 74 ]
                                       , &feature->data.fl[ num_features*lineno + 75 ]
                                       , &feature->data.fl[ num_features*lineno + 76 ]
                                       , &feature->data.fl[ num_features*lineno + 77 ]
                                       , &feature->data.fl[ num_features*lineno + 78 ]
                                       , &feature->data.fl[ num_features*lineno + 79 ]
                                       , &feature->data.fl[ num_features*lineno + 80 ]
                                       , &feature->data.fl[ num_features*lineno + 81 ]
                                       , &feature->data.fl[ num_features*lineno + 82 ]
                                       , &feature->data.fl[ num_features*lineno + 83 ]
                                       , &feature->data.fl[ num_features*lineno + 84 ]
                                       , &feature->data.fl[ num_features*lineno + 85 ]
                                       , &feature->data.fl[ num_features*lineno + 86 ]
                                       , &feature->data.fl[ num_features*lineno + 87 ]
                                       , &feature->data.fl[ num_features*lineno + 88 ]
                                       , &feature->data.fl[ num_features*lineno + 89 ]
                                       , &feature->data.fl[ num_features*lineno + 90 ]
                                       , &feature->data.fl[ num_features*lineno + 91 ]
                                       , &feature->data.fl[ num_features*lineno + 92 ]
                                       , &feature->data.fl[ num_features*lineno + 93 ]
                                       , &feature->data.fl[ num_features*lineno + 94 ]
                                       , &feature->data.fl[ num_features*lineno + 95 ]
                                       , &feature->data.fl[ num_features*lineno + 96 ]
                                       , &feature->data.fl[ num_features*lineno + 97 ]
                                       , &feature->data.fl[ num_features*lineno + 98 ]
                                       , &feature->data.fl[ num_features*lineno + 99 ]
                                       , &feature->data.fl[ num_features*lineno + 100]
                                       , &feature->data.fl[ num_features*lineno + 101]
                                       , &feature->data.fl[ num_features*lineno + 102]
                                       , &feature->data.fl[ num_features*lineno + 103]
                                       , &feature->data.fl[ num_features*lineno + 104]
                                       , &feature->data.fl[ num_features*lineno + 105]
                                       , &feature->data.fl[ num_features*lineno + 106]
                                       , &feature->data.fl[ num_features*lineno + 107]
                                       , &feature->data.fl[ num_features*lineno + 108]
                                       , &feature->data.fl[ num_features*lineno + 109]
                                       , &feature->data.fl[ num_features*lineno + 110]
                                       , &feature->data.fl[ num_features*lineno + 111]
                                       , &feature->data.fl[ num_features*lineno + 112]
                                       , &feature->data.fl[ num_features*lineno + 113]
                                       , &feature->data.fl[ num_features*lineno + 114]
                                       , &feature->data.fl[ num_features*lineno + 115]
                                       , &feature->data.fl[ num_features*lineno + 116]
                                       , &feature->data.fl[ num_features*lineno + 117]
                                       , &feature->data.fl[ num_features*lineno + 118]
                                       , &feature->data.fl[ num_features*lineno + 119]
                                       , &feature->data.fl[ num_features*lineno + 120]
                                       , &feature->data.fl[ num_features*lineno + 121]
                                       , &feature->data.fl[ num_features*lineno + 122]
                                       , &feature->data.fl[ num_features*lineno + 123]
                                       , &feature->data.fl[ num_features*lineno + 124]
                                       , &feature->data.fl[ num_features*lineno + 125]
                                       , &feature->data.fl[ num_features*lineno + 126]
                                       , &feature->data.fl[ num_features*lineno + 127]
                                       , &feature->data.fl[ num_features*lineno + 128]
                                       , &feature->data.fl[ num_features*lineno + 129]
                                       , &feature->data.fl[ num_features*lineno + 130]
                                       , &feature->data.fl[ num_features*lineno + 131]
                                       , &feature->data.fl[ num_features*lineno + 132]
                                       , &feature->data.fl[ num_features*lineno + 133]
                                       , &feature->data.fl[ num_features*lineno + 134]
                                       , &feature->data.fl[ num_features*lineno + 135]
                                       , &feature->data.fl[ num_features*lineno + 136]
                                       , &feature->data.fl[ num_features*lineno + 137]
                                       , &feature->data.fl[ num_features*lineno + 138]
                                       , &feature->data.fl[ num_features*lineno + 139]
                                       , &feature->data.fl[ num_features*lineno + 140]
                                       , &feature->data.fl[ num_features*lineno + 141]
                                       , &feature->data.fl[ num_features*lineno + 142]
                                       , &feature->data.fl[ num_features*lineno + 143]
                                       , &feature->data.fl[ num_features*lineno + 144]
                                       , &feature->data.fl[ num_features*lineno + 145]
                                       , &feature->data.fl[ num_features*lineno + 146]
                                       , &feature->data.fl[ num_features*lineno + 147]
                                       , &feature->data.fl[ num_features*lineno + 148]
                                       , &feature->data.fl[ num_features*lineno + 149]
                                       , &feature->data.fl[ num_features*lineno + 150]
                                       , &feature->data.fl[ num_features*lineno + 151]
                                       , &feature->data.fl[ num_features*lineno + 152]
                                       , &feature->data.fl[ num_features*lineno + 153]
                                       , &feature->data.fl[ num_features*lineno + 154]
                                       , &feature->data.fl[ num_features*lineno + 155]
                                       , &feature->data.fl[ num_features*lineno + 156]
                                       , &feature->data.fl[ num_features*lineno + 157]
                                       , &feature->data.fl[ num_features*lineno + 158]
                                       , &feature->data.fl[ num_features*lineno + 159]
                                       , &feature->data.fl[ num_features*lineno + 160]
                                       , &feature->data.fl[ num_features*lineno + 161]
                                       , &feature->data.fl[ num_features*lineno + 162]
                                       , &feature->data.fl[ num_features*lineno + 163]
                                       , &feature->data.fl[ num_features*lineno + 164]
                                       , &feature->data.fl[ num_features*lineno + 165]
                                       , &feature->data.fl[ num_features*lineno + 166]
                                       , &feature->data.fl[ num_features*lineno + 167]
                                       , &feature->data.fl[ num_features*lineno + 168]
                                       , &feature->data.fl[ num_features*lineno + 169]
                                       , &feature->data.fl[ num_features*lineno + 170]
                                       , &feature->data.fl[ num_features*lineno + 171]
                                       , &feature->data.fl[ num_features*lineno + 172]
                                       , &feature->data.fl[ num_features*lineno + 173]
                                       , &feature->data.fl[ num_features*lineno + 174]
                                       , &feature->data.fl[ num_features*lineno + 175]
                                       , &feature->data.fl[ num_features*lineno + 176]
                                       , &feature->data.fl[ num_features*lineno + 177]
                                       , &feature->data.fl[ num_features*lineno + 178]
                                       , &feature->data.fl[ num_features*lineno + 179]
                                       , &feature->data.fl[ num_features*lineno + 180]
                                       , &feature->data.fl[ num_features*lineno + 181]
                                       , &feature->data.fl[ num_features*lineno + 182]
                                       , &feature->data.fl[ num_features*lineno + 183]
                                       , &feature->data.fl[ num_features*lineno + 184]
                                       , &feature->data.fl[ num_features*lineno + 185]
                                       , &feature->data.fl[ num_features*lineno + 186]
                                       , &feature->data.fl[ num_features*lineno + 187]
                                       , &feature->data.fl[ num_features*lineno + 188]
                                       , &feature->data.fl[ num_features*lineno + 189]
                                       , &feature->data.fl[ num_features*lineno + 190]
                                       , &feature->data.fl[ num_features*lineno + 191]
                                       , &feature->data.fl[ num_features*lineno + 192]
                                       , &feature->data.fl[ num_features*lineno + 193]
                                       , &feature->data.fl[ num_features*lineno + 194]
                                       , &feature->data.fl[ num_features*lineno + 195]
                                       , &feature->data.fl[ num_features*lineno + 196]
                                       , &feature->data.fl[ num_features*lineno + 197]
                                       , &feature->data.fl[ num_features*lineno + 198]
                                       , &feature->data.fl[ num_features*lineno + 199]
                                       , &feature->data.fl[ num_features*lineno + 200]
                                       , &feature->data.fl[ num_features*lineno + 201]
                                       , &feature->data.fl[ num_features*lineno + 202]
                                       , &feature->data.fl[ num_features*lineno + 203]
                                       , &feature->data.fl[ num_features*lineno + 204]
                                       , &feature->data.fl[ num_features*lineno + 205]
                                       , &feature->data.fl[ num_features*lineno + 206]
                                       , &feature->data.fl[ num_features*lineno + 207]
                                       , &feature->data.fl[ num_features*lineno + 208]
                                       , &feature->data.fl[ num_features*lineno + 209]
                                       , &feature->data.fl[ num_features*lineno + 210]
                                       , &feature->data.fl[ num_features*lineno + 211]
                                       , &feature->data.fl[ num_features*lineno + 212]
                                       , &feature->data.fl[ num_features*lineno + 213]
                                       , &feature->data.fl[ num_features*lineno + 214]
                                       , &feature->data.fl[ num_features*lineno + 215]
                                       , &feature->data.fl[ num_features*lineno + 216]
                                       , &feature->data.fl[ num_features*lineno + 217]
                                       , &feature->data.fl[ num_features*lineno + 218]
                                       , &feature->data.fl[ num_features*lineno + 219]
                                       , &feature->data.fl[ num_features*lineno + 220]
                                       , &feature->data.fl[ num_features*lineno + 221]
                                       , &feature->data.fl[ num_features*lineno + 222]
                                       , &feature->data.fl[ num_features*lineno + 223]
                                       , &feature->data.fl[ num_features*lineno + 224]
                                       , &feature->data.fl[ num_features*lineno + 225]
                                       , &feature->data.fl[ num_features*lineno + 226]
                                       , &feature->data.fl[ num_features*lineno + 227]
                                       , &feature->data.fl[ num_features*lineno + 228]
                                       , &feature->data.fl[ num_features*lineno + 229]
                                       , &feature->data.fl[ num_features*lineno + 230]
                                       , &feature->data.fl[ num_features*lineno + 231]
                                       , &feature->data.fl[ num_features*lineno + 232]
                                       , &feature->data.fl[ num_features*lineno + 233]
                                       , &feature->data.fl[ num_features*lineno + 234]
                                       , &feature->data.fl[ num_features*lineno + 235]
                                       , &feature->data.fl[ num_features*lineno + 236]
                                       , &feature->data.fl[ num_features*lineno + 237]
                                       , &feature->data.fl[ num_features*lineno + 238]
                                       , &feature->data.fl[ num_features*lineno + 239]
                                       , &feature->data.fl[ num_features*lineno + 240]
                                       , &feature->data.fl[ num_features*lineno + 241]
                                       , &feature->data.fl[ num_features*lineno + 242]
                                       , &feature->data.fl[ num_features*lineno + 243]
                                       , &feature->data.fl[ num_features*lineno + 244]
                                       , &feature->data.fl[ num_features*lineno + 245]
                                       , &feature->data.fl[ num_features*lineno + 246]
                                       , &feature->data.fl[ num_features*lineno + 247]
                                       , &feature->data.fl[ num_features*lineno + 248]
                                       , &feature->data.fl[ num_features*lineno + 249]
                                       , &feature->data.fl[ num_features*lineno + 250]
                                       , &feature->data.fl[ num_features*lineno + 251]
                                       , &feature->data.fl[ num_features*lineno + 252]
                                       , &feature->data.fl[ num_features*lineno + 253]
                                       , &feature->data.fl[ num_features*lineno + 254]
                                       , &feature->data.fl[ num_features*lineno + 255]
                                       , &feature->data.fl[ num_features*lineno + 256]
                                       , &feature->data.fl[ num_features*lineno + 257]
                                       , &feature->data.fl[ num_features*lineno + 258]
                                       , &feature->data.fl[ num_features*lineno + 259]
                                       , &feature->data.fl[ num_features*lineno + 260]
                                       , &feature->data.fl[ num_features*lineno + 261]
                                       , &feature->data.fl[ num_features*lineno + 262]
                                       , &feature->data.fl[ num_features*lineno + 263]
                                       , &feature->data.fl[ num_features*lineno + 264]
                                       , &feature->data.fl[ num_features*lineno + 265]
                                       , &feature->data.fl[ num_features*lineno + 266]
                                       , &feature->data.fl[ num_features*lineno + 267]
                                       , &feature->data.fl[ num_features*lineno + 268]
                                       , &feature->data.fl[ num_features*lineno + 269]
                                       , &feature->data.fl[ num_features*lineno + 270]
                                       , &feature->data.fl[ num_features*lineno + 271]
                                       , &feature->data.fl[ num_features*lineno + 272]
                                       , &feature->data.fl[ num_features*lineno + 273]
                                       , &feature->data.fl[ num_features*lineno + 274]
                                       , &feature->data.fl[ num_features*lineno + 275]
                                       , &feature->data.fl[ num_features*lineno + 276]
                                       , &feature->data.fl[ num_features*lineno + 277]
                                       , &feature->data.fl[ num_features*lineno + 278]
                                       , &feature->data.fl[ num_features*lineno + 279]
                                       , &feature->data.fl[ num_features*lineno + 280]
                                       , &feature->data.fl[ num_features*lineno + 281]
                                       , &feature->data.fl[ num_features*lineno + 282]
                                       , &feature->data.fl[ num_features*lineno + 283]
                                       , &feature->data.fl[ num_features*lineno + 284]
                                       , &feature->data.fl[ num_features*lineno + 285]
                                       , &feature->data.fl[ num_features*lineno + 286]
                                       , &feature->data.fl[ num_features*lineno + 287]
                                       , &feature->data.fl[ num_features*lineno + 288]
                                       , &feature->data.fl[ num_features*lineno + 289]
                                       , &feature->data.fl[ num_features*lineno + 290]
                                       , &feature->data.fl[ num_features*lineno + 291]
                                       , &feature->data.fl[ num_features*lineno + 292]
                                       , &feature->data.fl[ num_features*lineno + 293]
                                       , &feature->data.fl[ num_features*lineno + 294]
                                       , &feature->data.fl[ num_features*lineno + 295]
                                       , &feature->data.fl[ num_features*lineno + 296]
                                       , &feature->data.fl[ num_features*lineno + 297]
                                       , &feature->data.fl[ num_features*lineno + 298]
                                       , &feature->data.fl[ num_features*lineno + 299]
                                       , &feature->data.fl[ num_features*lineno + 300]
                                       , &feature->data.fl[ num_features*lineno + 301]
                                       , &feature->data.fl[ num_features*lineno + 302]
                                       , &feature->data.fl[ num_features*lineno + 303]
                                       , &feature->data.fl[ num_features*lineno + 304]
                                       , &feature->data.fl[ num_features*lineno + 305]
                                       , &feature->data.fl[ num_features*lineno + 306]
                                       , &feature->data.fl[ num_features*lineno + 307]
                                       , &feature->data.fl[ num_features*lineno + 308]
                                       , &feature->data.fl[ num_features*lineno + 309]
                                       , &feature->data.fl[ num_features*lineno + 310]
                                       , &feature->data.fl[ num_features*lineno + 311]
                                       , &feature->data.fl[ num_features*lineno + 312]
                                       , &feature->data.fl[ num_features*lineno + 313]
                                       , &feature->data.fl[ num_features*lineno + 314]
                                       , &feature->data.fl[ num_features*lineno + 315]
                                       , &feature->data.fl[ num_features*lineno + 316]
                                       , &feature->data.fl[ num_features*lineno + 317]
                                       , &feature->data.fl[ num_features*lineno + 318]
                                       , &feature->data.fl[ num_features*lineno + 319]
                                       , &feature->data.fl[ num_features*lineno + 320]
                                       , &feature->data.fl[ num_features*lineno + 321]
                                       , &feature->data.fl[ num_features*lineno + 322]
                                       , &feature->data.fl[ num_features*lineno + 323]
                                       , &feature->data.fl[ num_features*lineno + 324]
                                       , &feature->data.fl[ num_features*lineno + 325]
                                       , &feature->data.fl[ num_features*lineno + 326]
                                       , &feature->data.fl[ num_features*lineno + 327]
                                       , &feature->data.fl[ num_features*lineno + 328]
                                       , &feature->data.fl[ num_features*lineno + 329]
                                       , &feature->data.fl[ num_features*lineno + 330]
                                       , &feature->data.fl[ num_features*lineno + 331]
                                       , &feature->data.fl[ num_features*lineno + 332]
                                       , &feature->data.fl[ num_features*lineno + 333]
                                       , &feature->data.fl[ num_features*lineno + 334]
                                       , &feature->data.fl[ num_features*lineno + 335]
                                       , &feature->data.fl[ num_features*lineno + 336]
                                       , &feature->data.fl[ num_features*lineno + 337]
                                       , &feature->data.fl[ num_features*lineno + 338]
                                       , &feature->data.fl[ num_features*lineno + 339]
                                       , &feature->data.fl[ num_features*lineno + 340]
                                       , &feature->data.fl[ num_features*lineno + 341]
                                       , &feature->data.fl[ num_features*lineno + 342]
                                       , &feature->data.fl[ num_features*lineno + 343]
                                       , &feature->data.fl[ num_features*lineno + 344]
                                       , &feature->data.fl[ num_features*lineno + 345]
                                       , &feature->data.fl[ num_features*lineno + 346]
                                       , &feature->data.fl[ num_features*lineno + 347]
                                       , &feature->data.fl[ num_features*lineno + 348]
                                       , &feature->data.fl[ num_features*lineno + 349]
                                       , &feature->data.fl[ num_features*lineno + 350]
                                       , &feature->data.fl[ num_features*lineno + 351]
                                       , &feature->data.fl[ num_features*lineno + 352]
                                       , &feature->data.fl[ num_features*lineno + 353]
                                       , &feature->data.fl[ num_features*lineno + 354]
                                       , &feature->data.fl[ num_features*lineno + 355]
                                       , &feature->data.fl[ num_features*lineno + 356]
                                       , &feature->data.fl[ num_features*lineno + 357]
                                       , &feature->data.fl[ num_features*lineno + 358]
                                       , &feature->data.fl[ num_features*lineno + 359]
                                       , &feature->data.fl[ num_features*lineno + 360]
                                       , &feature->data.fl[ num_features*lineno + 361]
                                       , &feature->data.fl[ num_features*lineno + 362]
                                       , &feature->data.fl[ num_features*lineno + 363]
                                       , &feature->data.fl[ num_features*lineno + 364]
                                       , &feature->data.fl[ num_features*lineno + 365]
                                       , &feature->data.fl[ num_features*lineno + 366]
                                       , &feature->data.fl[ num_features*lineno + 367]
                                       , &feature->data.fl[ num_features*lineno + 368]
                                       , &feature->data.fl[ num_features*lineno + 369]
                                       , &feature->data.fl[ num_features*lineno + 370]
                                       , &feature->data.fl[ num_features*lineno + 371]
                                       , &feature->data.fl[ num_features*lineno + 372]
                                       , &feature->data.fl[ num_features*lineno + 373]
                                       , &feature->data.fl[ num_features*lineno + 374]
                                       , &feature->data.fl[ num_features*lineno + 375]
                                       , &feature->data.fl[ num_features*lineno + 376]
                                       , &feature->data.fl[ num_features*lineno + 377]
                                       , &feature->data.fl[ num_features*lineno + 378]
                                       , &feature->data.fl[ num_features*lineno + 379]
                                       , &feature->data.fl[ num_features*lineno + 380]
                                       , &feature->data.fl[ num_features*lineno + 381]
                                       , &feature->data.fl[ num_features*lineno + 382]
                                       , &feature->data.fl[ num_features*lineno + 383]
                                       , &feature->data.fl[ num_features*lineno + 384]
                                       , &feature->data.fl[ num_features*lineno + 385]
                                       , &feature->data.fl[ num_features*lineno + 386]
                                       , &feature->data.fl[ num_features*lineno + 387]
                                       , &feature->data.fl[ num_features*lineno + 388]
                                       , &feature->data.fl[ num_features*lineno + 389]
                                       , &feature->data.fl[ num_features*lineno + 390]
                                       , &feature->data.fl[ num_features*lineno + 391]
                                       , &feature->data.fl[ num_features*lineno + 392]
                                       , &feature->data.fl[ num_features*lineno + 393]
                                       , &feature->data.fl[ num_features*lineno + 394]
                                       , &feature->data.fl[ num_features*lineno + 395]
                                       , &feature->data.fl[ num_features*lineno + 396]
                                       , &feature->data.fl[ num_features*lineno + 397]
                                       , &feature->data.fl[ num_features*lineno + 398]
                                       , &feature->data.fl[ num_features*lineno + 399]
                                       , &feature->data.fl[ num_features*lineno + 400]
                                       , &feature->data.fl[ num_features*lineno + 401]
                                       , &feature->data.fl[ num_features*lineno + 402]
                                       , &feature->data.fl[ num_features*lineno + 403]
                                       , &feature->data.fl[ num_features*lineno + 404]
                                       , &feature->data.fl[ num_features*lineno + 405]
                                       , &feature->data.fl[ num_features*lineno + 406]
                                       , &feature->data.fl[ num_features*lineno + 407]
                                       , &feature->data.fl[ num_features*lineno + 408]
                                       , &feature->data.fl[ num_features*lineno + 409]
                                       , &feature->data.fl[ num_features*lineno + 410]
                                       , &feature->data.fl[ num_features*lineno + 411]
                                       , &feature->data.fl[ num_features*lineno + 412]
                                       , &feature->data.fl[ num_features*lineno + 413]
                                       , &feature->data.fl[ num_features*lineno + 414]
                                       , &feature->data.fl[ num_features*lineno + 415]
                                       , &feature->data.fl[ num_features*lineno + 416]
                                       , &feature->data.fl[ num_features*lineno + 417]
                                       , &feature->data.fl[ num_features*lineno + 418]
                                       , &feature->data.fl[ num_features*lineno + 419]
                                       , &feature->data.fl[ num_features*lineno + 420]
                                       , &feature->data.fl[ num_features*lineno + 421]
                                       , &feature->data.fl[ num_features*lineno + 422]
                                       , &feature->data.fl[ num_features*lineno + 423]
                                       , &feature->data.fl[ num_features*lineno + 424]
                                       , &feature->data.fl[ num_features*lineno + 425]
                                       , &feature->data.fl[ num_features*lineno + 426]
                                       , &feature->data.fl[ num_features*lineno + 427]
                                       , &feature->data.fl[ num_features*lineno + 428]
                                       , &feature->data.fl[ num_features*lineno + 429]
                                       , &feature->data.fl[ num_features*lineno + 430]
                                       , &feature->data.fl[ num_features*lineno + 431]
                                       , &feature->data.fl[ num_features*lineno + 432]
                                       , &feature->data.fl[ num_features*lineno + 433]
                                       , &feature->data.fl[ num_features*lineno + 434]
                                       , &feature->data.fl[ num_features*lineno + 435]
                                       , &feature->data.fl[ num_features*lineno + 436]
                                       , &feature->data.fl[ num_features*lineno + 437]
                                       , &feature->data.fl[ num_features*lineno + 438]
                                       , &feature->data.fl[ num_features*lineno + 439]
                                       , &feature->data.fl[ num_features*lineno + 440]
                                       , &feature->data.fl[ num_features*lineno + 441]
                                       , &feature->data.fl[ num_features*lineno + 442]
                                       , &feature->data.fl[ num_features*lineno + 443]
                                       , &feature->data.fl[ num_features*lineno + 444]
                                       , &feature->data.fl[ num_features*lineno + 445]
                                       , &feature->data.fl[ num_features*lineno + 446]
                                       , &feature->data.fl[ num_features*lineno + 447]
                                       , &feature->data.fl[ num_features*lineno + 448]
                                       , &feature->data.fl[ num_features*lineno + 449]
                                       , &feature->data.fl[ num_features*lineno + 450]
                                       , &feature->data.fl[ num_features*lineno + 451]
                                       , &feature->data.fl[ num_features*lineno + 452]
                                       , &feature->data.fl[ num_features*lineno + 453]
                                       , &feature->data.fl[ num_features*lineno + 454]
                                       , &feature->data.fl[ num_features*lineno + 455]
                                       , &feature->data.fl[ num_features*lineno + 456]
                                       , &feature->data.fl[ num_features*lineno + 457]
                                       , &feature->data.fl[ num_features*lineno + 458]
                                       , &feature->data.fl[ num_features*lineno + 459]
                                       , &feature->data.fl[ num_features*lineno + 460]
                                       , &feature->data.fl[ num_features*lineno + 461]
                                       , &feature->data.fl[ num_features*lineno + 462]
                                       , &feature->data.fl[ num_features*lineno + 463]
                                       , &feature->data.fl[ num_features*lineno + 464]
                                       , &feature->data.fl[ num_features*lineno + 465]
                                       , &feature->data.fl[ num_features*lineno + 466]
                                       , &feature->data.fl[ num_features*lineno + 467]
                                       , &feature->data.fl[ num_features*lineno + 468]
                                       , &feature->data.fl[ num_features*lineno + 469]
                                       , &feature->data.fl[ num_features*lineno + 470]
                                       , &feature->data.fl[ num_features*lineno + 471]
                                       , &feature->data.fl[ num_features*lineno + 472]
                                       , &feature->data.fl[ num_features*lineno + 473]
                                       , &feature->data.fl[ num_features*lineno + 474]
                                       , &feature->data.fl[ num_features*lineno + 475]
                                       , &feature->data.fl[ num_features*lineno + 476]
                                       , &feature->data.fl[ num_features*lineno + 477]
                                       , &feature->data.fl[ num_features*lineno + 478]
                                       , &feature->data.fl[ num_features*lineno + 479]
                                       , &feature->data.fl[ num_features*lineno + 480]
                                       , &feature->data.fl[ num_features*lineno + 481]
                                       , &feature->data.fl[ num_features*lineno + 482]
                                       , &feature->data.fl[ num_features*lineno + 483]
                                       , &feature->data.fl[ num_features*lineno + 484]
                                       , &feature->data.fl[ num_features*lineno + 485]
                                       , &feature->data.fl[ num_features*lineno + 486]
                                       , &feature->data.fl[ num_features*lineno + 487]
                                       , &feature->data.fl[ num_features*lineno + 488]
                                       , &feature->data.fl[ num_features*lineno + 489]
                                       , &feature->data.fl[ num_features*lineno + 490]
                                       , &feature->data.fl[ num_features*lineno + 491]
                                       , &feature->data.fl[ num_features*lineno + 492]
                                       , &feature->data.fl[ num_features*lineno + 493]
                                       , &feature->data.fl[ num_features*lineno + 494]
                                       , &feature->data.fl[ num_features*lineno + 495]
                                       , &feature->data.fl[ num_features*lineno + 496]
                                       , &feature->data.fl[ num_features*lineno + 497]
                                       , &feature->data.fl[ num_features*lineno + 498]
                                       , &feature->data.fl[ num_features*lineno + 499]
                                       , &feature->data.fl[ num_features*lineno + 500]
                                       , &feature->data.fl[ num_features*lineno + 501]
                                       , &feature->data.fl[ num_features*lineno + 502]
                                       , &feature->data.fl[ num_features*lineno + 503]
                                       , &feature->data.fl[ num_features*lineno + 504]
                                       , &feature->data.fl[ num_features*lineno + 505]
                                       , &feature->data.fl[ num_features*lineno + 506]
                                       , &feature->data.fl[ num_features*lineno + 507]
                                       , &feature->data.fl[ num_features*lineno + 508]
                                       , &feature->data.fl[ num_features*lineno + 509]
                                       , &feature->data.fl[ num_features*lineno + 510]
                                       , &feature->data.fl[ num_features*lineno + 511]
                                       , &feature->data.fl[ num_features*lineno + 512]
                                       , &feature->data.fl[ num_features*lineno + 513]
                                       , &feature->data.fl[ num_features*lineno + 514]
                                       , &feature->data.fl[ num_features*lineno + 515]
                                       , &feature->data.fl[ num_features*lineno + 516]
                                       , &feature->data.fl[ num_features*lineno + 517]
                                       , &feature->data.fl[ num_features*lineno + 518]
                                       , &feature->data.fl[ num_features*lineno + 519]
                                       , &feature->data.fl[ num_features*lineno + 520]
                                       , &feature->data.fl[ num_features*lineno + 521]
                                       , &feature->data.fl[ num_features*lineno + 522]
                                       , &feature->data.fl[ num_features*lineno + 523]
                                       , &feature->data.fl[ num_features*lineno + 524]
                                       , &feature->data.fl[ num_features*lineno + 525]
                                       , &feature->data.fl[ num_features*lineno + 526]
                                       , &feature->data.fl[ num_features*lineno + 527]
                                       , &feature->data.fl[ num_features*lineno + 528]
                                       , &feature->data.fl[ num_features*lineno + 529]
                                       , &feature->data.fl[ num_features*lineno + 530]
                                       , &feature->data.fl[ num_features*lineno + 531]
                                       , &feature->data.fl[ num_features*lineno + 532]
                                       , &feature->data.fl[ num_features*lineno + 533]
                                       , &feature->data.fl[ num_features*lineno + 534]
                                       , &feature->data.fl[ num_features*lineno + 535]
                                       , &feature->data.fl[ num_features*lineno + 536]
                                       , &feature->data.fl[ num_features*lineno + 537]
                                       , &feature->data.fl[ num_features*lineno + 538]
                                       , &feature->data.fl[ num_features*lineno + 539]
                                       , &feature->data.fl[ num_features*lineno + 540]
                                       , &feature->data.fl[ num_features*lineno + 541]
                                       , &feature->data.fl[ num_features*lineno + 542]
                                       , &feature->data.fl[ num_features*lineno + 543]
                                       , &feature->data.fl[ num_features*lineno + 544]
                                       , &feature->data.fl[ num_features*lineno + 545]
                                       , &feature->data.fl[ num_features*lineno + 546]
                                       , &feature->data.fl[ num_features*lineno + 547]
                                       , &feature->data.fl[ num_features*lineno + 548]
                                       , &feature->data.fl[ num_features*lineno + 549]
                                       , &feature->data.fl[ num_features*lineno + 550]
                                       , &feature->data.fl[ num_features*lineno + 551]
                                       , &feature->data.fl[ num_features*lineno + 552]
                                       , &feature->data.fl[ num_features*lineno + 553]
                                       , &feature->data.fl[ num_features*lineno + 554]
                                       , &feature->data.fl[ num_features*lineno + 555]
                                       , &feature->data.fl[ num_features*lineno + 556]
                                       , &feature->data.fl[ num_features*lineno + 557]
                                       , &feature->data.fl[ num_features*lineno + 558]
                                       , &feature->data.fl[ num_features*lineno + 559]
                                       , &feature->data.fl[ num_features*lineno + 560]
                                       , &feature->data.fl[ num_features*lineno + 561]
                                       , &feature->data.fl[ num_features*lineno + 562]
                                       , &feature->data.fl[ num_features*lineno + 563]
                                       , &feature->data.fl[ num_features*lineno + 564]
                                       , &feature->data.fl[ num_features*lineno + 565]
                                       , &feature->data.fl[ num_features*lineno + 566]
                                       , &feature->data.fl[ num_features*lineno + 567]
                                       , &feature->data.fl[ num_features*lineno + 568]
                                       , &feature->data.fl[ num_features*lineno + 569]
                                       , &feature->data.fl[ num_features*lineno + 570]
                                       , &feature->data.fl[ num_features*lineno + 571]
                                       , &feature->data.fl[ num_features*lineno + 572]
                                       , &feature->data.fl[ num_features*lineno + 573]
                                       , &feature->data.fl[ num_features*lineno + 574]
                                       , &feature->data.fl[ num_features*lineno + 575]
                                       , &feature->data.fl[ num_features*lineno + 576]
                                       , &feature->data.fl[ num_features*lineno + 577]
                                       , &feature->data.fl[ num_features*lineno + 578]
                                       , &feature->data.fl[ num_features*lineno + 579]
                                       , &feature->data.fl[ num_features*lineno + 580]
                                       , &feature->data.fl[ num_features*lineno + 581]
                                       , &feature->data.fl[ num_features*lineno + 582]
                                       , &feature->data.fl[ num_features*lineno + 583]
                                       , &feature->data.fl[ num_features*lineno + 584]
                                       , &feature->data.fl[ num_features*lineno + 585]
                                       , &feature->data.fl[ num_features*lineno + 586]
                                       , &feature->data.fl[ num_features*lineno + 587]
                                       , &feature->data.fl[ num_features*lineno + 588]
                                       , &feature->data.fl[ num_features*lineno + 589]
                                       , &feature->data.fl[ num_features*lineno + 590]
                                       , &feature->data.fl[ num_features*lineno + 591]
                                       , &feature->data.fl[ num_features*lineno + 592]
                                       , &feature->data.fl[ num_features*lineno + 593]
                                       , &feature->data.fl[ num_features*lineno + 594]
                                       , &feature->data.fl[ num_features*lineno + 595]
                                       , &feature->data.fl[ num_features*lineno + 596]
                                       , &feature->data.fl[ num_features*lineno + 597]
                                       , &feature->data.fl[ num_features*lineno + 598]
                                       , &feature->data.fl[ num_features*lineno + 599]
                                       , &feature->data.fl[ num_features*lineno + 600]
                                       , &feature->data.fl[ num_features*lineno + 601]
                                       , &feature->data.fl[ num_features*lineno + 602]
                                       , &feature->data.fl[ num_features*lineno + 603]
                                       , &feature->data.fl[ num_features*lineno + 604]
                                       , &feature->data.fl[ num_features*lineno + 605]
                                       , &feature->data.fl[ num_features*lineno + 606]
                                       , &feature->data.fl[ num_features*lineno + 607]
                                       , &feature->data.fl[ num_features*lineno + 608]
                                       , &feature->data.fl[ num_features*lineno + 609]
                                       , &feature->data.fl[ num_features*lineno + 610]
                                       , &feature->data.fl[ num_features*lineno + 611]
                                       , &feature->data.fl[ num_features*lineno + 612]
                                       , &feature->data.fl[ num_features*lineno + 613]
                                       , &feature->data.fl[ num_features*lineno + 614]
                                       , &feature->data.fl[ num_features*lineno + 615]
                                       , &feature->data.fl[ num_features*lineno + 616]
                                       , &feature->data.fl[ num_features*lineno + 617]
                                       , &feature->data.fl[ num_features*lineno + 618]
                                       , &feature->data.fl[ num_features*lineno + 619]
                                       , &feature->data.fl[ num_features*lineno + 620]
                                       , &feature->data.fl[ num_features*lineno + 621]
                                       , &feature->data.fl[ num_features*lineno + 622]
                                       , &feature->data.fl[ num_features*lineno + 623]
                                       , &feature->data.fl[ num_features*lineno + 624]
                                       , &feature->data.fl[ num_features*lineno + 625]
                                       , &feature->data.fl[ num_features*lineno + 626]
                                       , &feature->data.fl[ num_features*lineno + 627]
                                       , &feature->data.fl[ num_features*lineno + 628]
                                       , &feature->data.fl[ num_features*lineno + 629]
                                       , &feature->data.fl[ num_features*lineno + 630]
                                       , &feature->data.fl[ num_features*lineno + 631]
                                       , &feature->data.fl[ num_features*lineno + 632]
                                       , &feature->data.fl[ num_features*lineno + 633]
                                       , &feature->data.fl[ num_features*lineno + 634]
                                       , &feature->data.fl[ num_features*lineno + 635]
                                       , &feature->data.fl[ num_features*lineno + 636]
                                       , &feature->data.fl[ num_features*lineno + 637]
                                       , &feature->data.fl[ num_features*lineno + 638]
                                       , &feature->data.fl[ num_features*lineno + 639]
                                       , &feature->data.fl[ num_features*lineno + 640]
                                       , &feature->data.fl[ num_features*lineno + 641]
                                       , &feature->data.fl[ num_features*lineno + 642]
                                       , &feature->data.fl[ num_features*lineno + 643]
                                       , &feature->data.fl[ num_features*lineno + 644]
                                       , &feature->data.fl[ num_features*lineno + 645]
                                       , &feature->data.fl[ num_features*lineno + 646]
                                       , &feature->data.fl[ num_features*lineno + 647]
                                       , &feature->data.fl[ num_features*lineno + 648]
                                       , &feature->data.fl[ num_features*lineno + 649]
                                       , &feature->data.fl[ num_features*lineno + 650]
                                       , &feature->data.fl[ num_features*lineno + 651]
                                       , &feature->data.fl[ num_features*lineno + 652]
                                       , &feature->data.fl[ num_features*lineno + 653]
                                       , &feature->data.fl[ num_features*lineno + 654]
                                       , &feature->data.fl[ num_features*lineno + 655]
                                       , &feature->data.fl[ num_features*lineno + 656]
                                       , &feature->data.fl[ num_features*lineno + 657]
                                       , &feature->data.fl[ num_features*lineno + 658]
                                       , &feature->data.fl[ num_features*lineno + 659]
                                       , &feature->data.fl[ num_features*lineno + 660]
                                       , &feature->data.fl[ num_features*lineno + 661]
                                       , &feature->data.fl[ num_features*lineno + 662]
                                       , &feature->data.fl[ num_features*lineno + 663]
                                       , &feature->data.fl[ num_features*lineno + 664]
                                       , &feature->data.fl[ num_features*lineno + 665]
                                       , &feature->data.fl[ num_features*lineno + 666]
                                       , &feature->data.fl[ num_features*lineno + 667]
                                       , &feature->data.fl[ num_features*lineno + 668]
                                       , &feature->data.fl[ num_features*lineno + 669]
                                       , &feature->data.fl[ num_features*lineno + 670]
                                       , &feature->data.fl[ num_features*lineno + 671]
                                       , &feature->data.fl[ num_features*lineno + 672]
                                       , &feature->data.fl[ num_features*lineno + 673]
                                       , &feature->data.fl[ num_features*lineno + 674]
                                       , &feature->data.fl[ num_features*lineno + 675]
                                       , &feature->data.fl[ num_features*lineno + 676]
                                       , &feature->data.fl[ num_features*lineno + 677]
                                       , &feature->data.fl[ num_features*lineno + 678]
                                       , &feature->data.fl[ num_features*lineno + 679]
                                       , &feature->data.fl[ num_features*lineno + 680]
                                       , &feature->data.fl[ num_features*lineno + 681]
                                       , &feature->data.fl[ num_features*lineno + 682]
                                       , &feature->data.fl[ num_features*lineno + 683]
                                       , &feature->data.fl[ num_features*lineno + 684]
                                       , &feature->data.fl[ num_features*lineno + 685]
                                       , &feature->data.fl[ num_features*lineno + 686]
                                       , &feature->data.fl[ num_features*lineno + 687]
                                       , &feature->data.fl[ num_features*lineno + 688]
                                       , &feature->data.fl[ num_features*lineno + 689]
                                       , &feature->data.fl[ num_features*lineno + 690]
                                       , &feature->data.fl[ num_features*lineno + 691]
                                       , &feature->data.fl[ num_features*lineno + 692]
                                       , &feature->data.fl[ num_features*lineno + 693]
                                       , &feature->data.fl[ num_features*lineno + 694]
                                       , &feature->data.fl[ num_features*lineno + 695]
                                       , &feature->data.fl[ num_features*lineno + 696]
                                       , &feature->data.fl[ num_features*lineno + 697]
                                       , &feature->data.fl[ num_features*lineno + 698]
                                       , &feature->data.fl[ num_features*lineno + 699]
                                       , &feature->data.fl[ num_features*lineno + 700]
                                       , &feature->data.fl[ num_features*lineno + 701]
                                       , &feature->data.fl[ num_features*lineno + 702]
                                       , &feature->data.fl[ num_features*lineno + 703]
                                       , &feature->data.fl[ num_features*lineno + 704]
                                       , &feature->data.fl[ num_features*lineno + 705]
                                       , &feature->data.fl[ num_features*lineno + 706]
                                       , &feature->data.fl[ num_features*lineno + 707]
                                       , &feature->data.fl[ num_features*lineno + 708]
                                       , &feature->data.fl[ num_features*lineno + 709]
                                       , &feature->data.fl[ num_features*lineno + 710]
                                       , &feature->data.fl[ num_features*lineno + 711]
                                       , &feature->data.fl[ num_features*lineno + 712]
                                       , &feature->data.fl[ num_features*lineno + 713]
                                       , &feature->data.fl[ num_features*lineno + 714]
                                       , &feature->data.fl[ num_features*lineno + 715]
                                       , &feature->data.fl[ num_features*lineno + 716]
                                       , &feature->data.fl[ num_features*lineno + 717]
                                       , &feature->data.fl[ num_features*lineno + 718]
                                       , &feature->data.fl[ num_features*lineno + 719]
                                       , &feature->data.fl[ num_features*lineno + 720]
                                       , &feature->data.fl[ num_features*lineno + 721]
                                       , &feature->data.fl[ num_features*lineno + 722]
                                       , &feature->data.fl[ num_features*lineno + 723]
                                       , &feature->data.fl[ num_features*lineno + 724]
                                       , &feature->data.fl[ num_features*lineno + 725]
                                       , &feature->data.fl[ num_features*lineno + 726]
                                       , &feature->data.fl[ num_features*lineno + 727]
                                       , &feature->data.fl[ num_features*lineno + 728]
                                       , &feature->data.fl[ num_features*lineno + 729]
                                       , &feature->data.fl[ num_features*lineno + 730]
                                       , &feature->data.fl[ num_features*lineno + 731]
                                       , &feature->data.fl[ num_features*lineno + 732]
                                       , &feature->data.fl[ num_features*lineno + 733]
                                       , &feature->data.fl[ num_features*lineno + 734]
                                       , &feature->data.fl[ num_features*lineno + 735]
                                       , &feature->data.fl[ num_features*lineno + 736]
                                       , &feature->data.fl[ num_features*lineno + 737]
                                       , &feature->data.fl[ num_features*lineno + 738]
                                       , &feature->data.fl[ num_features*lineno + 739]
                                       , &feature->data.fl[ num_features*lineno + 740]
                                       , &feature->data.fl[ num_features*lineno + 741]
                                       , &feature->data.fl[ num_features*lineno + 742]
                                       , &feature->data.fl[ num_features*lineno + 743]
                                       , &feature->data.fl[ num_features*lineno + 744]
                                       , &feature->data.fl[ num_features*lineno + 745]
                                       , &feature->data.fl[ num_features*lineno + 746]
                                       , &feature->data.fl[ num_features*lineno + 747]
                                       , &feature->data.fl[ num_features*lineno + 748]
                                       , &feature->data.fl[ num_features*lineno + 749]
                                       , &feature->data.fl[ num_features*lineno + 750]
                                       , &feature->data.fl[ num_features*lineno + 751]
                                       , &feature->data.fl[ num_features*lineno + 752]
                                       , &feature->data.fl[ num_features*lineno + 753]
                                       , &feature->data.fl[ num_features*lineno + 754]
                                       , &feature->data.fl[ num_features*lineno + 755]
                                       , &feature->data.fl[ num_features*lineno + 756]
                                       , &feature->data.fl[ num_features*lineno + 757]
                                       , &feature->data.fl[ num_features*lineno + 758]
                                       , &feature->data.fl[ num_features*lineno + 759]
                                       , &feature->data.fl[ num_features*lineno + 760]
                                       , &feature->data.fl[ num_features*lineno + 761]
                                       , &feature->data.fl[ num_features*lineno + 762]
                                       , &feature->data.fl[ num_features*lineno + 763]
                                       , &feature->data.fl[ num_features*lineno + 764]
                                       , &feature->data.fl[ num_features*lineno + 765]
                                       , &feature->data.fl[ num_features*lineno + 766]
                                       , &feature->data.fl[ num_features*lineno + 767]
                                       , &feature->data.fl[ num_features*lineno + 768]
                                       , &feature->data.fl[ num_features*lineno + 769]
                                       , &feature->data.fl[ num_features*lineno + 770]
                                       , &feature->data.fl[ num_features*lineno + 771]
                                       , &feature->data.fl[ num_features*lineno + 772]
                                       , &feature->data.fl[ num_features*lineno + 773]
                                       , &feature->data.fl[ num_features*lineno + 774]
                                       , &feature->data.fl[ num_features*lineno + 775]
                                       , &feature->data.fl[ num_features*lineno + 776]
                                       , &feature->data.fl[ num_features*lineno + 777]
                                       , &feature->data.fl[ num_features*lineno + 778]
                                       , &feature->data.fl[ num_features*lineno + 779]
                                       , &feature->data.fl[ num_features*lineno + 780]
                                       , &feature->data.fl[ num_features*lineno + 781]
                                       , &feature->data.fl[ num_features*lineno + 782]
                                       , &feature->data.fl[ num_features*lineno + 783]
                                       ))
      {
        fprintf(stderr, " read malformed file " );
        break;
      }
      lineno++;
    }
    fclose(fp);
  }
  else
  {
    fprintf(stderr," cant open input file %s ", fn);
    perror("open");
  }
  return 0;
}

// read the data
int read_train_set(char* fn, int* label, int* feature)
{
  int num_features = cvGetDimSize(feature,1);
  int num_samples = cvGetDimSize(feature,0);

  FILE* fp = fopen(fn,"r");
  if(fp)
  {
    static char line [8000];
    fgets(line, sizeof line, fp); // skip the header line
    int lineno=0;
    while (fgets(line, sizeof line, fp) != NULL)
    {
      //printf("\rline %d", lineno);
      //printf("line %s\n", line);
      if( 785 != sscanf(line,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d"
                        , &label[lineno]
                        , &feature[ num_features*lineno + 0  ]
                        , &feature[ num_features*lineno + 1  ]
                        , &feature[ num_features*lineno + 2  ]
                        , &feature[ num_features*lineno + 3  ]
                        , &feature[ num_features*lineno + 4  ]
                        , &feature[ num_features*lineno + 5  ]
                        , &feature[ num_features*lineno + 6  ]
                        , &feature[ num_features*lineno + 7  ]
                        , &feature[ num_features*lineno + 8  ]
                        , &feature[ num_features*lineno + 9  ]
                        , &feature[ num_features*lineno + 10 ]
                        , &feature[ num_features*lineno + 11 ]
                        , &feature[ num_features*lineno + 12 ]
                        , &feature[ num_features*lineno + 13 ]
                        , &feature[ num_features*lineno + 14 ]
                        , &feature[ num_features*lineno + 15 ]
                        , &feature[ num_features*lineno + 16 ]
                        , &feature[ num_features*lineno + 17 ]
                        , &feature[ num_features*lineno + 18 ]
                        , &feature[ num_features*lineno + 19 ]
                        , &feature[ num_features*lineno + 20 ]
                        , &feature[ num_features*lineno + 21 ]
                        , &feature[ num_features*lineno + 22 ]
                        , &feature[ num_features*lineno + 23 ]
                        , &feature[ num_features*lineno + 24 ]
                        , &feature[ num_features*lineno + 25 ]
                        , &feature[ num_features*lineno + 26 ]
                        , &feature[ num_features*lineno + 27 ]
                        , &feature[ num_features*lineno + 28 ]
                        , &feature[ num_features*lineno + 29 ]
                        , &feature[ num_features*lineno + 30 ]
                        , &feature[ num_features*lineno + 31 ]
                        , &feature[ num_features*lineno + 32 ]
                        , &feature[ num_features*lineno + 33 ]
                        , &feature[ num_features*lineno + 34 ]
                        , &feature[ num_features*lineno + 35 ]
                        , &feature[ num_features*lineno + 36 ]
                        , &feature[ num_features*lineno + 37 ]
                        , &feature[ num_features*lineno + 38 ]
                        , &feature[ num_features*lineno + 39 ]
                        , &feature[ num_features*lineno + 40 ]
                        , &feature[ num_features*lineno + 41 ]
                        , &feature[ num_features*lineno + 42 ]
                        , &feature[ num_features*lineno + 43 ]
                        , &feature[ num_features*lineno + 44 ]
                        , &feature[ num_features*lineno + 45 ]
                        , &feature[ num_features*lineno + 46 ]
                        , &feature[ num_features*lineno + 47 ]
                        , &feature[ num_features*lineno + 48 ]
                        , &feature[ num_features*lineno + 49 ]
                        , &feature[ num_features*lineno + 50 ]
                        , &feature[ num_features*lineno + 51 ]
                        , &feature[ num_features*lineno + 52 ]
                        , &feature[ num_features*lineno + 53 ]
                        , &feature[ num_features*lineno + 54 ]
                        , &feature[ num_features*lineno + 55 ]
                        , &feature[ num_features*lineno + 56 ]
                        , &feature[ num_features*lineno + 57 ]
                        , &feature[ num_features*lineno + 58 ]
                        , &feature[ num_features*lineno + 59 ]
                        , &feature[ num_features*lineno + 60 ]
                        , &feature[ num_features*lineno + 61 ]
                        , &feature[ num_features*lineno + 62 ]
                        , &feature[ num_features*lineno + 63 ]
                        , &feature[ num_features*lineno + 64 ]
                        , &feature[ num_features*lineno + 65 ]
                        , &feature[ num_features*lineno + 66 ]
                        , &feature[ num_features*lineno + 67 ]
                        , &feature[ num_features*lineno + 68 ]
                        , &feature[ num_features*lineno + 69 ]
                        , &feature[ num_features*lineno + 70 ]
                        , &feature[ num_features*lineno + 71 ]
                        , &feature[ num_features*lineno + 72 ]
                        , &feature[ num_features*lineno + 73 ]
                        , &feature[ num_features*lineno + 74 ]
                        , &feature[ num_features*lineno + 75 ]
                        , &feature[ num_features*lineno + 76 ]
                        , &feature[ num_features*lineno + 77 ]
                        , &feature[ num_features*lineno + 78 ]
                        , &feature[ num_features*lineno + 79 ]
                        , &feature[ num_features*lineno + 80 ]
                        , &feature[ num_features*lineno + 81 ]
                        , &feature[ num_features*lineno + 82 ]
                        , &feature[ num_features*lineno + 83 ]
                        , &feature[ num_features*lineno + 84 ]
                        , &feature[ num_features*lineno + 85 ]
                        , &feature[ num_features*lineno + 86 ]
                        , &feature[ num_features*lineno + 87 ]
                        , &feature[ num_features*lineno + 88 ]
                        , &feature[ num_features*lineno + 89 ]
                        , &feature[ num_features*lineno + 90 ]
                        , &feature[ num_features*lineno + 91 ]
                        , &feature[ num_features*lineno + 92 ]
                        , &feature[ num_features*lineno + 93 ]
                        , &feature[ num_features*lineno + 94 ]
                        , &feature[ num_features*lineno + 95 ]
                        , &feature[ num_features*lineno + 96 ]
                        , &feature[ num_features*lineno + 97 ]
                        , &feature[ num_features*lineno + 98 ]
                        , &feature[ num_features*lineno + 99 ]
                        , &feature[ num_features*lineno + 100]
                        , &feature[ num_features*lineno + 101]
                        , &feature[ num_features*lineno + 102]
                        , &feature[ num_features*lineno + 103]
                        , &feature[ num_features*lineno + 104]
                        , &feature[ num_features*lineno + 105]
                        , &feature[ num_features*lineno + 106]
                        , &feature[ num_features*lineno + 107]
                        , &feature[ num_features*lineno + 108]
                        , &feature[ num_features*lineno + 109]
                        , &feature[ num_features*lineno + 110]
                        , &feature[ num_features*lineno + 111]
                        , &feature[ num_features*lineno + 112]
                        , &feature[ num_features*lineno + 113]
                        , &feature[ num_features*lineno + 114]
                        , &feature[ num_features*lineno + 115]
                        , &feature[ num_features*lineno + 116]
                        , &feature[ num_features*lineno + 117]
                        , &feature[ num_features*lineno + 118]
                        , &feature[ num_features*lineno + 119]
                        , &feature[ num_features*lineno + 120]
                        , &feature[ num_features*lineno + 121]
                        , &feature[ num_features*lineno + 122]
                        , &feature[ num_features*lineno + 123]
                        , &feature[ num_features*lineno + 124]
                        , &feature[ num_features*lineno + 125]
                        , &feature[ num_features*lineno + 126]
                        , &feature[ num_features*lineno + 127]
                        , &feature[ num_features*lineno + 128]
                        , &feature[ num_features*lineno + 129]
                        , &feature[ num_features*lineno + 130]
                        , &feature[ num_features*lineno + 131]
                        , &feature[ num_features*lineno + 132]
                        , &feature[ num_features*lineno + 133]
                        , &feature[ num_features*lineno + 134]
                        , &feature[ num_features*lineno + 135]
                        , &feature[ num_features*lineno + 136]
                        , &feature[ num_features*lineno + 137]
                        , &feature[ num_features*lineno + 138]
                        , &feature[ num_features*lineno + 139]
                        , &feature[ num_features*lineno + 140]
                        , &feature[ num_features*lineno + 141]
                        , &feature[ num_features*lineno + 142]
                        , &feature[ num_features*lineno + 143]
                        , &feature[ num_features*lineno + 144]
                        , &feature[ num_features*lineno + 145]
                        , &feature[ num_features*lineno + 146]
                        , &feature[ num_features*lineno + 147]
                        , &feature[ num_features*lineno + 148]
                        , &feature[ num_features*lineno + 149]
                        , &feature[ num_features*lineno + 150]
                        , &feature[ num_features*lineno + 151]
                        , &feature[ num_features*lineno + 152]
                        , &feature[ num_features*lineno + 153]
                        , &feature[ num_features*lineno + 154]
                        , &feature[ num_features*lineno + 155]
                        , &feature[ num_features*lineno + 156]
                        , &feature[ num_features*lineno + 157]
                        , &feature[ num_features*lineno + 158]
                        , &feature[ num_features*lineno + 159]
                        , &feature[ num_features*lineno + 160]
                        , &feature[ num_features*lineno + 161]
                        , &feature[ num_features*lineno + 162]
                        , &feature[ num_features*lineno + 163]
                        , &feature[ num_features*lineno + 164]
                        , &feature[ num_features*lineno + 165]
                        , &feature[ num_features*lineno + 166]
                        , &feature[ num_features*lineno + 167]
                        , &feature[ num_features*lineno + 168]
                        , &feature[ num_features*lineno + 169]
                        , &feature[ num_features*lineno + 170]
                        , &feature[ num_features*lineno + 171]
                        , &feature[ num_features*lineno + 172]
                        , &feature[ num_features*lineno + 173]
                        , &feature[ num_features*lineno + 174]
                        , &feature[ num_features*lineno + 175]
                        , &feature[ num_features*lineno + 176]
                        , &feature[ num_features*lineno + 177]
                        , &feature[ num_features*lineno + 178]
                        , &feature[ num_features*lineno + 179]
                        , &feature[ num_features*lineno + 180]
                        , &feature[ num_features*lineno + 181]
                        , &feature[ num_features*lineno + 182]
                        , &feature[ num_features*lineno + 183]
                        , &feature[ num_features*lineno + 184]
                        , &feature[ num_features*lineno + 185]
                        , &feature[ num_features*lineno + 186]
                        , &feature[ num_features*lineno + 187]
                        , &feature[ num_features*lineno + 188]
                        , &feature[ num_features*lineno + 189]
                        , &feature[ num_features*lineno + 190]
                        , &feature[ num_features*lineno + 191]
                        , &feature[ num_features*lineno + 192]
                        , &feature[ num_features*lineno + 193]
                        , &feature[ num_features*lineno + 194]
                        , &feature[ num_features*lineno + 195]
                        , &feature[ num_features*lineno + 196]
                        , &feature[ num_features*lineno + 197]
                        , &feature[ num_features*lineno + 198]
                        , &feature[ num_features*lineno + 199]
                        , &feature[ num_features*lineno + 200]
                        , &feature[ num_features*lineno + 201]
                        , &feature[ num_features*lineno + 202]
                        , &feature[ num_features*lineno + 203]
                        , &feature[ num_features*lineno + 204]
                        , &feature[ num_features*lineno + 205]
                        , &feature[ num_features*lineno + 206]
                        , &feature[ num_features*lineno + 207]
                        , &feature[ num_features*lineno + 208]
                        , &feature[ num_features*lineno + 209]
                        , &feature[ num_features*lineno + 210]
                        , &feature[ num_features*lineno + 211]
                        , &feature[ num_features*lineno + 212]
                        , &feature[ num_features*lineno + 213]
                        , &feature[ num_features*lineno + 214]
                        , &feature[ num_features*lineno + 215]
                        , &feature[ num_features*lineno + 216]
                        , &feature[ num_features*lineno + 217]
                        , &feature[ num_features*lineno + 218]
                        , &feature[ num_features*lineno + 219]
                        , &feature[ num_features*lineno + 220]
                        , &feature[ num_features*lineno + 221]
                        , &feature[ num_features*lineno + 222]
                        , &feature[ num_features*lineno + 223]
                        , &feature[ num_features*lineno + 224]
                        , &feature[ num_features*lineno + 225]
                        , &feature[ num_features*lineno + 226]
                        , &feature[ num_features*lineno + 227]
                        , &feature[ num_features*lineno + 228]
                        , &feature[ num_features*lineno + 229]
                        , &feature[ num_features*lineno + 230]
                        , &feature[ num_features*lineno + 231]
                        , &feature[ num_features*lineno + 232]
                        , &feature[ num_features*lineno + 233]
                        , &feature[ num_features*lineno + 234]
                        , &feature[ num_features*lineno + 235]
                        , &feature[ num_features*lineno + 236]
                        , &feature[ num_features*lineno + 237]
                        , &feature[ num_features*lineno + 238]
                        , &feature[ num_features*lineno + 239]
                        , &feature[ num_features*lineno + 240]
                        , &feature[ num_features*lineno + 241]
                        , &feature[ num_features*lineno + 242]
                        , &feature[ num_features*lineno + 243]
                        , &feature[ num_features*lineno + 244]
                        , &feature[ num_features*lineno + 245]
                        , &feature[ num_features*lineno + 246]
                        , &feature[ num_features*lineno + 247]
                        , &feature[ num_features*lineno + 248]
                        , &feature[ num_features*lineno + 249]
                        , &feature[ num_features*lineno + 250]
                        , &feature[ num_features*lineno + 251]
                        , &feature[ num_features*lineno + 252]
                        , &feature[ num_features*lineno + 253]
                        , &feature[ num_features*lineno + 254]
                        , &feature[ num_features*lineno + 255]
                        , &feature[ num_features*lineno + 256]
                        , &feature[ num_features*lineno + 257]
                        , &feature[ num_features*lineno + 258]
                        , &feature[ num_features*lineno + 259]
                        , &feature[ num_features*lineno + 260]
                        , &feature[ num_features*lineno + 261]
                        , &feature[ num_features*lineno + 262]
                        , &feature[ num_features*lineno + 263]
                        , &feature[ num_features*lineno + 264]
                        , &feature[ num_features*lineno + 265]
                        , &feature[ num_features*lineno + 266]
                        , &feature[ num_features*lineno + 267]
                        , &feature[ num_features*lineno + 268]
                        , &feature[ num_features*lineno + 269]
                        , &feature[ num_features*lineno + 270]
                        , &feature[ num_features*lineno + 271]
                        , &feature[ num_features*lineno + 272]
                        , &feature[ num_features*lineno + 273]
                        , &feature[ num_features*lineno + 274]
                        , &feature[ num_features*lineno + 275]
                        , &feature[ num_features*lineno + 276]
                        , &feature[ num_features*lineno + 277]
                        , &feature[ num_features*lineno + 278]
                        , &feature[ num_features*lineno + 279]
                        , &feature[ num_features*lineno + 280]
                        , &feature[ num_features*lineno + 281]
                        , &feature[ num_features*lineno + 282]
                        , &feature[ num_features*lineno + 283]
                        , &feature[ num_features*lineno + 284]
                        , &feature[ num_features*lineno + 285]
                        , &feature[ num_features*lineno + 286]
                        , &feature[ num_features*lineno + 287]
                        , &feature[ num_features*lineno + 288]
                        , &feature[ num_features*lineno + 289]
                        , &feature[ num_features*lineno + 290]
                        , &feature[ num_features*lineno + 291]
                        , &feature[ num_features*lineno + 292]
                        , &feature[ num_features*lineno + 293]
                        , &feature[ num_features*lineno + 294]
                        , &feature[ num_features*lineno + 295]
                        , &feature[ num_features*lineno + 296]
                        , &feature[ num_features*lineno + 297]
                        , &feature[ num_features*lineno + 298]
                        , &feature[ num_features*lineno + 299]
                        , &feature[ num_features*lineno + 300]
                        , &feature[ num_features*lineno + 301]
                        , &feature[ num_features*lineno + 302]
                        , &feature[ num_features*lineno + 303]
                        , &feature[ num_features*lineno + 304]
                        , &feature[ num_features*lineno + 305]
                        , &feature[ num_features*lineno + 306]
                        , &feature[ num_features*lineno + 307]
                        , &feature[ num_features*lineno + 308]
                        , &feature[ num_features*lineno + 309]
                        , &feature[ num_features*lineno + 310]
                        , &feature[ num_features*lineno + 311]
                        , &feature[ num_features*lineno + 312]
                        , &feature[ num_features*lineno + 313]
                        , &feature[ num_features*lineno + 314]
                        , &feature[ num_features*lineno + 315]
                        , &feature[ num_features*lineno + 316]
                        , &feature[ num_features*lineno + 317]
                        , &feature[ num_features*lineno + 318]
                        , &feature[ num_features*lineno + 319]
                        , &feature[ num_features*lineno + 320]
                        , &feature[ num_features*lineno + 321]
                        , &feature[ num_features*lineno + 322]
                        , &feature[ num_features*lineno + 323]
                        , &feature[ num_features*lineno + 324]
                        , &feature[ num_features*lineno + 325]
                        , &feature[ num_features*lineno + 326]
                        , &feature[ num_features*lineno + 327]
                        , &feature[ num_features*lineno + 328]
                        , &feature[ num_features*lineno + 329]
                        , &feature[ num_features*lineno + 330]
                        , &feature[ num_features*lineno + 331]
                        , &feature[ num_features*lineno + 332]
                        , &feature[ num_features*lineno + 333]
                        , &feature[ num_features*lineno + 334]
                        , &feature[ num_features*lineno + 335]
                        , &feature[ num_features*lineno + 336]
                        , &feature[ num_features*lineno + 337]
                        , &feature[ num_features*lineno + 338]
                        , &feature[ num_features*lineno + 339]
                        , &feature[ num_features*lineno + 340]
                        , &feature[ num_features*lineno + 341]
                        , &feature[ num_features*lineno + 342]
                        , &feature[ num_features*lineno + 343]
                        , &feature[ num_features*lineno + 344]
                        , &feature[ num_features*lineno + 345]
                        , &feature[ num_features*lineno + 346]
                        , &feature[ num_features*lineno + 347]
                        , &feature[ num_features*lineno + 348]
                        , &feature[ num_features*lineno + 349]
                        , &feature[ num_features*lineno + 350]
                        , &feature[ num_features*lineno + 351]
                        , &feature[ num_features*lineno + 352]
                        , &feature[ num_features*lineno + 353]
                        , &feature[ num_features*lineno + 354]
                        , &feature[ num_features*lineno + 355]
                        , &feature[ num_features*lineno + 356]
                        , &feature[ num_features*lineno + 357]
                        , &feature[ num_features*lineno + 358]
                        , &feature[ num_features*lineno + 359]
                        , &feature[ num_features*lineno + 360]
                        , &feature[ num_features*lineno + 361]
                        , &feature[ num_features*lineno + 362]
                        , &feature[ num_features*lineno + 363]
                        , &feature[ num_features*lineno + 364]
                        , &feature[ num_features*lineno + 365]
                        , &feature[ num_features*lineno + 366]
                        , &feature[ num_features*lineno + 367]
                        , &feature[ num_features*lineno + 368]
                        , &feature[ num_features*lineno + 369]
                        , &feature[ num_features*lineno + 370]
                        , &feature[ num_features*lineno + 371]
                        , &feature[ num_features*lineno + 372]
                        , &feature[ num_features*lineno + 373]
                        , &feature[ num_features*lineno + 374]
                        , &feature[ num_features*lineno + 375]
                        , &feature[ num_features*lineno + 376]
                        , &feature[ num_features*lineno + 377]
                        , &feature[ num_features*lineno + 378]
                        , &feature[ num_features*lineno + 379]
                        , &feature[ num_features*lineno + 380]
                        , &feature[ num_features*lineno + 381]
                        , &feature[ num_features*lineno + 382]
                        , &feature[ num_features*lineno + 383]
                        , &feature[ num_features*lineno + 384]
                        , &feature[ num_features*lineno + 385]
                        , &feature[ num_features*lineno + 386]
                        , &feature[ num_features*lineno + 387]
                        , &feature[ num_features*lineno + 388]
                        , &feature[ num_features*lineno + 389]
                        , &feature[ num_features*lineno + 390]
                        , &feature[ num_features*lineno + 391]
                        , &feature[ num_features*lineno + 392]
                        , &feature[ num_features*lineno + 393]
                        , &feature[ num_features*lineno + 394]
                        , &feature[ num_features*lineno + 395]
                        , &feature[ num_features*lineno + 396]
                        , &feature[ num_features*lineno + 397]
                        , &feature[ num_features*lineno + 398]
                        , &feature[ num_features*lineno + 399]
                        , &feature[ num_features*lineno + 400]
                        , &feature[ num_features*lineno + 401]
                        , &feature[ num_features*lineno + 402]
                        , &feature[ num_features*lineno + 403]
                        , &feature[ num_features*lineno + 404]
                        , &feature[ num_features*lineno + 405]
                        , &feature[ num_features*lineno + 406]
                        , &feature[ num_features*lineno + 407]
                        , &feature[ num_features*lineno + 408]
                        , &feature[ num_features*lineno + 409]
                        , &feature[ num_features*lineno + 410]
                        , &feature[ num_features*lineno + 411]
                        , &feature[ num_features*lineno + 412]
                        , &feature[ num_features*lineno + 413]
                        , &feature[ num_features*lineno + 414]
                        , &feature[ num_features*lineno + 415]
                        , &feature[ num_features*lineno + 416]
                        , &feature[ num_features*lineno + 417]
                        , &feature[ num_features*lineno + 418]
                        , &feature[ num_features*lineno + 419]
                        , &feature[ num_features*lineno + 420]
                        , &feature[ num_features*lineno + 421]
                        , &feature[ num_features*lineno + 422]
                        , &feature[ num_features*lineno + 423]
                        , &feature[ num_features*lineno + 424]
                        , &feature[ num_features*lineno + 425]
                        , &feature[ num_features*lineno + 426]
                        , &feature[ num_features*lineno + 427]
                        , &feature[ num_features*lineno + 428]
                        , &feature[ num_features*lineno + 429]
                        , &feature[ num_features*lineno + 430]
                        , &feature[ num_features*lineno + 431]
                        , &feature[ num_features*lineno + 432]
                        , &feature[ num_features*lineno + 433]
                        , &feature[ num_features*lineno + 434]
                        , &feature[ num_features*lineno + 435]
                        , &feature[ num_features*lineno + 436]
                        , &feature[ num_features*lineno + 437]
                        , &feature[ num_features*lineno + 438]
                        , &feature[ num_features*lineno + 439]
                        , &feature[ num_features*lineno + 440]
                        , &feature[ num_features*lineno + 441]
                        , &feature[ num_features*lineno + 442]
                        , &feature[ num_features*lineno + 443]
                        , &feature[ num_features*lineno + 444]
                        , &feature[ num_features*lineno + 445]
                        , &feature[ num_features*lineno + 446]
                        , &feature[ num_features*lineno + 447]
                        , &feature[ num_features*lineno + 448]
                        , &feature[ num_features*lineno + 449]
                        , &feature[ num_features*lineno + 450]
                        , &feature[ num_features*lineno + 451]
                        , &feature[ num_features*lineno + 452]
                        , &feature[ num_features*lineno + 453]
                        , &feature[ num_features*lineno + 454]
                        , &feature[ num_features*lineno + 455]
                        , &feature[ num_features*lineno + 456]
                        , &feature[ num_features*lineno + 457]
                        , &feature[ num_features*lineno + 458]
                        , &feature[ num_features*lineno + 459]
                        , &feature[ num_features*lineno + 460]
                        , &feature[ num_features*lineno + 461]
                        , &feature[ num_features*lineno + 462]
                        , &feature[ num_features*lineno + 463]
                        , &feature[ num_features*lineno + 464]
                        , &feature[ num_features*lineno + 465]
                        , &feature[ num_features*lineno + 466]
                        , &feature[ num_features*lineno + 467]
                        , &feature[ num_features*lineno + 468]
                        , &feature[ num_features*lineno + 469]
                        , &feature[ num_features*lineno + 470]
                        , &feature[ num_features*lineno + 471]
                        , &feature[ num_features*lineno + 472]
                        , &feature[ num_features*lineno + 473]
                        , &feature[ num_features*lineno + 474]
                        , &feature[ num_features*lineno + 475]
                        , &feature[ num_features*lineno + 476]
                        , &feature[ num_features*lineno + 477]
                        , &feature[ num_features*lineno + 478]
                        , &feature[ num_features*lineno + 479]
                        , &feature[ num_features*lineno + 480]
                        , &feature[ num_features*lineno + 481]
                        , &feature[ num_features*lineno + 482]
                        , &feature[ num_features*lineno + 483]
                        , &feature[ num_features*lineno + 484]
                        , &feature[ num_features*lineno + 485]
                        , &feature[ num_features*lineno + 486]
                        , &feature[ num_features*lineno + 487]
                        , &feature[ num_features*lineno + 488]
                        , &feature[ num_features*lineno + 489]
                        , &feature[ num_features*lineno + 490]
                        , &feature[ num_features*lineno + 491]
                        , &feature[ num_features*lineno + 492]
                        , &feature[ num_features*lineno + 493]
                        , &feature[ num_features*lineno + 494]
                        , &feature[ num_features*lineno + 495]
                        , &feature[ num_features*lineno + 496]
                        , &feature[ num_features*lineno + 497]
                        , &feature[ num_features*lineno + 498]
                        , &feature[ num_features*lineno + 499]
                        , &feature[ num_features*lineno + 500]
                        , &feature[ num_features*lineno + 501]
                        , &feature[ num_features*lineno + 502]
                        , &feature[ num_features*lineno + 503]
                        , &feature[ num_features*lineno + 504]
                        , &feature[ num_features*lineno + 505]
                        , &feature[ num_features*lineno + 506]
                        , &feature[ num_features*lineno + 507]
                        , &feature[ num_features*lineno + 508]
                        , &feature[ num_features*lineno + 509]
                        , &feature[ num_features*lineno + 510]
                        , &feature[ num_features*lineno + 511]
                        , &feature[ num_features*lineno + 512]
                        , &feature[ num_features*lineno + 513]
                        , &feature[ num_features*lineno + 514]
                        , &feature[ num_features*lineno + 515]
                        , &feature[ num_features*lineno + 516]
                        , &feature[ num_features*lineno + 517]
                        , &feature[ num_features*lineno + 518]
                        , &feature[ num_features*lineno + 519]
                        , &feature[ num_features*lineno + 520]
                        , &feature[ num_features*lineno + 521]
                        , &feature[ num_features*lineno + 522]
                        , &feature[ num_features*lineno + 523]
                        , &feature[ num_features*lineno + 524]
                        , &feature[ num_features*lineno + 525]
                        , &feature[ num_features*lineno + 526]
                        , &feature[ num_features*lineno + 527]
                        , &feature[ num_features*lineno + 528]
                        , &feature[ num_features*lineno + 529]
                        , &feature[ num_features*lineno + 530]
                        , &feature[ num_features*lineno + 531]
                        , &feature[ num_features*lineno + 532]
                        , &feature[ num_features*lineno + 533]
                        , &feature[ num_features*lineno + 534]
                        , &feature[ num_features*lineno + 535]
                        , &feature[ num_features*lineno + 536]
                        , &feature[ num_features*lineno + 537]
                        , &feature[ num_features*lineno + 538]
                        , &feature[ num_features*lineno + 539]
                        , &feature[ num_features*lineno + 540]
                        , &feature[ num_features*lineno + 541]
                        , &feature[ num_features*lineno + 542]
                        , &feature[ num_features*lineno + 543]
                        , &feature[ num_features*lineno + 544]
                        , &feature[ num_features*lineno + 545]
                        , &feature[ num_features*lineno + 546]
                        , &feature[ num_features*lineno + 547]
                        , &feature[ num_features*lineno + 548]
                        , &feature[ num_features*lineno + 549]
                        , &feature[ num_features*lineno + 550]
                        , &feature[ num_features*lineno + 551]
                        , &feature[ num_features*lineno + 552]
                        , &feature[ num_features*lineno + 553]
                        , &feature[ num_features*lineno + 554]
                        , &feature[ num_features*lineno + 555]
                        , &feature[ num_features*lineno + 556]
                        , &feature[ num_features*lineno + 557]
                        , &feature[ num_features*lineno + 558]
                        , &feature[ num_features*lineno + 559]
                        , &feature[ num_features*lineno + 560]
                        , &feature[ num_features*lineno + 561]
                        , &feature[ num_features*lineno + 562]
                        , &feature[ num_features*lineno + 563]
                        , &feature[ num_features*lineno + 564]
                        , &feature[ num_features*lineno + 565]
                        , &feature[ num_features*lineno + 566]
                        , &feature[ num_features*lineno + 567]
                        , &feature[ num_features*lineno + 568]
                        , &feature[ num_features*lineno + 569]
                        , &feature[ num_features*lineno + 570]
                        , &feature[ num_features*lineno + 571]
                        , &feature[ num_features*lineno + 572]
                        , &feature[ num_features*lineno + 573]
                        , &feature[ num_features*lineno + 574]
                        , &feature[ num_features*lineno + 575]
                        , &feature[ num_features*lineno + 576]
                        , &feature[ num_features*lineno + 577]
                        , &feature[ num_features*lineno + 578]
                        , &feature[ num_features*lineno + 579]
                        , &feature[ num_features*lineno + 580]
                        , &feature[ num_features*lineno + 581]
                        , &feature[ num_features*lineno + 582]
                        , &feature[ num_features*lineno + 583]
                        , &feature[ num_features*lineno + 584]
                        , &feature[ num_features*lineno + 585]
                        , &feature[ num_features*lineno + 586]
                        , &feature[ num_features*lineno + 587]
                        , &feature[ num_features*lineno + 588]
                        , &feature[ num_features*lineno + 589]
                        , &feature[ num_features*lineno + 590]
                        , &feature[ num_features*lineno + 591]
                        , &feature[ num_features*lineno + 592]
                        , &feature[ num_features*lineno + 593]
                        , &feature[ num_features*lineno + 594]
                        , &feature[ num_features*lineno + 595]
                        , &feature[ num_features*lineno + 596]
                        , &feature[ num_features*lineno + 597]
                        , &feature[ num_features*lineno + 598]
                        , &feature[ num_features*lineno + 599]
                        , &feature[ num_features*lineno + 600]
                        , &feature[ num_features*lineno + 601]
                        , &feature[ num_features*lineno + 602]
                        , &feature[ num_features*lineno + 603]
                        , &feature[ num_features*lineno + 604]
                        , &feature[ num_features*lineno + 605]
                        , &feature[ num_features*lineno + 606]
                        , &feature[ num_features*lineno + 607]
                        , &feature[ num_features*lineno + 608]
                        , &feature[ num_features*lineno + 609]
                        , &feature[ num_features*lineno + 610]
                        , &feature[ num_features*lineno + 611]
                        , &feature[ num_features*lineno + 612]
                        , &feature[ num_features*lineno + 613]
                        , &feature[ num_features*lineno + 614]
                        , &feature[ num_features*lineno + 615]
                        , &feature[ num_features*lineno + 616]
                        , &feature[ num_features*lineno + 617]
                        , &feature[ num_features*lineno + 618]
                        , &feature[ num_features*lineno + 619]
                        , &feature[ num_features*lineno + 620]
                        , &feature[ num_features*lineno + 621]
                        , &feature[ num_features*lineno + 622]
                        , &feature[ num_features*lineno + 623]
                        , &feature[ num_features*lineno + 624]
                        , &feature[ num_features*lineno + 625]
                        , &feature[ num_features*lineno + 626]
                        , &feature[ num_features*lineno + 627]
                        , &feature[ num_features*lineno + 628]
                        , &feature[ num_features*lineno + 629]
                        , &feature[ num_features*lineno + 630]
                        , &feature[ num_features*lineno + 631]
                        , &feature[ num_features*lineno + 632]
                        , &feature[ num_features*lineno + 633]
                        , &feature[ num_features*lineno + 634]
                        , &feature[ num_features*lineno + 635]
                        , &feature[ num_features*lineno + 636]
                        , &feature[ num_features*lineno + 637]
                        , &feature[ num_features*lineno + 638]
                        , &feature[ num_features*lineno + 639]
                        , &feature[ num_features*lineno + 640]
                        , &feature[ num_features*lineno + 641]
                        , &feature[ num_features*lineno + 642]
                        , &feature[ num_features*lineno + 643]
                        , &feature[ num_features*lineno + 644]
                        , &feature[ num_features*lineno + 645]
                        , &feature[ num_features*lineno + 646]
                        , &feature[ num_features*lineno + 647]
                        , &feature[ num_features*lineno + 648]
                        , &feature[ num_features*lineno + 649]
                        , &feature[ num_features*lineno + 650]
                        , &feature[ num_features*lineno + 651]
                        , &feature[ num_features*lineno + 652]
                        , &feature[ num_features*lineno + 653]
                        , &feature[ num_features*lineno + 654]
                        , &feature[ num_features*lineno + 655]
                        , &feature[ num_features*lineno + 656]
                        , &feature[ num_features*lineno + 657]
                        , &feature[ num_features*lineno + 658]
                        , &feature[ num_features*lineno + 659]
                        , &feature[ num_features*lineno + 660]
                        , &feature[ num_features*lineno + 661]
                        , &feature[ num_features*lineno + 662]
                        , &feature[ num_features*lineno + 663]
                        , &feature[ num_features*lineno + 664]
                        , &feature[ num_features*lineno + 665]
                        , &feature[ num_features*lineno + 666]
                        , &feature[ num_features*lineno + 667]
                        , &feature[ num_features*lineno + 668]
                        , &feature[ num_features*lineno + 669]
                        , &feature[ num_features*lineno + 670]
                        , &feature[ num_features*lineno + 671]
                        , &feature[ num_features*lineno + 672]
                        , &feature[ num_features*lineno + 673]
                        , &feature[ num_features*lineno + 674]
                        , &feature[ num_features*lineno + 675]
                        , &feature[ num_features*lineno + 676]
                        , &feature[ num_features*lineno + 677]
                        , &feature[ num_features*lineno + 678]
                        , &feature[ num_features*lineno + 679]
                        , &feature[ num_features*lineno + 680]
                        , &feature[ num_features*lineno + 681]
                        , &feature[ num_features*lineno + 682]
                        , &feature[ num_features*lineno + 683]
                        , &feature[ num_features*lineno + 684]
                        , &feature[ num_features*lineno + 685]
                        , &feature[ num_features*lineno + 686]
                        , &feature[ num_features*lineno + 687]
                        , &feature[ num_features*lineno + 688]
                        , &feature[ num_features*lineno + 689]
                        , &feature[ num_features*lineno + 690]
                        , &feature[ num_features*lineno + 691]
                        , &feature[ num_features*lineno + 692]
                        , &feature[ num_features*lineno + 693]
                        , &feature[ num_features*lineno + 694]
                        , &feature[ num_features*lineno + 695]
                        , &feature[ num_features*lineno + 696]
                        , &feature[ num_features*lineno + 697]
                        , &feature[ num_features*lineno + 698]
                        , &feature[ num_features*lineno + 699]
                        , &feature[ num_features*lineno + 700]
                        , &feature[ num_features*lineno + 701]
                        , &feature[ num_features*lineno + 702]
                        , &feature[ num_features*lineno + 703]
                        , &feature[ num_features*lineno + 704]
                        , &feature[ num_features*lineno + 705]
                        , &feature[ num_features*lineno + 706]
                        , &feature[ num_features*lineno + 707]
                        , &feature[ num_features*lineno + 708]
                        , &feature[ num_features*lineno + 709]
                        , &feature[ num_features*lineno + 710]
                        , &feature[ num_features*lineno + 711]
                        , &feature[ num_features*lineno + 712]
                        , &feature[ num_features*lineno + 713]
                        , &feature[ num_features*lineno + 714]
                        , &feature[ num_features*lineno + 715]
                        , &feature[ num_features*lineno + 716]
                        , &feature[ num_features*lineno + 717]
                        , &feature[ num_features*lineno + 718]
                        , &feature[ num_features*lineno + 719]
                        , &feature[ num_features*lineno + 720]
                        , &feature[ num_features*lineno + 721]
                        , &feature[ num_features*lineno + 722]
                        , &feature[ num_features*lineno + 723]
                        , &feature[ num_features*lineno + 724]
                        , &feature[ num_features*lineno + 725]
                        , &feature[ num_features*lineno + 726]
                        , &feature[ num_features*lineno + 727]
                        , &feature[ num_features*lineno + 728]
                        , &feature[ num_features*lineno + 729]
                        , &feature[ num_features*lineno + 730]
                        , &feature[ num_features*lineno + 731]
                        , &feature[ num_features*lineno + 732]
                        , &feature[ num_features*lineno + 733]
                        , &feature[ num_features*lineno + 734]
                        , &feature[ num_features*lineno + 735]
                        , &feature[ num_features*lineno + 736]
                        , &feature[ num_features*lineno + 737]
                        , &feature[ num_features*lineno + 738]
                        , &feature[ num_features*lineno + 739]
                        , &feature[ num_features*lineno + 740]
                        , &feature[ num_features*lineno + 741]
                        , &feature[ num_features*lineno + 742]
                        , &feature[ num_features*lineno + 743]
                        , &feature[ num_features*lineno + 744]
                        , &feature[ num_features*lineno + 745]
                        , &feature[ num_features*lineno + 746]
                        , &feature[ num_features*lineno + 747]
                        , &feature[ num_features*lineno + 748]
                        , &feature[ num_features*lineno + 749]
                        , &feature[ num_features*lineno + 750]
                        , &feature[ num_features*lineno + 751]
                        , &feature[ num_features*lineno + 752]
                        , &feature[ num_features*lineno + 753]
                        , &feature[ num_features*lineno + 754]
                        , &feature[ num_features*lineno + 755]
                        , &feature[ num_features*lineno + 756]
                        , &feature[ num_features*lineno + 757]
                        , &feature[ num_features*lineno + 758]
                        , &feature[ num_features*lineno + 759]
                        , &feature[ num_features*lineno + 760]
                        , &feature[ num_features*lineno + 761]
                        , &feature[ num_features*lineno + 762]
                        , &feature[ num_features*lineno + 763]
                        , &feature[ num_features*lineno + 764]
                        , &feature[ num_features*lineno + 765]
                        , &feature[ num_features*lineno + 766]
                        , &feature[ num_features*lineno + 767]
                        , &feature[ num_features*lineno + 768]
                        , &feature[ num_features*lineno + 769]
                        , &feature[ num_features*lineno + 770]
                        , &feature[ num_features*lineno + 771]
                        , &feature[ num_features*lineno + 772]
                        , &feature[ num_features*lineno + 773]
                        , &feature[ num_features*lineno + 774]
                        , &feature[ num_features*lineno + 775]
                        , &feature[ num_features*lineno + 776]
                        , &feature[ num_features*lineno + 777]
                        , &feature[ num_features*lineno + 778]
                        , &feature[ num_features*lineno + 779]
                        , &feature[ num_features*lineno + 780]
                        , &feature[ num_features*lineno + 781]
                        , &feature[ num_features*lineno + 782]
                        , &feature[ num_features*lineno + 783]
                        ))
      {
        fprintf(stderr, " read malformed file " );
        break;
      }
      lineno++;
    }
    fclose(fp);
  }
  else
  {
    fprintf(stderr," cant open input file %s", fn);
    perror("open");
    return -5;
  }
  return 0;
}

int read_test_set(char* fn, int* feature)
{
  int num_features = cvGetDimSize(feature,1);
  int num_samples = cvGetDimSize(feature,0);
  FILE* fp = fopen(fn,"r");
  if(fp)
  {
    static char line [8000];
    fgets(line, sizeof line, fp); // skip the header line
    int lineno=0;
    while (fgets(line, sizeof line, fp) != NULL)
    {
      //printf("\rline %d", lineno);
      //printf("line %s\n", line);
      if( (num_features) != sscanf(line,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d"
                                       , &feature[ num_features*lineno + 0  ]
                                       , &feature[ num_features*lineno + 1  ]
                                       , &feature[ num_features*lineno + 2  ]
                                       , &feature[ num_features*lineno + 3  ]
                                       , &feature[ num_features*lineno + 4  ]
                                       , &feature[ num_features*lineno + 5  ]
                                       , &feature[ num_features*lineno + 6  ]
                                       , &feature[ num_features*lineno + 7  ]
                                       , &feature[ num_features*lineno + 8  ]
                                       , &feature[ num_features*lineno + 9  ]
                                       , &feature[ num_features*lineno + 10 ]
                                       , &feature[ num_features*lineno + 11 ]
                                       , &feature[ num_features*lineno + 12 ]
                                       , &feature[ num_features*lineno + 13 ]
                                       , &feature[ num_features*lineno + 14 ]
                                       , &feature[ num_features*lineno + 15 ]
                                       , &feature[ num_features*lineno + 16 ]
                                       , &feature[ num_features*lineno + 17 ]
                                       , &feature[ num_features*lineno + 18 ]
                                       , &feature[ num_features*lineno + 19 ]
                                       , &feature[ num_features*lineno + 20 ]
                                       , &feature[ num_features*lineno + 21 ]
                                       , &feature[ num_features*lineno + 22 ]
                                       , &feature[ num_features*lineno + 23 ]
                                       , &feature[ num_features*lineno + 24 ]
                                       , &feature[ num_features*lineno + 25 ]
                                       , &feature[ num_features*lineno + 26 ]
                                       , &feature[ num_features*lineno + 27 ]
                                       , &feature[ num_features*lineno + 28 ]
                                       , &feature[ num_features*lineno + 29 ]
                                       , &feature[ num_features*lineno + 30 ]
                                       , &feature[ num_features*lineno + 31 ]
                                       , &feature[ num_features*lineno + 32 ]
                                       , &feature[ num_features*lineno + 33 ]
                                       , &feature[ num_features*lineno + 34 ]
                                       , &feature[ num_features*lineno + 35 ]
                                       , &feature[ num_features*lineno + 36 ]
                                       , &feature[ num_features*lineno + 37 ]
                                       , &feature[ num_features*lineno + 38 ]
                                       , &feature[ num_features*lineno + 39 ]
                                       , &feature[ num_features*lineno + 40 ]
                                       , &feature[ num_features*lineno + 41 ]
                                       , &feature[ num_features*lineno + 42 ]
                                       , &feature[ num_features*lineno + 43 ]
                                       , &feature[ num_features*lineno + 44 ]
                                       , &feature[ num_features*lineno + 45 ]
                                       , &feature[ num_features*lineno + 46 ]
                                       , &feature[ num_features*lineno + 47 ]
                                       , &feature[ num_features*lineno + 48 ]
                                       , &feature[ num_features*lineno + 49 ]
                                       , &feature[ num_features*lineno + 50 ]
                                       , &feature[ num_features*lineno + 51 ]
                                       , &feature[ num_features*lineno + 52 ]
                                       , &feature[ num_features*lineno + 53 ]
                                       , &feature[ num_features*lineno + 54 ]
                                       , &feature[ num_features*lineno + 55 ]
                                       , &feature[ num_features*lineno + 56 ]
                                       , &feature[ num_features*lineno + 57 ]
                                       , &feature[ num_features*lineno + 58 ]
                                       , &feature[ num_features*lineno + 59 ]
                                       , &feature[ num_features*lineno + 60 ]
                                       , &feature[ num_features*lineno + 61 ]
                                       , &feature[ num_features*lineno + 62 ]
                                       , &feature[ num_features*lineno + 63 ]
                                       , &feature[ num_features*lineno + 64 ]
                                       , &feature[ num_features*lineno + 65 ]
                                       , &feature[ num_features*lineno + 66 ]
                                       , &feature[ num_features*lineno + 67 ]
                                       , &feature[ num_features*lineno + 68 ]
                                       , &feature[ num_features*lineno + 69 ]
                                       , &feature[ num_features*lineno + 70 ]
                                       , &feature[ num_features*lineno + 71 ]
                                       , &feature[ num_features*lineno + 72 ]
                                       , &feature[ num_features*lineno + 73 ]
                                       , &feature[ num_features*lineno + 74 ]
                                       , &feature[ num_features*lineno + 75 ]
                                       , &feature[ num_features*lineno + 76 ]
                                       , &feature[ num_features*lineno + 77 ]
                                       , &feature[ num_features*lineno + 78 ]
                                       , &feature[ num_features*lineno + 79 ]
                                       , &feature[ num_features*lineno + 80 ]
                                       , &feature[ num_features*lineno + 81 ]
                                       , &feature[ num_features*lineno + 82 ]
                                       , &feature[ num_features*lineno + 83 ]
                                       , &feature[ num_features*lineno + 84 ]
                                       , &feature[ num_features*lineno + 85 ]
                                       , &feature[ num_features*lineno + 86 ]
                                       , &feature[ num_features*lineno + 87 ]
                                       , &feature[ num_features*lineno + 88 ]
                                       , &feature[ num_features*lineno + 89 ]
                                       , &feature[ num_features*lineno + 90 ]
                                       , &feature[ num_features*lineno + 91 ]
                                       , &feature[ num_features*lineno + 92 ]
                                       , &feature[ num_features*lineno + 93 ]
                                       , &feature[ num_features*lineno + 94 ]
                                       , &feature[ num_features*lineno + 95 ]
                                       , &feature[ num_features*lineno + 96 ]
                                       , &feature[ num_features*lineno + 97 ]
                                       , &feature[ num_features*lineno + 98 ]
                                       , &feature[ num_features*lineno + 99 ]
                                       , &feature[ num_features*lineno + 100]
                                       , &feature[ num_features*lineno + 101]
                                       , &feature[ num_features*lineno + 102]
                                       , &feature[ num_features*lineno + 103]
                                       , &feature[ num_features*lineno + 104]
                                       , &feature[ num_features*lineno + 105]
                                       , &feature[ num_features*lineno + 106]
                                       , &feature[ num_features*lineno + 107]
                                       , &feature[ num_features*lineno + 108]
                                       , &feature[ num_features*lineno + 109]
                                       , &feature[ num_features*lineno + 110]
                                       , &feature[ num_features*lineno + 111]
                                       , &feature[ num_features*lineno + 112]
                                       , &feature[ num_features*lineno + 113]
                                       , &feature[ num_features*lineno + 114]
                                       , &feature[ num_features*lineno + 115]
                                       , &feature[ num_features*lineno + 116]
                                       , &feature[ num_features*lineno + 117]
                                       , &feature[ num_features*lineno + 118]
                                       , &feature[ num_features*lineno + 119]
                                       , &feature[ num_features*lineno + 120]
                                       , &feature[ num_features*lineno + 121]
                                       , &feature[ num_features*lineno + 122]
                                       , &feature[ num_features*lineno + 123]
                                       , &feature[ num_features*lineno + 124]
                                       , &feature[ num_features*lineno + 125]
                                       , &feature[ num_features*lineno + 126]
                                       , &feature[ num_features*lineno + 127]
                                       , &feature[ num_features*lineno + 128]
                                       , &feature[ num_features*lineno + 129]
                                       , &feature[ num_features*lineno + 130]
                                       , &feature[ num_features*lineno + 131]
                                       , &feature[ num_features*lineno + 132]
                                       , &feature[ num_features*lineno + 133]
                                       , &feature[ num_features*lineno + 134]
                                       , &feature[ num_features*lineno + 135]
                                       , &feature[ num_features*lineno + 136]
                                       , &feature[ num_features*lineno + 137]
                                       , &feature[ num_features*lineno + 138]
                                       , &feature[ num_features*lineno + 139]
                                       , &feature[ num_features*lineno + 140]
                                       , &feature[ num_features*lineno + 141]
                                       , &feature[ num_features*lineno + 142]
                                       , &feature[ num_features*lineno + 143]
                                       , &feature[ num_features*lineno + 144]
                                       , &feature[ num_features*lineno + 145]
                                       , &feature[ num_features*lineno + 146]
                                       , &feature[ num_features*lineno + 147]
                                       , &feature[ num_features*lineno + 148]
                                       , &feature[ num_features*lineno + 149]
                                       , &feature[ num_features*lineno + 150]
                                       , &feature[ num_features*lineno + 151]
                                       , &feature[ num_features*lineno + 152]
                                       , &feature[ num_features*lineno + 153]
                                       , &feature[ num_features*lineno + 154]
                                       , &feature[ num_features*lineno + 155]
                                       , &feature[ num_features*lineno + 156]
                                       , &feature[ num_features*lineno + 157]
                                       , &feature[ num_features*lineno + 158]
                                       , &feature[ num_features*lineno + 159]
                                       , &feature[ num_features*lineno + 160]
                                       , &feature[ num_features*lineno + 161]
                                       , &feature[ num_features*lineno + 162]
                                       , &feature[ num_features*lineno + 163]
                                       , &feature[ num_features*lineno + 164]
                                       , &feature[ num_features*lineno + 165]
                                       , &feature[ num_features*lineno + 166]
                                       , &feature[ num_features*lineno + 167]
                                       , &feature[ num_features*lineno + 168]
                                       , &feature[ num_features*lineno + 169]
                                       , &feature[ num_features*lineno + 170]
                                       , &feature[ num_features*lineno + 171]
                                       , &feature[ num_features*lineno + 172]
                                       , &feature[ num_features*lineno + 173]
                                       , &feature[ num_features*lineno + 174]
                                       , &feature[ num_features*lineno + 175]
                                       , &feature[ num_features*lineno + 176]
                                       , &feature[ num_features*lineno + 177]
                                       , &feature[ num_features*lineno + 178]
                                       , &feature[ num_features*lineno + 179]
                                       , &feature[ num_features*lineno + 180]
                                       , &feature[ num_features*lineno + 181]
                                       , &feature[ num_features*lineno + 182]
                                       , &feature[ num_features*lineno + 183]
                                       , &feature[ num_features*lineno + 184]
                                       , &feature[ num_features*lineno + 185]
                                       , &feature[ num_features*lineno + 186]
                                       , &feature[ num_features*lineno + 187]
                                       , &feature[ num_features*lineno + 188]
                                       , &feature[ num_features*lineno + 189]
                                       , &feature[ num_features*lineno + 190]
                                       , &feature[ num_features*lineno + 191]
                                       , &feature[ num_features*lineno + 192]
                                       , &feature[ num_features*lineno + 193]
                                       , &feature[ num_features*lineno + 194]
                                       , &feature[ num_features*lineno + 195]
                                       , &feature[ num_features*lineno + 196]
                                       , &feature[ num_features*lineno + 197]
                                       , &feature[ num_features*lineno + 198]
                                       , &feature[ num_features*lineno + 199]
                                       , &feature[ num_features*lineno + 200]
                                       , &feature[ num_features*lineno + 201]
                                       , &feature[ num_features*lineno + 202]
                                       , &feature[ num_features*lineno + 203]
                                       , &feature[ num_features*lineno + 204]
                                       , &feature[ num_features*lineno + 205]
                                       , &feature[ num_features*lineno + 206]
                                       , &feature[ num_features*lineno + 207]
                                       , &feature[ num_features*lineno + 208]
                                       , &feature[ num_features*lineno + 209]
                                       , &feature[ num_features*lineno + 210]
                                       , &feature[ num_features*lineno + 211]
                                       , &feature[ num_features*lineno + 212]
                                       , &feature[ num_features*lineno + 213]
                                       , &feature[ num_features*lineno + 214]
                                       , &feature[ num_features*lineno + 215]
                                       , &feature[ num_features*lineno + 216]
                                       , &feature[ num_features*lineno + 217]
                                       , &feature[ num_features*lineno + 218]
                                       , &feature[ num_features*lineno + 219]
                                       , &feature[ num_features*lineno + 220]
                                       , &feature[ num_features*lineno + 221]
                                       , &feature[ num_features*lineno + 222]
                                       , &feature[ num_features*lineno + 223]
                                       , &feature[ num_features*lineno + 224]
                                       , &feature[ num_features*lineno + 225]
                                       , &feature[ num_features*lineno + 226]
                                       , &feature[ num_features*lineno + 227]
                                       , &feature[ num_features*lineno + 228]
                                       , &feature[ num_features*lineno + 229]
                                       , &feature[ num_features*lineno + 230]
                                       , &feature[ num_features*lineno + 231]
                                       , &feature[ num_features*lineno + 232]
                                       , &feature[ num_features*lineno + 233]
                                       , &feature[ num_features*lineno + 234]
                                       , &feature[ num_features*lineno + 235]
                                       , &feature[ num_features*lineno + 236]
                                       , &feature[ num_features*lineno + 237]
                                       , &feature[ num_features*lineno + 238]
                                       , &feature[ num_features*lineno + 239]
                                       , &feature[ num_features*lineno + 240]
                                       , &feature[ num_features*lineno + 241]
                                       , &feature[ num_features*lineno + 242]
                                       , &feature[ num_features*lineno + 243]
                                       , &feature[ num_features*lineno + 244]
                                       , &feature[ num_features*lineno + 245]
                                       , &feature[ num_features*lineno + 246]
                                       , &feature[ num_features*lineno + 247]
                                       , &feature[ num_features*lineno + 248]
                                       , &feature[ num_features*lineno + 249]
                                       , &feature[ num_features*lineno + 250]
                                       , &feature[ num_features*lineno + 251]
                                       , &feature[ num_features*lineno + 252]
                                       , &feature[ num_features*lineno + 253]
                                       , &feature[ num_features*lineno + 254]
                                       , &feature[ num_features*lineno + 255]
                                       , &feature[ num_features*lineno + 256]
                                       , &feature[ num_features*lineno + 257]
                                       , &feature[ num_features*lineno + 258]
                                       , &feature[ num_features*lineno + 259]
                                       , &feature[ num_features*lineno + 260]
                                       , &feature[ num_features*lineno + 261]
                                       , &feature[ num_features*lineno + 262]
                                       , &feature[ num_features*lineno + 263]
                                       , &feature[ num_features*lineno + 264]
                                       , &feature[ num_features*lineno + 265]
                                       , &feature[ num_features*lineno + 266]
                                       , &feature[ num_features*lineno + 267]
                                       , &feature[ num_features*lineno + 268]
                                       , &feature[ num_features*lineno + 269]
                                       , &feature[ num_features*lineno + 270]
                                       , &feature[ num_features*lineno + 271]
                                       , &feature[ num_features*lineno + 272]
                                       , &feature[ num_features*lineno + 273]
                                       , &feature[ num_features*lineno + 274]
                                       , &feature[ num_features*lineno + 275]
                                       , &feature[ num_features*lineno + 276]
                                       , &feature[ num_features*lineno + 277]
                                       , &feature[ num_features*lineno + 278]
                                       , &feature[ num_features*lineno + 279]
                                       , &feature[ num_features*lineno + 280]
                                       , &feature[ num_features*lineno + 281]
                                       , &feature[ num_features*lineno + 282]
                                       , &feature[ num_features*lineno + 283]
                                       , &feature[ num_features*lineno + 284]
                                       , &feature[ num_features*lineno + 285]
                                       , &feature[ num_features*lineno + 286]
                                       , &feature[ num_features*lineno + 287]
                                       , &feature[ num_features*lineno + 288]
                                       , &feature[ num_features*lineno + 289]
                                       , &feature[ num_features*lineno + 290]
                                       , &feature[ num_features*lineno + 291]
                                       , &feature[ num_features*lineno + 292]
                                       , &feature[ num_features*lineno + 293]
                                       , &feature[ num_features*lineno + 294]
                                       , &feature[ num_features*lineno + 295]
                                       , &feature[ num_features*lineno + 296]
                                       , &feature[ num_features*lineno + 297]
                                       , &feature[ num_features*lineno + 298]
                                       , &feature[ num_features*lineno + 299]
                                       , &feature[ num_features*lineno + 300]
                                       , &feature[ num_features*lineno + 301]
                                       , &feature[ num_features*lineno + 302]
                                       , &feature[ num_features*lineno + 303]
                                       , &feature[ num_features*lineno + 304]
                                       , &feature[ num_features*lineno + 305]
                                       , &feature[ num_features*lineno + 306]
                                       , &feature[ num_features*lineno + 307]
                                       , &feature[ num_features*lineno + 308]
                                       , &feature[ num_features*lineno + 309]
                                       , &feature[ num_features*lineno + 310]
                                       , &feature[ num_features*lineno + 311]
                                       , &feature[ num_features*lineno + 312]
                                       , &feature[ num_features*lineno + 313]
                                       , &feature[ num_features*lineno + 314]
                                       , &feature[ num_features*lineno + 315]
                                       , &feature[ num_features*lineno + 316]
                                       , &feature[ num_features*lineno + 317]
                                       , &feature[ num_features*lineno + 318]
                                       , &feature[ num_features*lineno + 319]
                                       , &feature[ num_features*lineno + 320]
                                       , &feature[ num_features*lineno + 321]
                                       , &feature[ num_features*lineno + 322]
                                       , &feature[ num_features*lineno + 323]
                                       , &feature[ num_features*lineno + 324]
                                       , &feature[ num_features*lineno + 325]
                                       , &feature[ num_features*lineno + 326]
                                       , &feature[ num_features*lineno + 327]
                                       , &feature[ num_features*lineno + 328]
                                       , &feature[ num_features*lineno + 329]
                                       , &feature[ num_features*lineno + 330]
                                       , &feature[ num_features*lineno + 331]
                                       , &feature[ num_features*lineno + 332]
                                       , &feature[ num_features*lineno + 333]
                                       , &feature[ num_features*lineno + 334]
                                       , &feature[ num_features*lineno + 335]
                                       , &feature[ num_features*lineno + 336]
                                       , &feature[ num_features*lineno + 337]
                                       , &feature[ num_features*lineno + 338]
                                       , &feature[ num_features*lineno + 339]
                                       , &feature[ num_features*lineno + 340]
                                       , &feature[ num_features*lineno + 341]
                                       , &feature[ num_features*lineno + 342]
                                       , &feature[ num_features*lineno + 343]
                                       , &feature[ num_features*lineno + 344]
                                       , &feature[ num_features*lineno + 345]
                                       , &feature[ num_features*lineno + 346]
                                       , &feature[ num_features*lineno + 347]
                                       , &feature[ num_features*lineno + 348]
                                       , &feature[ num_features*lineno + 349]
                                       , &feature[ num_features*lineno + 350]
                                       , &feature[ num_features*lineno + 351]
                                       , &feature[ num_features*lineno + 352]
                                       , &feature[ num_features*lineno + 353]
                                       , &feature[ num_features*lineno + 354]
                                       , &feature[ num_features*lineno + 355]
                                       , &feature[ num_features*lineno + 356]
                                       , &feature[ num_features*lineno + 357]
                                       , &feature[ num_features*lineno + 358]
                                       , &feature[ num_features*lineno + 359]
                                       , &feature[ num_features*lineno + 360]
                                       , &feature[ num_features*lineno + 361]
                                       , &feature[ num_features*lineno + 362]
                                       , &feature[ num_features*lineno + 363]
                                       , &feature[ num_features*lineno + 364]
                                       , &feature[ num_features*lineno + 365]
                                       , &feature[ num_features*lineno + 366]
                                       , &feature[ num_features*lineno + 367]
                                       , &feature[ num_features*lineno + 368]
                                       , &feature[ num_features*lineno + 369]
                                       , &feature[ num_features*lineno + 370]
                                       , &feature[ num_features*lineno + 371]
                                       , &feature[ num_features*lineno + 372]
                                       , &feature[ num_features*lineno + 373]
                                       , &feature[ num_features*lineno + 374]
                                       , &feature[ num_features*lineno + 375]
                                       , &feature[ num_features*lineno + 376]
                                       , &feature[ num_features*lineno + 377]
                                       , &feature[ num_features*lineno + 378]
                                       , &feature[ num_features*lineno + 379]
                                       , &feature[ num_features*lineno + 380]
                                       , &feature[ num_features*lineno + 381]
                                       , &feature[ num_features*lineno + 382]
                                       , &feature[ num_features*lineno + 383]
                                       , &feature[ num_features*lineno + 384]
                                       , &feature[ num_features*lineno + 385]
                                       , &feature[ num_features*lineno + 386]
                                       , &feature[ num_features*lineno + 387]
                                       , &feature[ num_features*lineno + 388]
                                       , &feature[ num_features*lineno + 389]
                                       , &feature[ num_features*lineno + 390]
                                       , &feature[ num_features*lineno + 391]
                                       , &feature[ num_features*lineno + 392]
                                       , &feature[ num_features*lineno + 393]
                                       , &feature[ num_features*lineno + 394]
                                       , &feature[ num_features*lineno + 395]
                                       , &feature[ num_features*lineno + 396]
                                       , &feature[ num_features*lineno + 397]
                                       , &feature[ num_features*lineno + 398]
                                       , &feature[ num_features*lineno + 399]
                                       , &feature[ num_features*lineno + 400]
                                       , &feature[ num_features*lineno + 401]
                                       , &feature[ num_features*lineno + 402]
                                       , &feature[ num_features*lineno + 403]
                                       , &feature[ num_features*lineno + 404]
                                       , &feature[ num_features*lineno + 405]
                                       , &feature[ num_features*lineno + 406]
                                       , &feature[ num_features*lineno + 407]
                                       , &feature[ num_features*lineno + 408]
                                       , &feature[ num_features*lineno + 409]
                                       , &feature[ num_features*lineno + 410]
                                       , &feature[ num_features*lineno + 411]
                                       , &feature[ num_features*lineno + 412]
                                       , &feature[ num_features*lineno + 413]
                                       , &feature[ num_features*lineno + 414]
                                       , &feature[ num_features*lineno + 415]
                                       , &feature[ num_features*lineno + 416]
                                       , &feature[ num_features*lineno + 417]
                                       , &feature[ num_features*lineno + 418]
                                       , &feature[ num_features*lineno + 419]
                                       , &feature[ num_features*lineno + 420]
                                       , &feature[ num_features*lineno + 421]
                                       , &feature[ num_features*lineno + 422]
                                       , &feature[ num_features*lineno + 423]
                                       , &feature[ num_features*lineno + 424]
                                       , &feature[ num_features*lineno + 425]
                                       , &feature[ num_features*lineno + 426]
                                       , &feature[ num_features*lineno + 427]
                                       , &feature[ num_features*lineno + 428]
                                       , &feature[ num_features*lineno + 429]
                                       , &feature[ num_features*lineno + 430]
                                       , &feature[ num_features*lineno + 431]
                                       , &feature[ num_features*lineno + 432]
                                       , &feature[ num_features*lineno + 433]
                                       , &feature[ num_features*lineno + 434]
                                       , &feature[ num_features*lineno + 435]
                                       , &feature[ num_features*lineno + 436]
                                       , &feature[ num_features*lineno + 437]
                                       , &feature[ num_features*lineno + 438]
                                       , &feature[ num_features*lineno + 439]
                                       , &feature[ num_features*lineno + 440]
                                       , &feature[ num_features*lineno + 441]
                                       , &feature[ num_features*lineno + 442]
                                       , &feature[ num_features*lineno + 443]
                                       , &feature[ num_features*lineno + 444]
                                       , &feature[ num_features*lineno + 445]
                                       , &feature[ num_features*lineno + 446]
                                       , &feature[ num_features*lineno + 447]
                                       , &feature[ num_features*lineno + 448]
                                       , &feature[ num_features*lineno + 449]
                                       , &feature[ num_features*lineno + 450]
                                       , &feature[ num_features*lineno + 451]
                                       , &feature[ num_features*lineno + 452]
                                       , &feature[ num_features*lineno + 453]
                                       , &feature[ num_features*lineno + 454]
                                       , &feature[ num_features*lineno + 455]
                                       , &feature[ num_features*lineno + 456]
                                       , &feature[ num_features*lineno + 457]
                                       , &feature[ num_features*lineno + 458]
                                       , &feature[ num_features*lineno + 459]
                                       , &feature[ num_features*lineno + 460]
                                       , &feature[ num_features*lineno + 461]
                                       , &feature[ num_features*lineno + 462]
                                       , &feature[ num_features*lineno + 463]
                                       , &feature[ num_features*lineno + 464]
                                       , &feature[ num_features*lineno + 465]
                                       , &feature[ num_features*lineno + 466]
                                       , &feature[ num_features*lineno + 467]
                                       , &feature[ num_features*lineno + 468]
                                       , &feature[ num_features*lineno + 469]
                                       , &feature[ num_features*lineno + 470]
                                       , &feature[ num_features*lineno + 471]
                                       , &feature[ num_features*lineno + 472]
                                       , &feature[ num_features*lineno + 473]
                                       , &feature[ num_features*lineno + 474]
                                       , &feature[ num_features*lineno + 475]
                                       , &feature[ num_features*lineno + 476]
                                       , &feature[ num_features*lineno + 477]
                                       , &feature[ num_features*lineno + 478]
                                       , &feature[ num_features*lineno + 479]
                                       , &feature[ num_features*lineno + 480]
                                       , &feature[ num_features*lineno + 481]
                                       , &feature[ num_features*lineno + 482]
                                       , &feature[ num_features*lineno + 483]
                                       , &feature[ num_features*lineno + 484]
                                       , &feature[ num_features*lineno + 485]
                                       , &feature[ num_features*lineno + 486]
                                       , &feature[ num_features*lineno + 487]
                                       , &feature[ num_features*lineno + 488]
                                       , &feature[ num_features*lineno + 489]
                                       , &feature[ num_features*lineno + 490]
                                       , &feature[ num_features*lineno + 491]
                                       , &feature[ num_features*lineno + 492]
                                       , &feature[ num_features*lineno + 493]
                                       , &feature[ num_features*lineno + 494]
                                       , &feature[ num_features*lineno + 495]
                                       , &feature[ num_features*lineno + 496]
                                       , &feature[ num_features*lineno + 497]
                                       , &feature[ num_features*lineno + 498]
                                       , &feature[ num_features*lineno + 499]
                                       , &feature[ num_features*lineno + 500]
                                       , &feature[ num_features*lineno + 501]
                                       , &feature[ num_features*lineno + 502]
                                       , &feature[ num_features*lineno + 503]
                                       , &feature[ num_features*lineno + 504]
                                       , &feature[ num_features*lineno + 505]
                                       , &feature[ num_features*lineno + 506]
                                       , &feature[ num_features*lineno + 507]
                                       , &feature[ num_features*lineno + 508]
                                       , &feature[ num_features*lineno + 509]
                                       , &feature[ num_features*lineno + 510]
                                       , &feature[ num_features*lineno + 511]
                                       , &feature[ num_features*lineno + 512]
                                       , &feature[ num_features*lineno + 513]
                                       , &feature[ num_features*lineno + 514]
                                       , &feature[ num_features*lineno + 515]
                                       , &feature[ num_features*lineno + 516]
                                       , &feature[ num_features*lineno + 517]
                                       , &feature[ num_features*lineno + 518]
                                       , &feature[ num_features*lineno + 519]
                                       , &feature[ num_features*lineno + 520]
                                       , &feature[ num_features*lineno + 521]
                                       , &feature[ num_features*lineno + 522]
                                       , &feature[ num_features*lineno + 523]
                                       , &feature[ num_features*lineno + 524]
                                       , &feature[ num_features*lineno + 525]
                                       , &feature[ num_features*lineno + 526]
                                       , &feature[ num_features*lineno + 527]
                                       , &feature[ num_features*lineno + 528]
                                       , &feature[ num_features*lineno + 529]
                                       , &feature[ num_features*lineno + 530]
                                       , &feature[ num_features*lineno + 531]
                                       , &feature[ num_features*lineno + 532]
                                       , &feature[ num_features*lineno + 533]
                                       , &feature[ num_features*lineno + 534]
                                       , &feature[ num_features*lineno + 535]
                                       , &feature[ num_features*lineno + 536]
                                       , &feature[ num_features*lineno + 537]
                                       , &feature[ num_features*lineno + 538]
                                       , &feature[ num_features*lineno + 539]
                                       , &feature[ num_features*lineno + 540]
                                       , &feature[ num_features*lineno + 541]
                                       , &feature[ num_features*lineno + 542]
                                       , &feature[ num_features*lineno + 543]
                                       , &feature[ num_features*lineno + 544]
                                       , &feature[ num_features*lineno + 545]
                                       , &feature[ num_features*lineno + 546]
                                       , &feature[ num_features*lineno + 547]
                                       , &feature[ num_features*lineno + 548]
                                       , &feature[ num_features*lineno + 549]
                                       , &feature[ num_features*lineno + 550]
                                       , &feature[ num_features*lineno + 551]
                                       , &feature[ num_features*lineno + 552]
                                       , &feature[ num_features*lineno + 553]
                                       , &feature[ num_features*lineno + 554]
                                       , &feature[ num_features*lineno + 555]
                                       , &feature[ num_features*lineno + 556]
                                       , &feature[ num_features*lineno + 557]
                                       , &feature[ num_features*lineno + 558]
                                       , &feature[ num_features*lineno + 559]
                                       , &feature[ num_features*lineno + 560]
                                       , &feature[ num_features*lineno + 561]
                                       , &feature[ num_features*lineno + 562]
                                       , &feature[ num_features*lineno + 563]
                                       , &feature[ num_features*lineno + 564]
                                       , &feature[ num_features*lineno + 565]
                                       , &feature[ num_features*lineno + 566]
                                       , &feature[ num_features*lineno + 567]
                                       , &feature[ num_features*lineno + 568]
                                       , &feature[ num_features*lineno + 569]
                                       , &feature[ num_features*lineno + 570]
                                       , &feature[ num_features*lineno + 571]
                                       , &feature[ num_features*lineno + 572]
                                       , &feature[ num_features*lineno + 573]
                                       , &feature[ num_features*lineno + 574]
                                       , &feature[ num_features*lineno + 575]
                                       , &feature[ num_features*lineno + 576]
                                       , &feature[ num_features*lineno + 577]
                                       , &feature[ num_features*lineno + 578]
                                       , &feature[ num_features*lineno + 579]
                                       , &feature[ num_features*lineno + 580]
                                       , &feature[ num_features*lineno + 581]
                                       , &feature[ num_features*lineno + 582]
                                       , &feature[ num_features*lineno + 583]
                                       , &feature[ num_features*lineno + 584]
                                       , &feature[ num_features*lineno + 585]
                                       , &feature[ num_features*lineno + 586]
                                       , &feature[ num_features*lineno + 587]
                                       , &feature[ num_features*lineno + 588]
                                       , &feature[ num_features*lineno + 589]
                                       , &feature[ num_features*lineno + 590]
                                       , &feature[ num_features*lineno + 591]
                                       , &feature[ num_features*lineno + 592]
                                       , &feature[ num_features*lineno + 593]
                                       , &feature[ num_features*lineno + 594]
                                       , &feature[ num_features*lineno + 595]
                                       , &feature[ num_features*lineno + 596]
                                       , &feature[ num_features*lineno + 597]
                                       , &feature[ num_features*lineno + 598]
                                       , &feature[ num_features*lineno + 599]
                                       , &feature[ num_features*lineno + 600]
                                       , &feature[ num_features*lineno + 601]
                                       , &feature[ num_features*lineno + 602]
                                       , &feature[ num_features*lineno + 603]
                                       , &feature[ num_features*lineno + 604]
                                       , &feature[ num_features*lineno + 605]
                                       , &feature[ num_features*lineno + 606]
                                       , &feature[ num_features*lineno + 607]
                                       , &feature[ num_features*lineno + 608]
                                       , &feature[ num_features*lineno + 609]
                                       , &feature[ num_features*lineno + 610]
                                       , &feature[ num_features*lineno + 611]
                                       , &feature[ num_features*lineno + 612]
                                       , &feature[ num_features*lineno + 613]
                                       , &feature[ num_features*lineno + 614]
                                       , &feature[ num_features*lineno + 615]
                                       , &feature[ num_features*lineno + 616]
                                       , &feature[ num_features*lineno + 617]
                                       , &feature[ num_features*lineno + 618]
                                       , &feature[ num_features*lineno + 619]
                                       , &feature[ num_features*lineno + 620]
                                       , &feature[ num_features*lineno + 621]
                                       , &feature[ num_features*lineno + 622]
                                       , &feature[ num_features*lineno + 623]
                                       , &feature[ num_features*lineno + 624]
                                       , &feature[ num_features*lineno + 625]
                                       , &feature[ num_features*lineno + 626]
                                       , &feature[ num_features*lineno + 627]
                                       , &feature[ num_features*lineno + 628]
                                       , &feature[ num_features*lineno + 629]
                                       , &feature[ num_features*lineno + 630]
                                       , &feature[ num_features*lineno + 631]
                                       , &feature[ num_features*lineno + 632]
                                       , &feature[ num_features*lineno + 633]
                                       , &feature[ num_features*lineno + 634]
                                       , &feature[ num_features*lineno + 635]
                                       , &feature[ num_features*lineno + 636]
                                       , &feature[ num_features*lineno + 637]
                                       , &feature[ num_features*lineno + 638]
                                       , &feature[ num_features*lineno + 639]
                                       , &feature[ num_features*lineno + 640]
                                       , &feature[ num_features*lineno + 641]
                                       , &feature[ num_features*lineno + 642]
                                       , &feature[ num_features*lineno + 643]
                                       , &feature[ num_features*lineno + 644]
                                       , &feature[ num_features*lineno + 645]
                                       , &feature[ num_features*lineno + 646]
                                       , &feature[ num_features*lineno + 647]
                                       , &feature[ num_features*lineno + 648]
                                       , &feature[ num_features*lineno + 649]
                                       , &feature[ num_features*lineno + 650]
                                       , &feature[ num_features*lineno + 651]
                                       , &feature[ num_features*lineno + 652]
                                       , &feature[ num_features*lineno + 653]
                                       , &feature[ num_features*lineno + 654]
                                       , &feature[ num_features*lineno + 655]
                                       , &feature[ num_features*lineno + 656]
                                       , &feature[ num_features*lineno + 657]
                                       , &feature[ num_features*lineno + 658]
                                       , &feature[ num_features*lineno + 659]
                                       , &feature[ num_features*lineno + 660]
                                       , &feature[ num_features*lineno + 661]
                                       , &feature[ num_features*lineno + 662]
                                       , &feature[ num_features*lineno + 663]
                                       , &feature[ num_features*lineno + 664]
                                       , &feature[ num_features*lineno + 665]
                                       , &feature[ num_features*lineno + 666]
                                       , &feature[ num_features*lineno + 667]
                                       , &feature[ num_features*lineno + 668]
                                       , &feature[ num_features*lineno + 669]
                                       , &feature[ num_features*lineno + 670]
                                       , &feature[ num_features*lineno + 671]
                                       , &feature[ num_features*lineno + 672]
                                       , &feature[ num_features*lineno + 673]
                                       , &feature[ num_features*lineno + 674]
                                       , &feature[ num_features*lineno + 675]
                                       , &feature[ num_features*lineno + 676]
                                       , &feature[ num_features*lineno + 677]
                                       , &feature[ num_features*lineno + 678]
                                       , &feature[ num_features*lineno + 679]
                                       , &feature[ num_features*lineno + 680]
                                       , &feature[ num_features*lineno + 681]
                                       , &feature[ num_features*lineno + 682]
                                       , &feature[ num_features*lineno + 683]
                                       , &feature[ num_features*lineno + 684]
                                       , &feature[ num_features*lineno + 685]
                                       , &feature[ num_features*lineno + 686]
                                       , &feature[ num_features*lineno + 687]
                                       , &feature[ num_features*lineno + 688]
                                       , &feature[ num_features*lineno + 689]
                                       , &feature[ num_features*lineno + 690]
                                       , &feature[ num_features*lineno + 691]
                                       , &feature[ num_features*lineno + 692]
                                       , &feature[ num_features*lineno + 693]
                                       , &feature[ num_features*lineno + 694]
                                       , &feature[ num_features*lineno + 695]
                                       , &feature[ num_features*lineno + 696]
                                       , &feature[ num_features*lineno + 697]
                                       , &feature[ num_features*lineno + 698]
                                       , &feature[ num_features*lineno + 699]
                                       , &feature[ num_features*lineno + 700]
                                       , &feature[ num_features*lineno + 701]
                                       , &feature[ num_features*lineno + 702]
                                       , &feature[ num_features*lineno + 703]
                                       , &feature[ num_features*lineno + 704]
                                       , &feature[ num_features*lineno + 705]
                                       , &feature[ num_features*lineno + 706]
                                       , &feature[ num_features*lineno + 707]
                                       , &feature[ num_features*lineno + 708]
                                       , &feature[ num_features*lineno + 709]
                                       , &feature[ num_features*lineno + 710]
                                       , &feature[ num_features*lineno + 711]
                                       , &feature[ num_features*lineno + 712]
                                       , &feature[ num_features*lineno + 713]
                                       , &feature[ num_features*lineno + 714]
                                       , &feature[ num_features*lineno + 715]
                                       , &feature[ num_features*lineno + 716]
                                       , &feature[ num_features*lineno + 717]
                                       , &feature[ num_features*lineno + 718]
                                       , &feature[ num_features*lineno + 719]
                                       , &feature[ num_features*lineno + 720]
                                       , &feature[ num_features*lineno + 721]
                                       , &feature[ num_features*lineno + 722]
                                       , &feature[ num_features*lineno + 723]
                                       , &feature[ num_features*lineno + 724]
                                       , &feature[ num_features*lineno + 725]
                                       , &feature[ num_features*lineno + 726]
                                       , &feature[ num_features*lineno + 727]
                                       , &feature[ num_features*lineno + 728]
                                       , &feature[ num_features*lineno + 729]
                                       , &feature[ num_features*lineno + 730]
                                       , &feature[ num_features*lineno + 731]
                                       , &feature[ num_features*lineno + 732]
                                       , &feature[ num_features*lineno + 733]
                                       , &feature[ num_features*lineno + 734]
                                       , &feature[ num_features*lineno + 735]
                                       , &feature[ num_features*lineno + 736]
                                       , &feature[ num_features*lineno + 737]
                                       , &feature[ num_features*lineno + 738]
                                       , &feature[ num_features*lineno + 739]
                                       , &feature[ num_features*lineno + 740]
                                       , &feature[ num_features*lineno + 741]
                                       , &feature[ num_features*lineno + 742]
                                       , &feature[ num_features*lineno + 743]
                                       , &feature[ num_features*lineno + 744]
                                       , &feature[ num_features*lineno + 745]
                                       , &feature[ num_features*lineno + 746]
                                       , &feature[ num_features*lineno + 747]
                                       , &feature[ num_features*lineno + 748]
                                       , &feature[ num_features*lineno + 749]
                                       , &feature[ num_features*lineno + 750]
                                       , &feature[ num_features*lineno + 751]
                                       , &feature[ num_features*lineno + 752]
                                       , &feature[ num_features*lineno + 753]
                                       , &feature[ num_features*lineno + 754]
                                       , &feature[ num_features*lineno + 755]
                                       , &feature[ num_features*lineno + 756]
                                       , &feature[ num_features*lineno + 757]
                                       , &feature[ num_features*lineno + 758]
                                       , &feature[ num_features*lineno + 759]
                                       , &feature[ num_features*lineno + 760]
                                       , &feature[ num_features*lineno + 761]
                                       , &feature[ num_features*lineno + 762]
                                       , &feature[ num_features*lineno + 763]
                                       , &feature[ num_features*lineno + 764]
                                       , &feature[ num_features*lineno + 765]
                                       , &feature[ num_features*lineno + 766]
                                       , &feature[ num_features*lineno + 767]
                                       , &feature[ num_features*lineno + 768]
                                       , &feature[ num_features*lineno + 769]
                                       , &feature[ num_features*lineno + 770]
                                       , &feature[ num_features*lineno + 771]
                                       , &feature[ num_features*lineno + 772]
                                       , &feature[ num_features*lineno + 773]
                                       , &feature[ num_features*lineno + 774]
                                       , &feature[ num_features*lineno + 775]
                                       , &feature[ num_features*lineno + 776]
                                       , &feature[ num_features*lineno + 777]
                                       , &feature[ num_features*lineno + 778]
                                       , &feature[ num_features*lineno + 779]
                                       , &feature[ num_features*lineno + 780]
                                       , &feature[ num_features*lineno + 781]
                                       , &feature[ num_features*lineno + 782]
                                       , &feature[ num_features*lineno + 783]
                                       ))
      {
        fprintf(stderr, " read malformed file " );
        break;
      }
      lineno++;
    }
    fclose(fp);
  }
  else
  {
    fprintf(stderr," cant open input file %s ", fn);
    perror("open");
  }
  return 0;
}

int write_result_csv(CvMat* result, char* fn)
{
  int num_samples = cvGetDimSize(result,0);
  FILE* fp = fopen(fn,"w");
  if(fp)
  {
    int i;
    for(i=0;i<num_samples;i++)
    {
      fprintf(fp,"%d\n", (int)(result->data.fl[i]));
    }
  }
  else
  {
    fprintf(stderr,"cant not open the file for writing\n");
    return -1;
  }
  return 0;
}


#endif

