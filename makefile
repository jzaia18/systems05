all: c.o
	gcc -o strings c.o

c.o: c.c
	gcc -c c.c

run: all
	./strings

clean:
	rm -rf *.o strings
