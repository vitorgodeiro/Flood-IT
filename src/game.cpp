#include "../include/game.hpp"

Game::Game(int size, int steps){
	this->boardGame = new Board(size);
	this->populateBoard();
	this->equalNumbersElementsBoard();
    this->steps = steps;
    graphic = new Graphic(size*25 + 15,size*25 + 15 , "Flood-It Game");
}

void Game::play(){
    unsigned int command, plays = 0;
    //boardGame->print();
    graphic->render(boardGame);

    while (graphic->isOpen()){
        
        
        //if (plays++ > this->steps){
          //  break;
        //}

        //repeatCommand:
        //std::cin >> command;

        //if (command < 0 || command > 6) {
          //  std::cout << "Invalid command.\n";
            //goto repeatCommand;
        //}

        //floods(0,0, command, boardGame, new Board(boardGame->getSize()));
       // std::cout << "************************" << std::endl;
        //boardGame->print();
        graphic->render(boardGame);

        if (boardGame->isSolved()){
            std::cout << " Jogo SOLUCIONADO" << std::endl;
            break;
        }
    }
}

void Game::floods(int a, int b, int command, Board *board, Board *boardAux){
	boardAux->set(a, b, 1);

    if (a + 1 < board->getSize() && board->get(a, b) == board->get(a+1, b) && boardAux->get(a+1, b) == 0 ) { floods (a+1, b, command, board, boardAux);}

    if (b + 1 < board->getSize() && board->get(a, b) == board->get(a, b+1) && boardAux->get(a, b+1) == 0 ) { floods (a, b+1, command, board, boardAux);}

    if (0 < a && board->get(a, b) == board->get(a-1, b) && boardAux->get(a-1, b) == 0) {floods (a-1, b, command, board, boardAux);}

    if (0 < b && board->get(a, b) == board->get(a, b-1) && boardAux->get(a, b-1) == 0) {floods (a, b-1, command, board, boardAux);}

    boardGame->set(a, b, command);

    return ;
}

