CC = gcc
CFLAGS = -Wall -Wextra -O2
LDFLAGS = -lm
SRC = cursed-syntax.c
BIN = cursed-syntax

.PHONY: all run clean

all: $(BIN)

$(BIN): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(BIN) $(LDFLAGS)

run: $(BIN)
	./$(BIN)

clean:
	rm -f $(BIN)