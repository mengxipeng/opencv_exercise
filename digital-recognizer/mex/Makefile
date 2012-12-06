
MATLAB_DIR=/usr/local/MATLAB/R2011a
MATLAB_BIN_DIR=$(MATLAB_DIR)/bin
MEXEXT       ?=$(shell $(MATLAB_DIR)/bin/mexext)
MEX          ?=$(MATLAB_BIN_DIR)/mex

MEXS=read_yaml.$(MEXEXT) knn_classifier.$(MEXEXT) pca_reduce_dimension.$(MEXEXT)

CXXFLAGS=-I /mnt/disk0/ref/mexopencv/include -I ../inc -I ../utils

LDFLAGS=`pkg-config --libs opencv` -L /mnt/disk0/ref/mexopencv/lib -l MxArray

all:$(MEXS)

knn_classifier.$(MEXEXT):knn_classifier.cc  ../algo/knn_classifier_c.cc ../utils/utils.cc
	$(MEX) CC=/opt/gcc-4.3.4/bin/gcc CXXFLAGS="$(CXXFLAGS) $(MEX_CFLAGS)" $^ -v  $(LDFLAGS) -o $@  

pca_reduce_dimension.$(MEXEXT):pca_reduce_dimension.cc ../algo/pca_reduce_dimension_c.cc ../utils/utils.cc
	$(MEX) CC=/opt/gcc-4.3.4/bin/gcc CXXFLAGS="$(CXXFLAGS) $(MEX_CFLAGS)" $^ -v  $(LDFLAGS) -o $@  

read_yaml.$(MEXEXT):read_yaml.cc
	$(MEX) CC=/opt/gcc-4.3.4/bin/gcc CXXFLAGS="$(CXXFLAGS) $(MEX_CFLAGS)" $^ -v  $(LDFLAGS) -o $@  

clean:
	rm -fr *.$(MEXEXT)

