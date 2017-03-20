########
# Tron #
########
.PHONY = all clean

CC=g++
CFLAGS=-W -std=c++11
LDFLAGS=-Llib -lsfml-graphics -lsfml-window -lsfml-system
TARGET=tron

all: build/main.o build/map.o
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $(TARGET)

build/main.o: src/main.cpp
	$(CC) $(CFLAGS) $(LDFLAGS) -c $< -o $@

build/map.o: src/Map.cpp include/Map.h
	$(CC) $(CFLAGS) $(LDFLAGS) -c $< -o $@

run: all
	./$(TARGET)

clean:
	@rm build/*
	@rm $(TARGET)
