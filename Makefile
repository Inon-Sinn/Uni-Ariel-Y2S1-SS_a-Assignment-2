CC=gcc
AR=ar
FLAGS= -Wall -g

all: connections

connections: main.o lib.so
	$(CC) $(FLAGS) -o connections main.o ./lib.so

lib.so: my_mat.o
	$(CC) -shared -o lib.so my_mat.o

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o *.so connections
