//
// Course: CS 2040
// Assignment: Lab 5, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// cell.cpp: defines the class methods of MapCell
//


#include "cell.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

MapCell::MapCell(int x, int y, char type){
    xLocation = x;
    yLocation = y;
    token = type;
    hasRobot = false;
}

bool MapCell::hasMountain(){
    return token == '#';
}

bool MapCell::hasGold(){
    return token == '*';
}

void MapCell::removeGold(){
    token = ' ';
}

bool MapCell::occupied(){
    bool isOccupied = false;
    if(hasMountain()){
        isOccupied = true;
    }
    return isOccupied;
}

char MapCell::display(){
    char currentChar = token;
    if(hasRobot){
        currentChar = 'R';
    }
    return currentChar;
}

void MapCell::enter(){
    hasRobot = true;
}

void MapCell::vacate(){
    hasRobot = false;
}