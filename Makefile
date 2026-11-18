CC = cc
CFLAGS = -Wall -Wextra -std=c11
SOURCES = $(wildcard src/*.c)
OBJECTS = $(SOURCES:.c=.o)

.PHONY: all clean
all: $(OBJECTS)

src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
