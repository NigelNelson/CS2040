//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// game_controller.cpp: defines the class methods of GameController
//


#include "game_controller.h"
#include "maze.h"
#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;

GameController::GameController(){
//    std::ifstream fin;
//    fin.open(getFile());
    fin.open("config.txt");
    maze = new Maze(&fin);
}

void GameController::playGame(){
    bool isGameActive = true;
    while(isGameActive){
        updatePlayer();
        isGameActive = getInput();
    }
}

bool GameController::getInput(){
    cout << "\nWhat would you like to do?" << endl;
    bool isGameActive = true;
    string command;
    if(cin >> command){
        isGameActive = enactInput(command);
    }
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return isGameActive;
}

bool GameController::enactInput(std::string command){
    string upperCaseCmd = toUpper(command);
    bool isGameActive = true;
    if(upperCaseCmd == "MOVE"){
        moveRoom();
    } else if(upperCaseCmd == "EXIT"){
        cout << "\nBetter luck next time!" << endl;
        isGameActive = false;
    } else{
        cout << "\nI don't know how to " << command << "." << endl;
    }
    return isGameActive;
}

std::string GameController::toUpper(std::string word){
    for(unsigned int i = 0; i < word.length(); i++){
        word[i] = toupper(word[i]);
    }
    return word;
}

void GameController::moveRoom(){
    string direction;
    cin >> direction;
    if(!maze->moveRoom(direction)){
        cout << "\nYou can't move in that direction!" << endl; 
    }
}

std::string GameController::getFile(){
    cout << "Welcome to Room Raider\n" << endl;
    bool isValidFile = false;
    string fileName ="";
    while(!isValidFile){
        cout << "\nPlease enter the path to your game configuration file:" << endl;
        cin >> fileName;
        isValidFile = canOpenFile(fileName);
    }
    return fileName;
}

bool GameController::canOpenFile(std::string fileName){
    bool isValidFile = false;
    ifstream ifile;
    ifile.open(fileName);
    if(ifile){
        isValidFile = true;
    } else{
        cout << "\nUnable to load file" << endl;
    }
    return isValidFile;
}

void GameController::updatePlayer(){
    int currentRoom = maze->getCurrentRoom();
    cout << "\nYou are in one of the maze rooms." << flush;
    cout << " A sign on the wall says, \"Welcome to room " << currentRoom << "\"." << endl;
    cout << "The room has doors in the following directions:" << endl;
    maze->findCurrentDoors();
}