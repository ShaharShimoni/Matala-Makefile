
all:  mymaths mymathd mains maind	
mains: power.o basicMath.o libmyMath.a main.o
	gcc -Wall -g -o mains power.o basicMath.o libmyMath.a main.o
maind: power.o basicMath.o main.o
	gcc  -Wall -g -o maind main.o power.o basicMath.o ./libmyMath.so
mymathd: power.o basicMath.o
	gcc -shared -o libmyMath.so power.o basicMath.o
mymaths: power.o basicMath.o 
	ar -rcs libmyMath.a power.o basicMath.o 
basicMath.o: basicMath.c 
	gcc  -Wall -g -fPIC -c basicMath.c 
power.o: power.c 
	gcc  -Wall -g -fPIC -c power.c 
main.o: main.c   
	gcc  -Wall -g -c -fPIC main.c  
main.c:power.c basicMath.c
	gcc  -Wall -g -c -fPIC power.c basicMath.c
.PHONY: clean all

clean:
	rm -f mains maind *.o *.a*.so
