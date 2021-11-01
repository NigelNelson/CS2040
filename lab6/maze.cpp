//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// maze.cpp: defines the class methods of Maze
//


#include "maze.h"
#include "room.h"
#include "rogue.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Maze::Maze(std::ifstream *fin){
    parseMazeFile(fin);
}

void Maze::parseMazeFile(std::ifstream *fin){
    *fin >> numRooms;
    rooms = new Room[numRooms];
    setRoomNames();
    rogue = loadRogue(fin);
    loadRoomConnections(fin);
    loadItems(fin);
    loadRogue(fin);
}

Rogue* Maze::loadRogue(std::ifstream *fin){
    *fin >> currentRoom;
    return new Rogue(currentRoom);
}

bool Maze::moveRoom(std::string direction){
    bool isValidMove = false;
    if(rooms[currentRoom].isValidDirection(direction)){
        currentRoom = rooms[currentRoom].getNeighbor(direction);
        rogue->setRoom(currentRoom);
        isValidMove = true;
    }
    return isValidMove;
}

void Maze::setRoomNames(){
    for(int i = 0; i < numRooms; i++){
        rooms[i].setName(i);
    }
}


void Maze::loadRoomConnections(std::ifstream *fin){
    char terminatingChar;
    int connectedRoom;
    string direction;
    *fin >> terminatingChar;
    while(terminatingChar != '*'){
        *fin >> connectedRoom;
        *fin >> direction;
        rooms[(int)terminatingChar - UNICODE_CONVERSION].addConnection(
            &rooms[connectedRoom], direction);
        *fin >> terminatingChar;
    }
}

void Maze::loadItems(std::ifstream *fin){
//    string line;
//    getline(*fin, line);
//    while(line != "END DUNGEON"){
//        getline(*fin, line);
//    }
    
    string referenceRoom;
    string itemType;
    string itemName;
    *fin >> referenceRoom;
    while(referenceRoom.length() != 1){
        *fin >> itemType;
        *fin >> itemName;
        rooms[stoi(referenceRoom)].addItem(itemType, itemName);
        *fin >> referenceRoom;
    }
}

int Maze::getCurrentRoom(){
    return currentRoom;
}

void Maze::findCurrentDoors(){
    rooms[currentRoom].printPossibleDirections();
}

Rogue* Maze::getRogue(){
    return rogue;
}

bool Maze::unlock(){
    bool canUnlock = false;
    if(rooms[currentRoom].hasItem("exit"){
        
    }
    return canUnlock;
}