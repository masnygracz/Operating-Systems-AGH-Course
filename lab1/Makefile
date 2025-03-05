# Definicje zmiennych
CC = gcc
CFLAGS = -Wall -std=c17 -g

# Nazwa pliku wynikowego
TARGET = countdown

# Targety
all: $(TARGET)

$(TARGET): countdown.c
	$(CC) $(CFLAGS) countdown.c -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean
