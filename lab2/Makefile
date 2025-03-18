CC = gcc
CFLAGS = -Wall -Wextra -I./src
SRC = src/collatz.c
OBJ = build/collatz.o
LIB_STATIC = lib/libcollatz.a
LIB_SHARED = lib/libcollatz.so
EXEC = bin/collatz_static bin/collatz_shared bin/collatz_dynamic

all: static shared dynamic

static: $(LIB_STATIC) bin/collatz_static

shared: $(LIB_SHARED) bin/collatz_shared

dynamic: $(LIB_SHARED) bin/collatz_dynamic

build:
	mkdir -p build
lib:
	mkdir -p lib
bin:
	mkdir -p bin

$(OBJ): $(SRC) | build
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

$(LIB_STATIC): $(OBJ) | lib
	ar rcs $@ $<

$(LIB_SHARED): $(SRC) | lib
	$(CC) -shared -fPIC $< -o $@

bin/collatz_static: src/main.c $(LIB_STATIC) | bin
	$(CC) $(CFLAGS) $< -o $@ -Llib -lcollatz

bin/collatz_shared: src/main.c $(LIB_SHARED) | bin
	$(CC) $(CFLAGS) $< -o $@ -Llib -lcollatz

bin/collatz_dynamic: src/main.c | bin
	$(CC) $(CFLAGS) -DDYNAMIC_LOADING -o $@ $< -ldl

clean:
	rm -rf build lib bin