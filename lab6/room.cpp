//
// Course: CS 2040
// Assignment: Lab 6, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// room.cpp: defines the class methods of Room
//


#include "room.h"
#include "collection.h"
#include <iostream>
#include <string>
using namespace std;


Room::Room() : Collection(){}

void Room::addConnection(Room* room, std::string direction){
    int dir = this->directionToInt(direction);
    connections[dir] = room;
}

int Room::getNeighbor(std::string direction){
    int dir = directionToInt(direction);
    return connections[dir]->getName();
}

bool Room::isValidDirection(std::string direction){
    bool isValidDir = false;
    int dir = directionToInt(direction);
    if(dir >= 0){
        if(connections[dir] != nullptr){
            isValidDir = true;
        }
    }
    return isValidDir;
}

int Room::directionToInt(std::string direction){
    int dir = -1;
    direction = toUpper(direction);
    if(direction == "NORTH"){
        dir = 0;
    } else if(direction == "EAST"){
        dir = 1;
    } else if(direction == "SOUTH"){
        dir = 2;
    } else if(direction == "WEST"){
        dir = 3;
    }
    return dir;
}

std::string Room::intToDirection(int dir){
    string direction;
    if(dir == 0){
        direction = "north";
    } else if(dir == 1){
        direction = "east";
    } else if(dir == 2){
        direction = "south";
    } else{
        direction = "west";
    }
    return direction;
}

std::string Room::toUpper(std::string word){
    for(unsigned int i = 0; i < word.length(); i++){
        word[i] = toupper(word[i]);
    }
    return word;
}

void Room::printPossibleDirections(){
    for(int i = 0; i < MAX_CONNECTIONS; i++){
        if(connections[i] != nullptr){
                cout << intToDirection(i) << endl;   
        }
    }
}

int Room::getName(){
    return name;
}

void Room::setName(int name){
    this->name = name;
}