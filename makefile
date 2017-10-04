all: c.o
	gcc -o strings c.o
	./strings

c.o: c.c
	gcc -c c.c

run: all

clean:
	rm -rf *.o strings
