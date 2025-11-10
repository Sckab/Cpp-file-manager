CXX = clang++
SOURCE_FILE = $(wildcard src/*.cpp)
SOURCE_TUI_FILE = $(wildcard src/tui/*.cpp)
OUTPUT = bin/file-manager
FLAGS = -Wall -std=c++23 $(shell pkg-config --cflags ftxui)
LIBS = $(shell pkg-config --libs ftxui)
MAKE_BIN_DIR = mkdir -p bin

build: $(SOURCE_FILE)
	$(MAKE_BIN_DIR)
	$(CXX) $(FLAGS) $(SOURCE_FILE) $(SOURCE_TUI_FILE) -o $(OUTPUT) $(LIBS)

run: $(OUTPUT)
	./$(OUTPUT)

build-run: build run

clean:
	rm -f $(OUTPUT)

all: clean build-run
