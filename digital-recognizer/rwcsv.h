
#ifndef __RW__CSV__
#define __RW__CSV__

#ifdef __cplusplus
extern "C" {
#endif

// read the data opencv
int read_train_set_tomax(char* fn, CvMat* label, CvMat* feature, int header);

int read_test_set_tomax(char* fn, CvMat* feature);

// read the data
int read_train_set(char* fn, int* label, int* feature, int header);

int read_test_set(char* fn, int* feature);
int write_result_csv(CvMat* result, const char* fn);

#ifdef __cplusplus
}
#endif

#endif

