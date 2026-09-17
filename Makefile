CC = gcc
CFLAGS = -Wall
TARGETS = c 

# Default target: build both programs
all: $(TARGETS)

# Rule for 'c' from main.c
c: main.c
	$(CC) $(CFLAGS) -o $@ $^

# how the make file clean ;
clean:
	rm -rf $(TARGETS)
