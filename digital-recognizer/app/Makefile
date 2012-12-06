
PROJECTS=test digital_recognizer data_pca_reduce_dimension split_data_mat cross_validation

all:$(PROJECTS)

CXXFLAGS=-I ../inc -I ../utils -g -ggdb

LDFLAGS=-lstdc++ `pkg-config --libs opencv`

HELP_OBJS= ../utils/utils.o                   \
        ../algo/knn_classifier_c.o         \
        ../algo/pca_reduce_dimension_c.o 

TEST_OBJS= main.o                          \
        ../utils/utils.o                   \
        ../algo/knn_classifier_c.o         \
        ../algo/pca_reduce_dimension_c.o 


test:test.o $(HELP_OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

digital_recognizer:digital_recognizer.o $(HELP_OBJS) 
	$(CC) -o $@ $^ $(LDFLAGS)

data_pca_reduce_dimension:data_pca_reduce_dimension.o $(HELP_OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

split_data_mat:split_data_mat.o $(HELP_OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

cross_validation:cross_validation.o $(HELP_OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

clean:
	rm -fr $(HELP_OBJS) *.o $(PROJECTS)

rr:
	./digital_recognizer


pipeline:preprocess feature-extract feature-select cross_validation visualize-result commit-result


