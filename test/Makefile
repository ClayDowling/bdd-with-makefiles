.PHONY: clean

VPATH=../src
CFLAGS=-I../bdd-for-c -I../src

all: test-conway
	test-conway

clean:
	$(RM) -f *.o
	$(RM) -f *.exe
	$(RM) test-*

test-conway: test-conway.o conway.o
	$(CC) -o $@ $^