link: all linkmake

all: mainmake helpersmake

mainmake: main.c
	gcc -o main.o main.c -Wall -c -g

helpersmake: helpers.c
	gcc -o helpers.o helpers.c -Wall -c -g

linkmake: main.o helpers.o
	gcc helpers.o main.o -Wall -g -o program.o

clean:
	rm *.o
