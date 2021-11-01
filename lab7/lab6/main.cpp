//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// main.cpp: defines main method
//


#include "game_controller.h"

int main(int argc, char **argv){
	GameController *gameController = new GameController();
    gameController->playGame();
    delete gameController;
    return 0;
}