all : dotproduct

dotproduct: main.o dotproduct.o
	gcc -o dotproduct main.o dotproduct.o

main.o: main.c dotproduct.h
	gcc -c main.c

dotproduct.o: dotproduct.c dotproduct.h
	gcc -c dotproduct.c

clean: 
	rm -f *.o dotproduct