void Game::populateBoard(){
	srand(time(NULL));
	int x;                        		
	for (int a = 0; a < boardGame->getSize(); a++){
		for(int b = 0; b < boardGame->getSize(); b++){
			boardGame->set(a, b, rand() % 6);
			if(b > 0){
                if(boardGame->get(a, b) == boardGame->get(a, b-1)){
                    x = rand() % 16;
                    if(boardGame->get(a, b) == 0){
                        switch(x){
                            case  6 :
                            case 11 : boardGame->set(a, b, 1);break;
                            case  7 :
                            case 12 : boardGame->set(a, b, 2);break;
                            case  8 :
                            case 13 : boardGame->set(a, b, 3);break;
                            case  9 :
                            case 14 : boardGame->set(a, b, 4);break;
                            case 10 :
                            case 15 : boardGame->set(a, b,5);break;
                        }
                    }
                    else if(boardGame->get(a, b) == 1){
                        switch(x) {
                            case  6 :
                            case 11 : boardGame->set(a, b, 0);break;
                            case  7 :
                            case 12 : boardGame->set(a, b, 2);break;
                            case  8 :
                            case 13 : boardGame->set(a, b, 3);break;
                            case  9 :
                            case 14 : boardGame->set(a, b, 4);break;
                            case 10 :
                            case 15 : boardGame->set(a, b, 5);break;
                        }
                    }
                    else if(boardGame->get(a, b) == 2){
                        switch(x){
                            case  6 :
                            case 11 : boardGame->set(a, b, 1);break;
                            case  7 :
                            case 12 : boardGame->set(a, b, 0);break;
                            case  8 :
                            case 13 : boardGame->set(a, b, 3);break;
                            case  9 :
                            case 14 : boardGame->set(a, b, 4);break;
                            case 10 :
                            case 15 : boardGame->set(a, b, 5);break;
                        }
                    }
                    else if(boardGame->get(a, b) == 3){
                        switch(x){
                            case  6 :
                            case 11 : boardGame->set(a, b, 1);break;
                            case  7 :
                            case 12 : boardGame->set(a, b, 2);break;
                            case  8 :
                            case 13 : boardGame->set(a, b, 0);break;
                            case  9 :
                            case 14 : boardGame->set(a, b, 4);break;
                            case 10 :
                            case 15 : boardGame->set(a, b, 5);break;
                        }
                    }
                    else if(boardGame->get(a, b) == 4){
                        switch(x){
                            case  6 :
                            case 11 : boardGame->set(a, b, 1);break;
                            case  7 :
                            case 12 : boardGame->set(a, b, 2);break;
                            case  8 :
                            case 13 : boardGame->set(a, b, 3);break;
                            case  9 :
                            case 14 : boardGame->set(a, b, 0);break;
                            case 10 :
                            case 15 : boardGame->set(a, b, 5);break;
                        }
                    }
                    else if(boardGame->get(a, b) == 5){
                        switch(x){
                            case  6 :
                            case 11 : boardGame->set(a, b, 1);break;
                            case  7 :
                            case 12 : boardGame->set(a, b, 2);break;
                            case  8 :
                            case 13 : boardGame->set(a, b, 3);break;
                            case  9 :
                            case 14 : boardGame->set(a, b, 4);break;
                            case 10 :
                            case 15 : boardGame->set(a, b, 0);break;
                        }
                    }
                }
            }
            if(a > 0){
                if(boardGame->get(a, b) == boardGame->get(a-1, b)){
                    x=rand() % 16;
                    if(boardGame->get(a, b) == 0){
                        switch(x){
                            case  6 :
                            case 11 : boardGame->set(a, b, 1);break;
                            case  7 :
                            case 12 : boardGame->set(a, b, 2);break;
                            case  8 :
                            case 13 : boardGame->set(a, b, 3);break;
                            case  9 :
                            case 14 : boardGame->set(a, b, 4);break;
                            case 10 :
                            case 15 : boardGame->set(a, b, 5);break;
                        }
                    }
                    else if(boardGame->get(a, b) == 1){
                        switch(x){
                            case  6 :
                            case 11 : boardGame->set(a, b, 0);break;
                            case  7 :
                            case 12 : boardGame->set(a, b, 2);break;
                            case  8 :
                            case 13 : boardGame->set(a, b, 3);break;
                            case  9 :
                            case 14 : boardGame->set(a, b, 4);break;
                            case 10 :
                            case 15 : boardGame->set(a, b, 5);break;
                        }
                    }
                    else if(boardGame->get(a, b) == 2){
                       switch(x){
                            case  6 :
                            case 11 : boardGame->set(a, b, 1);break;
                            case  7 :
                            case 12 : boardGame->set(a, b, 0);break;
                            case  8 :
                            case 13 : boardGame->set(a, b, 3);break;
                            case  9 :
                            case 14 : boardGame->set(a, b, 4);break;
                            case 10 :
                            case 15 : boardGame->set(a, b, 5);break;
                        }
                    }
                    else if(boardGame->get(a, b) == 3){
                        switch(x){
                            case  6 :
                            case 11 : boardGame->set(a, b, 1);break;
                            case  7 :
                            case 12 : boardGame->set(a, b, 2);break;
                            case  8 :
                            case 13 : boardGame->set(a, b, 0);break;
                            case  9 :
                            case 14 : boardGame->set(a, b, 4);break;
                            case 10 :
                            case 15 : boardGame->set(a, b, 5);break;
                        }
                    }
                    else if(boardGame->get(a, b) == 4){
                        switch(x){
                            case  6 :
                            case 11 : boardGame->set(a, b, 1);break;
                            case  7 :
                            case 12 : boardGame->set(a, b, 2);break;
                            case  8 :
                            case 13 : boardGame->set(a, b, 3);break;
                            case  9 :
                            case 14 : boardGame->set(a, b, 0);break;
                            case 10 :
                            case 15 : boardGame->set(a, b, 5);break;
                        }
                    }
                    else if(boardGame->get(a, b) == 5){
                        switch(x){
                            case  6 :
                            case 11 : boardGame->set(a, b, 1);break;
                            case  7 :
                            case 12 : boardGame->set(a, b, 2);break;
                            case  8 :
                            case 13 : boardGame->set(a, b, 3);break;
                            case  9 :
                            case 14 : boardGame->set(a, b, 4);break;
                            case 10 :
                            case 15 : boardGame->set(a, b, 0);break;
                        }
                    }
                }
            }
        }
    }
}
        
