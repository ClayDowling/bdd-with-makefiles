.PHONY: clean

all: conway

clean:
	$(RM) *.o
	$(RM) *.exe
	$(RM) conway

conway: conway.o main.o
	$(CC) -o $@ $^