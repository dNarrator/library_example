
CFLAGS=-I/home/naresh.k/python/library_example

Number.o:
	g++ -c Number.cpp $(CFLAGS) 

libnumber.a: Number.o
	ar cs Number.o

all:libnumber.a

clean:
	rm libnumber.a
