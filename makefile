all: runner.o skillz.o
	gcc -o out runner.o skillz.o

runner.o: runner.c skillz.c
	gcc -c runner.c skillz.c

run:
	./out

clean:
	rm *.o
