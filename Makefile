CXX = clang++
SOURCE_FILE = $(wildcard src/*.cpp)
OUTPUT = bin/file-manager
FLAGS = -Wall -std=c++23
MAKE_BIN_DIR = mkdir -p bin

main: $(MAIN_FILE)
	$(MAKE_BIN_DIR)

	$(CXX) $(FLAGS) $(SOURCE_FILE) -o $(OUTPUT)

build-run: main
	./$(OUTPUT)

clean:
	rm -f $(OUTPUT)
