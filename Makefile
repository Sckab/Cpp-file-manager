CXX = clang++
MAIN_FILE = src/main.cpp
OUTPUT = bin/file-manager
FLAGS = -Wall -std=c++23

main: $(MAIN_FILE)
	mkdir -p bin

	$(CXX) $(FLAGS) $(MAIN_FILE) -o $(OUTPUT)

clean:
	rm -f $(OUTPUT)
