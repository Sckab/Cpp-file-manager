CXX = clang++
SOURCE_FILE = $(wildcard src/*.cpp)
OUTPUT = bin/file-manager
FLAGS = -Wall -std=c++23 $(shell pkg-config --cflags ftxui)
LIBS = $(shell pkg-config --libs ftxui)
MAKE_BIN_DIR = mkdir -p bin

main: $(SOURCE_FILE)
	$(MAKE_BIN_DIR)
	$(CXX) $(FLAGS) $(SOURCE_FILE) -o $(OUTPUT) $(LIBS)

build-run: main
	./$(OUTPUT)

clean:
	rm -f $(OUTPUT)
