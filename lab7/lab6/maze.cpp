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
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Maze::Maze(std::ifstream & fin){
    parseMazeFile(fin);
}

Maze::~Maze(){
    delete [] rooms;
}

void Maze::parseMazeFile(std::ifstream & fin){
    fin >> numRooms;
    rooms = new Room[numRooms];
    setRoomNames();
    fin >> startingRoom;
    loadRoomConnections(fin);
    loadItems(fin);
}

int Maze::getStartingRoom(){
    return startingRoom;
}

void Maze::setRoomNames(){
    for(int i = 0; i < numRooms; i++){
        rooms[i].setName(i);
    }
}


void Maze::loadRoomConnections(std::ifstream & fin){
    char terminatingChar;
    int connectedRoom;
    string direction;
    fin >> terminatingChar;
    while(terminatingChar != '*'){
        fin >> connectedRoom;
        fin >> direction;
        rooms[(int)terminatingChar - UNICODE_CONVERSION].addConnection(
            &rooms[connectedRoom], direction);
        fin >> terminatingChar;
    }
}

void Maze::loadItems(std::ifstream & fin){
    string referenceRoom;
    string itemType;
    string itemName;
    fin >> referenceRoom;
    while(referenceRoom.length() == 1){
        fin >> itemType;
        fin >> itemName;
        rooms[stoi(referenceRoom)].addNewItem(itemType, itemName);
        fin >> referenceRoom;
    }
}

bool Maze::isValidRoomName(int roomName){
    return (roomName >= 0 && roomName < numRooms);
}

bool Maze::hasRoom(int roomName){
    bool hasRoom = false;
    if(isValidRoomName(roomName)){
        hasRoom = ((rooms[roomName].getName()) == roomName);
    }
    return hasRoom;
}

Room* Maze::getRoom(int roomName){
    return &rooms[roomName];
}