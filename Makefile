C=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_BASIC=basicMath.o
OBJECTS_POWER=power.o
FLAGS= -Wall -g

all:  mymaths mymathd mains maind	
mains: libmyMath.a $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o mains $(OBJECTS_POWER) $(OBJECTS_BASIC) libmyMath.a $(OBJECTS_MAIN)
maind:  $(OBJECTS_MAIN)
	$(CC)  $(FLAGS) -o maind $(OBJECTS_MAIN) $(OBJECTS_POWER) $(OBJECTS_BASIC) ./libmyMath.so
mymathd:libmyMath.so

libmyMath.so:$(OBJECTS_POWER) $(OBJECTS_BASIC)
	$(CC) -shared -o libmyMath.so $(OBJECTS_POWER) basicMath.o
mymaths: libmyMath.a

libmyMath.a:$(OBJECTS_POWER) $(OBJECTS_BASIC) 
	$(AR) -rcs libmyMath.a $(OBJECTS_POWER) $(OBJECTS_BASIC) 
basicMath.o: basicMath.c 
	$(CC)  $(FLAGS) -fPIC -c basicMath.c 
power.o: power.c 
	$(CC)  $(FLAGS) -fPIC -c power.c 
main.o: main.c   
	$(CC)  $(FLAGS) -c -fPIC main.c  

.PHONY: clean all

clean:
	rm -f mains maind *.o *.a *.so
