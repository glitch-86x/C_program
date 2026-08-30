CC = gcc
CFLAGS = -Wall
TARGETS = c cc

# Default target: build both programs
all: $(TARGETS)

# Rule for 'c' from main.c
c: main.c
	$(CC) $(CFLAGS) -o $@ $^

# Rule for 'cc' from user-input.c
cc: user-input.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGETS)
