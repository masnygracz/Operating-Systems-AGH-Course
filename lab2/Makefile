# Kompilator i opcje
CC = gcc
CFLAGS = -Wall -std=c17 -g -fPIC
AR = ar
ARFLAGS = rcs

# Nazwy plików
LIB_NAME = libcollatz
SRC = library.c
OBJ = library.o
STATIC_LIB = $(LIB_NAME).a
SHARED_LIB = $(LIB_NAME).so

all: $(STATIC_LIB) $(SHARED_LIB)

# Kompilacja biblioteki statycznej (.a)
$(STATIC_LIB): $(OBJ)
	$(AR) $(ARFLAGS) $(STATIC_LIB) $(OBJ)

# Kompilacja biblioteki współdzielonej (.so)
$(SHARED_LIB): $(OBJ)
	$(CC) -shared -o $(SHARED_LIB) $(OBJ)

# Kompilacja pliku object (.o)
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) -o $(OBJ)

# Kompilacja programu testowego z biblioteką statyczną
test_static: main.c $(STATIC_LIB)
	$(CC) $(CFLAGS) main.c -o test_static $(STATIC_LIB)

# Kompilacja programu testowego z biblioteką współdzieloną
test_shared: main.c $(SHARED_LIB)
	$(CC) $(CFLAGS) main.c -o test_shared -L. -lcollatz

test_dynamic: main.c $(SHARED_LIB)
	$(CC) $(CFLAGS) -DDYNAMIC_LOAD main.c -o test_dynamic -ldl -L. -lcollatz


# Sprzątanie
clean:
	rm -f *.o $(STATIC_LIB) $(SHARED_LIB) test_static test_shared test_dynamic

.PHONY: $(SHARED_LIB)