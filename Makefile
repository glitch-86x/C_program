CC = gcc
CFLAGS = -Wall

c: main.c
	$(CC) $(CFLAGS) -o c main.c

clean:
	rm -f c   
