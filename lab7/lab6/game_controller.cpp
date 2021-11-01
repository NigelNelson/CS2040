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
#include "rogue.h"
#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;

GameController::GameController(){
    std::ifstream fin;
    fin.open(getFile() );
    maze = new Maze(fin);
    fin.close();
    rogue = new Rogue(maze->getRoom(maze->getStartingRoom()));
}

GameController::~GameController(){
    delete rogue;
    delete maze;
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
        exitGame(false);
        isGameActive = false;
    } else if(upperCaseCmd == "TAKE"){
        takeItem();
    } else if(upperCaseCmd == "SHOWBAG"){
        showRogueBag();
    } else if(upperCaseCmd == "UNLOCK"){
        isGameActive = rogueUnlockExit();
    } else if(upperCaseCmd == "TELEPORT"){
        teleport();
    } else if(upperCaseCmd == "DROP"){
        dropItem();
    } else if(upperCaseCmd == "HELP"){
        helpRequest();
    }
    else{
            cout << "\nI don't know how to " << command << "." << endl;
    }
    return isGameActive;
}

void GameController::helpRequest(){
    cout << "\nmove direction: move the rogue in the given direction. Possible " << flush;
    cout << "directions are  north, south, east, and west. A rogue can only move " << flush;
    cout << "in a direction if there is a door out of the room in that direction." << endl;
    cout << "\ntake item: move an item (by name) that is in the room to the rogue’s " << flush;
    cout << "bag. Only movable items can be picked up." << endl;
    cout << "\ndrop item: move an item (by name) that is in the rogue’s bag " << flush;
    cout << "into the room." << endl;
    cout << "\nshowbag: print the contents of the rogue’s bag." << endl;
    cout << "\nteleport room: teleport to the given room. This is only possible if the " << flush;
    cout << "rogue has a teleporter in their bag. Teleporters are single use " << flush;
    cout << "items. and are removed from the rogue’s bag when used." << endl;
    cout << "\nhelp: prints a list of commands and a short description of each." << endl;
    cout << "\nunlock: unlocks the exit to the maze. This is only possible if the rogue" << flush;
    cout << " is in the room containing a maze exit sign and if the rogue has a key " << flush;
    cout << "in their bag." << endl;
    cout <<  "\nexit: exits the game." << endl;
}

void GameController::exitGame(bool isWinningGame){
    if(isWinningGame){
        cout << "\nUsing the " << rogue->getItemName("key") << ", you unlock " << flush;
        cout << rogue->getRoomsItemName("exit") << " and escape the maze." << endl;
        cout << "\nYour bag contains the following treasure:" << endl;
        rogue->printTreasures();
    } else{
    cout << "\nBetter luck next time!" << endl;
    }
}

void GameController::dropItem(){
   string itemName = getStringInput();
   if(rogue->hasItemName(itemName)){
       rogue->dropItem(itemName);
       cout << "\n" << itemName << " has been dropped." << endl;
   } else {
      cout << "\n" << itemName << " isn't an Item in the Rogue's bag!" << endl; 
   }
}

void GameController::teleport(){
    if(rogue->hasItemType("teleporter")){
        string roomNameString = getStringInput();
        if(isValidInt(roomNameString) && maze->hasRoom(stoi(roomNameString))){
           cout << "\nAs if by magic you are transported to room " << flush;
           cout << roomNameString << "." << endl;
           rogue->useTeleporter(maze->getRoom(stoi(roomNameString)));
           } else {
              cout << "\n" << roomNameString << " isn't a room in the maze!" << endl; 
           }
    } else{
        cout << "\nYou can't teleport without a teleporter!" << endl;
    }
}

bool GameController::isValidInt(std::string roomNameString){
    char* tempChar;
    strtol(roomNameString.c_str(), &tempChar, 10);
    return (*tempChar == 0);
}

bool GameController::rogueUnlockExit(){
    bool isGameActive = true;
    if(rogue->isItemTypeInRoom("exit")){
        if(rogue->hasItemType("key")){
            exitGame(true);
            isGameActive = false;
        } else{
            cout << "\nYou don't have a key to unlock the exit!" << endl;
        }
    } else{
        cout << "\nYou don't see an exit to unlock!" << endl;
    }
    return isGameActive;
}

void GameController::showRogueBag(){
    if(rogue->isBagEmpty()){
        cout << "You don't have any items!" << endl;
    } else{
        cout << "\nYour bag contains the following items:" << endl;
        rogue->showBag();
    }
}

void GameController::takeItem(){
    string itemName = getStringInput();
    if(!rogue->isItemInRoom(itemName)){
        cout << "\nYou don't see a " << itemName << " to take!" << endl; 
    } else if(rogue->hasSpaceInBag()){
        if(rogue->pickUpItem(itemName) ){
            cout << "\n" << itemName << " picked up and added to your bag." << endl;  
        } else{
            cout << "\n" << itemName << " cannot be picked up because it is not movable." << endl;
        }
    } else{
        cout << "\nYou can only have 10 items in your bag! Drop one to free up space!" << endl;
    }
}

std::string GameController::toUpper(std::string word){
    for(unsigned int i = 0; i < word.length(); i++){
        word[i] = toupper(word[i]);
    }
    return word;
}

void GameController::moveRoom(){
    string direction = getStringInput();
    if(!rogue->moveRoom(direction)){
        cout << "\nYou can't move in that direction!" << endl; 
    }
}

std::string GameController::getFile(){
    cout << "Welcome to Rogue" << endl;
    bool isValidFile = false;
    string fileName ="";
    while(!isValidFile){
        cout << "\nPlease enter the path to your game configuration file:" << endl;
        cin >> fileName;
        isValidFile = canOpenFile(fileName);
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return fileName + ".txt";
}

bool GameController::canOpenFile(std::string fileName){
    bool isValidFile = false;
    ifstream ifile;
    ifile.open(fileName + ".txt");
    if(ifile){
        isValidFile = true;
    } else{
        cout << "\nUnable to load file." << endl;
    }
    return isValidFile;
}

void GameController::updatePlayer(){
    printRoomWelcomeMessage();
    if(rogue->isRoomEmpty()){
        cout << "\nThe room contains nothing exciting." << endl;
    } else{
        cout << "\nLooking around you see the following items:" << endl;
        rogue->listRoomItems();
    }
    if(rogue->canLeaveRoom()){
        cout << "The room has doors in the following directions:" << endl;
        rogue->findCurrentDoors();
    } else{
        cout << "The room has no doors!" << endl;
    }
}

void GameController::printRoomWelcomeMessage(){
    cout << "\nYou are in one of the maze rooms." << flush;
    cout << " A sign on the wall says, \"Welcome to room " << flush;
    cout << rogue->getCurrentRoom() << "\"." << flush;
}

std::string GameController::getStringInput(){
    string input;
    cin >> input;
    return input;
}