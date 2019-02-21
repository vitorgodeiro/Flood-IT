all: exec.exe

exec.exe:
	g++ src/*.cpp -o exe -std=c++11 -O3 -lsfml-graphics -lsfml-window -lsfml-system