void Game::equalNumbersElementsBoard(){
    int nColors[6]={0};
    int x;
    int lim = boardGame->getSize()*boardGame->getSize()/6;
    for (int a = 0; a < boardGame->getSize(); a++){
        for(int b = 0;b < boardGame->getSize(); b++){
            nColors[boardGame->get(a, b)]++;
            if(nColors[0] > lim){
                x = rand() % 6;
                switch(x){
                    case 0: boardGame->set(a, b, 5);  nColors[boardGame->get(a, b)]++; nColors[0]--;break;
                    case 1: boardGame->set(a, b, 1);  nColors[boardGame->get(a, b)]++; nColors[0]--;break;
                    case 2: boardGame->set(a, b, 2);  nColors[boardGame->get(a, b)]++; nColors[0]--;break;
                    case 3: boardGame->set(a, b, 3);  nColors[boardGame->get(a, b)]++; nColors[0]--;break;
                    case 4: boardGame->set(a, b, 4);  nColors[boardGame->get(a, b)]++; nColors[0]--;break;
                    case 5: boardGame->set(a, b, 5);  nColors[boardGame->get(a, b)]++; nColors[0]--;break;
                }
            }
            if(nColors[1] > lim){
                x=rand() % 6;
                switch(x){
                    case 0: boardGame->set(a, b, 0);  nColors[boardGame->get(a, b)]++; nColors[1]--;break;
                    case 1: boardGame->set(a, b, 3);  nColors[boardGame->get(a, b)]++; nColors[1]--;break;
                    case 2: boardGame->set(a, b, 2);  nColors[boardGame->get(a, b)]++; nColors[1]--;break;
                    case 3: boardGame->set(a, b, 3);  nColors[boardGame->get(a, b)]++; nColors[1]--;break;
                    case 4: boardGame->set(a, b, 4);  nColors[boardGame->get(a, b)]++; nColors[1]--;break;
                    case 5: boardGame->set(a, b, 5);  nColors[boardGame->get(a, b)]++; nColors[1]--;break;
                }
            }
            if(nColors[2] > lim){
                x=rand() % 6;
                switch(x){
                    case 0: boardGame->set(a, b, 0);  nColors[boardGame->get(a, b)]++; nColors[2]--;break;
                    case 1: boardGame->set(a, b, 1);  nColors[boardGame->get(a, b)]++; nColors[2]--;break;
                    case 2: boardGame->set(a, b, 4);  nColors[boardGame->get(a, b)]++; nColors[2]--;break;
                    case 3: boardGame->set(a, b, 3);  nColors[boardGame->get(a, b)]++; nColors[2]--;break;
                    case 4: boardGame->set(a, b, 4);  nColors[boardGame->get(a, b)]++; nColors[2]--;break;
                    case 5: boardGame->set(a, b, 5);  nColors[boardGame->get(a, b)]++; nColors[2]--;break;
                }
            }
            if(nColors[3] > lim){
                x=rand() % 6;
                switch(x){
                    case 0: boardGame->set(a, b, 0);  nColors[boardGame->get(a, b)]++; nColors[3]--;break;
                    case 1: boardGame->set(a, b, 1);  nColors[boardGame->get(a, b)]++; nColors[3]--;break;
                    case 2: boardGame->set(a, b, 2);  nColors[boardGame->get(a, b)]++; nColors[3]--;break;
                    case 3: boardGame->set(a, b, 2);  nColors[boardGame->get(a, b)]++; nColors[3]--;break;
                    case 4: boardGame->set(a, b, 4);  nColors[boardGame->get(a, b)]++; nColors[3]--;break;
                    case 5: boardGame->set(a, b, 5);  nColors[boardGame->get(a, b)]++; nColors[3]--;break;

                }
            }
            if(nColors[4] > lim){
                x=rand() % 6;
                switch(x){
                    case 0: boardGame->set(a, b, 0);  nColors[boardGame->get(a, b)]++; nColors[4]--;break;
                    case 1: boardGame->set(a, b, 1);  nColors[boardGame->get(a, b)]++; nColors[4]--;break;
                    case 2: boardGame->set(a, b, 2);  nColors[boardGame->get(a, b)]++; nColors[4]--;break;
                    case 3: boardGame->set(a, b, 3);  nColors[boardGame->get(a, b)]++; nColors[4]--;break;
                    case 4: boardGame->set(a, b, 1);  nColors[boardGame->get(a, b)]++; nColors[4]--;break;
                    case 5: boardGame->set(a, b, 5);  nColors[boardGame->get(a, b)]++; nColors[4]--;break;

                }
            }
            if(nColors[5] > lim){
                x=rand() % 6;
                switch(x){
                    case 0: boardGame->set(a, b, 0);  nColors[boardGame->get(a, b)]++; nColors[5]--;break;
                    case 1: boardGame->set(a, b, 1);  nColors[boardGame->get(a, b)]++; nColors[5]--;break;
                    case 2: boardGame->set(a, b, 2);  nColors[boardGame->get(a, b)]++; nColors[5]--;break;
                    case 3: boardGame->set(a, b, 3);  nColors[boardGame->get(a, b)]++; nColors[5]--;break;
                    case 4: boardGame->set(a, b, 4);  nColors[boardGame->get(a, b)]++; nColors[5]--;break;
                    case 5: boardGame->set(a, b, 0);  nColors[boardGame->get(a, b)]++; nColors[5]--;break;
                }
            }
        }
    }
}