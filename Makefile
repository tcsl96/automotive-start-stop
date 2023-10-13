all: start_stop.exe

start_stop.exe: main.o
	gcc -o ./src/start_stop.exe ./obj/*.o

main.o: ./src/main.c
	gcc -Wall -Wextra -g -std=c17 -c ./src/main.c ./src/modules/*.c
	move *.o ./obj

clean:
	del ./obj/*.o

build clean: all
	del ./obj/*.o