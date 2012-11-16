
PROJECT=digital-recognizer

UNAME=$(shell uname)


ifeq ($(UNAME),Linux)
CFLAGS=`pkg-config --cflags opencv` -D__LINUX__ -Wall
CXXFLAGS=`pkg-config --cflags opencv` -D__LINUX__ -Wall
LDFLAGS=`pkg-config --libs opencv`
else
LDFLAGS=-lstdc++ -lopencv_core -lopencv_ml  -D__DRARWIN__
endif

$(PROJECT):main.o rwcsv.o utils.o
	$(CC) -o $@ $^ $(LDFLAGS)

clean:
	rm -fr *.o $(PROJECT)

rr:
	./$(PROJECT)

