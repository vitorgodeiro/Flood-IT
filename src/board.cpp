#include "../include/board.hpp"

Board::Board(int size){
	this->size = size;
	this->e = new int [size*size];
}

void Board::print(){
	for (int i = 0; i < size*size; i++){
		if ((i % size) == 0 && i != 0) std::cout << std::endl;
		std::cout << e[i] << " ";
	}
	std::cout << std::endl;
}

void Board::zeros(){
	for (int i = 0; i < size*size; i++){
		e[i] = 0;
	}
}

int Board::get (int i, int j){
	return e[i*size+j];	
}

void Board::set (int i, int j, int v){
    e[i*size+j] = v;
}

bool Board::isSolved(){
    for (unsigned int i = 1, e0=e[0], size2 = size*size; i < size2; ++i)
        if (e0 != e[i]) return false;
    return true;
}

