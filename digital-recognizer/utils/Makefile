
CXXSRCS=$(shell ls *.cc)
CXXOBJS=${CXXSRCS:.cc=.o};

CXXFLAGS=-I../inc -I../utils
LDFLAGS=-lstdc++ `pkg-config --libs opencv`

PROJECT=test_utils

all:$(PROJECT)

$(PROJECT):$(CXXOBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

rr:
	./$(PROJECT)

clean:
	rm -fr *.o $(PROJECT)
