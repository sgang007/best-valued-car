all: make_dirs
	gcc ./src/* -I./include -o ./build/main.out

make_dirs:
	mkdir -p build