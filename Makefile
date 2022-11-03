PROJECT_NAME=apc

SHELL := /bin/sh

help :
	@echo "Please use 'make <target>' where <target> is one of"
	@echo "  all                      build apc"
	@echo "  clean                    clean"

CC=g++
CFLAGS= -g -Wall -Werror

.PHONY: all clean test

all: build

build: apc.cpp
	$(CC) $(CFLAGS) -o src/apc.o -c src/apc.cpp
	$(CC) $(CFLAGS) -o build/apc src/apc.o 
	

clean:
	rm -f build/apc src/*.o

test:

