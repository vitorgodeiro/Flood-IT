#include "../include/board.hpp"

Board::Board(int s){
	size = s;
	e = new int [size*size];
    populateBoard();
    equalNumbersElementsBoard();
}

void Board::print(){
	for (int i = 0; i < size*size; i++){
		if ((i % size) == 0 && i != 0) std::cout << std::endl;
		std::cout << e[i] << " ";
	}
	std::cout << std::endl;
}

int Board::get (int i, int j){
	return e[i*size+j];	
}

void Board::populateBoard(){
	srand(time(NULL));
	int x;                        		
	for (int a = 0; a < size; a++){
		for(int b = 0; b < size; b++){
			e[a*size + b] = rand() % 6;
			if(b > 0){
                if(e[a*size + b]==e[a*size + b - 1]){
                    x = rand() % 16;
                    if(e[a*size + b] == 0){
                        switch(x){
                            case  6 :
                            case 11 : e[a*size + b] = 1;break;
                            case  7 :
                            case 12 : e[a*size + b] = 2;break;
                            case  8 :
                            case 13 : e[a*size + b] = 3;break;
                            case  9 :
                            case 14 : e[a*size + b] = 4;break;
                            case 10 :
                            case 15 : e[a*size + b] = 5;break;
                        }
                    }
                    else if(e[a*size + b] == 1){
                        switch(x) {
                            case  6 :
                            case 11 : e[a*size + b] = 0;break;
                            case  7 :
                            case 12 : e[a*size + b] = 2;break;
                            case  8 :
                            case 13 : e[a*size + b] = 3;break;
                            case  9 :
                            case 14 : e[a*size + b] = 4;break;
                            case 10 :
                            case 15 : e[a*size + b] = 5;break;
                        }
                    }
                    else if(e[a*size + b] == 2){
                        switch(x){
                            case  6 :
                            case 11 : e[a*size + b] = 1;break;
                            case  7 :
                            case 12 : e[a*size + b] = 0;break;
                            case  8 :
                            case 13 : e[a*size + b] = 3;break;
                            case  9 :
                            case 14 : e[a*size + b] = 4;break;
                            case 10 :
                            case 15 : e[a*size + b] = 5;break;
                        }
                    }
                    else if(e[a*size + b] == 3){
                        switch(x){
                            case  6 :
                            case 11 : e[a*size + b] = 1;break;
                            case  7 :
                            case 12 : e[a*size + b] = 2;break;
                            case  8 :
                            case 13 : e[a*size + b] = 0;break;
                            case  9 :
                            case 14 : e[a*size + b] = 4;break;
                            case 10 :
                            case 15 : e[a*size + b] = 5;break;
                        }
                    }
                    else if(e[a*size + b] == 4){
                        switch(x){
                            case  6 :
                            case 11 : e[a*size + b] = 1;break;
                            case  7 :
                            case 12 : e[a*size + b] = 2;break;
                            case  8 :
                            case 13 : e[a*size + b] = 3;break;
                            case  9 :
                            case 14 : e[a*size + b] = 0;break;
                            case 10 :
                            case 15 : e[a*size + b] = 5;break;
                        }
                    }
                    else if(e[a*size + b] == 5){
                        switch(x){
                            case  6 :
                            case 11 : e[a*size + b] = 1;break;
                            case  7 :
                            case 12 : e[a*size + b] = 2;break;
                            case  8 :
                            case 13 : e[a*size + b] = 3;break;
                            case  9 :
                            case 14 : e[a*size + b] = 4;break;
                            case 10 :
                            case 15 : e[a*size + b] = 0;break;
                        }
                    }
                }
            }
            if(a > 0){
                if(e[a*size + b] == e[(a-1)*size + b]){
                    x=rand() % 16;
                    if(e[a*size + b] == 0){
                        switch(x){
                            case  6 :
                            case 11 : e[a*size + b] = 1;break;
                            case  7 :
                            case 12 : e[a*size + b] = 2;break;
                            case  8 :
                            case 13 : e[a*size + b] = 3;break;
                            case  9 :
                            case 14 : e[a*size + b] = 4;break;
                            case 10 :
                            case 15 : e[a*size + b] = 5;break;
                        }
                    }
                    else if(e[a*size + b] == 1){
                        switch(x){
                            case  6 :
                            case 11 : e[a*size + b] = 0;break;
                            case  7 :
                            case 12 : e[a*size + b] = 2;break;
                            case  8 :
                            case 13 : e[a*size + b] = 3;break;
                            case  9 :
                            case 14 : e[a*size + b] = 4;break;
                            case 10 :
                            case 15 : e[a*size + b] = 5;break;
                        }
                    }
                    else if(e[a*size + b] == 2){
                       switch(x){
                            case  6 :
                            case 11 : e[a*size + b] = 1;break;
                            case  7 :
                            case 12 : e[a*size + b] = 0;break;
                            case  8 :
                            case 13 : e[a*size + b] = 3;break;
                            case  9 :
                            case 14 : e[a*size + b] = 4;break;
                            case 10 :
                            case 15 : e[a*size + b] = 5;break;
                        }
                    }
                    else if(e[a*size + b] == 3){
                        switch(x){
                            case  6 :
                            case 11 : e[a*size + b] = 1;break;
                            case  7 :
                            case 12 : e[a*size + b] = 2;break;
                            case  8 :
                            case 13 : e[a*size + b] = 0;break;
                            case  9 :
                            case 14 : e[a*size + b] = 4;break;
                            case 10 :
                            case 15 : e[a*size + b] = 5;break;
                        }
                    }
                    else if(e[a*size + b] == 4){
                        switch(x){
                            case  6 :
                            case 11 : e[a*size + b] = 1;break;
                            case  7 :
                            case 12 : e[a*size + b] = 2;break;
                            case  8 :
                            case 13 : e[a*size + b] = 3;break;
                            case  9 :
                            case 14 : e[a*size + b] = 0;break;
                            case 10 :
                            case 15 : e[a*size + b] = 5;break;
                        }
                    }
                    else if(e[a*size + b] == 5){
                        switch(x){
                            case  6 :
                            case 11 : e[a*size + b] = 1;break;
                            case  7 :
                            case 12 : e[a*size + b] = 2;break;
                            case  8 :
                            case 13 : e[a*size + b] = 3;break;
                            case  9 :
                            case 14 : e[a*size + b] = 4;break;
                            case 10 :
                            case 15 : e[a*size + b] = 0;break;
                        }
                    }
                }
            }
        }
    }
}
        
void Board::equalNumbersElementsBoard(){
    int nColors[6]={0};
    int x;
    int lim = size*size/6;
    for (int a = 0; a < size; a++){
        for(int b = 0;b < size; b++){
            nColors[e[a*size + b]]++;
            if(nColors[0] > lim){
                x = rand() % 6;
                switch(x){
                    case 0: e[a*size + b] = 5;  nColors[e[a*size + b]]++; nColors[0]--;break;
                    case 1: e[a*size + b] = 1;  nColors[e[a*size + b]]++; nColors[0]--;break;
                    case 2: e[a*size + b] = 2;  nColors[e[a*size + b]]++; nColors[0]--;break;
                    case 3: e[a*size + b] = 3;  nColors[e[a*size + b]]++; nColors[0]--;break;
                    case 4: e[a*size + b] = 4;  nColors[e[a*size + b]]++; nColors[0]--;break;
                    case 5: e[a*size + b] = 5;  nColors[e[a*size + b]]++; nColors[0]--;break;
                }
            }
            if(nColors[1] > lim){
                x=rand() % 6;
                switch(x){
                    case 0: e[a*size + b] = 0;  nColors[e[a*size + b]]++; nColors[1]--;break;
                    case 1: e[a*size + b] = 3;  nColors[e[a*size + b]]++; nColors[1]--;break;
                    case 2: e[a*size + b] = 2;  nColors[e[a*size + b]]++; nColors[1]--;break;
                    case 3: e[a*size + b] = 3;  nColors[e[a*size + b]]++; nColors[1]--;break;
                    case 4: e[a*size + b] = 4;  nColors[e[a*size + b]]++; nColors[1]--;break;
                    case 5: e[a*size + b] = 5;  nColors[e[a*size + b]]++; nColors[1]--;break;
                }
            }
            if(nColors[2] > lim){
                x=rand() % 6;
                switch(x){
                    case 0: e[a*size + b] = 0;  nColors[e[a*size + b]]++; nColors[2]--;break;
                    case 1: e[a*size + b] = 1;  nColors[e[a*size + b]]++; nColors[2]--;break;
                    case 2: e[a*size + b] = 4;  nColors[e[a*size + b]]++; nColors[2]--;break;
                    case 3: e[a*size + b] = 3;  nColors[e[a*size + b]]++; nColors[2]--;break;
                    case 4: e[a*size + b] = 4;  nColors[e[a*size + b]]++; nColors[2]--;break;
                    case 5: e[a*size + b] = 5;  nColors[e[a*size + b]]++; nColors[2]--;break;
                }
            }
            if(nColors[3] > lim){
                x=rand() % 6;
                switch(x){
                    case 0: e[a*size + b] = 0;  nColors[e[a*size + b]]++; nColors[3]--;break;
                    case 1: e[a*size + b] = 1;  nColors[e[a*size + b]]++; nColors[3]--;break;
                    case 2: e[a*size + b] = 2;  nColors[e[a*size + b]]++; nColors[3]--;break;
                    case 3: e[a*size + b] = 2;  nColors[e[a*size + b]]++; nColors[3]--;break;
                    case 4: e[a*size + b] = 4;  nColors[e[a*size + b]]++; nColors[3]--;break;
                    case 5: e[a*size + b] = 5;  nColors[e[a*size + b]]++; nColors[3]--;break;

                }
            }
            if(nColors[4] > lim){
                x=rand() % 6;
                switch(x){
                    case 0: e[a*size + b] = 0;  nColors[e[a*size + b]]++; nColors[4]--;break;
                    case 1: e[a*size + b] = 1;  nColors[e[a*size + b]]++; nColors[4]--;break;
                    case 2: e[a*size + b] = 2;  nColors[e[a*size + b]]++; nColors[4]--;break;
                    case 3: e[a*size + b] = 3;  nColors[e[a*size + b]]++; nColors[4]--;break;
                    case 4: e[a*size + b] = 1;  nColors[e[a*size + b]]++; nColors[4]--;break;
                    case 5: e[a*size + b] = 5;  nColors[e[a*size + b]]++; nColors[4]--;break;

                }
            }
            if(nColors[5] > lim){
                x=rand() % 6;
                switch(x){
                    case 0: e[a*size + b] = 0;  nColors[e[a*size + b]]++; nColors[5]--;break;
                    case 1: e[a*size + b] = 1;  nColors[e[a*size + b]]++; nColors[5]--;break;
                    case 2: e[a*size + b] =2;  nColors[e[a*size + b]]++; nColors[5]--;break;
                    case 3: e[a*size + b] = 3;  nColors[e[a*size + b]]++; nColors[5]--;break;
                    case 4: e[a*size + b] = 4;  nColors[e[a*size + b]]++; nColors[5]--;break;
                    case 5: e[a*size + b] = 0;  nColors[e[a*size + b]]++; nColors[5]--;break;
                }
            }
        }
    }
}