CC=gcc
AR=ar
OBJECTS_MAIN=main.o
FLAGS= -Wall -g


all:myBanks

myBanks:libmyBank.a
	$(CC) $(FLAGS) -o myBanks $(OBJECTS_MAIN) libmyBank.a

libmyBank.a:myBank.o main.o
	$(AR) -rcs libmyBank.a myBank.o

myBank.o:myBank.c myBank.h
	$(CC) $(FLAGS) -fPIC -c myBank.c

main.o:main.c myBank.h
	$(CC) $(FLAGS) -fPIC -c main.c

.PHONY:clean all

clean:
	rm -f *.o *.a all
