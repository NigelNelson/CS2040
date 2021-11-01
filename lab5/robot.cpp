//
// Course: CS 2040
// Assignment: Lab 5, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// robot.cpp: declares the class methods of Robot
//


#include "robot.h"
#include "cell.h"
#include "map.h"
#include <iostream>
#include <string>
using namespace std;

Robot::Robot(Map *map, int startx, int starty){
    currentX = startx;
    currentY = starty;
    nextX = startx;
    nextY = starty;
    mapCells = map;
    current = map->cellAt(currentX, currentY);
    current->enter();
    raidCell();
}

void Robot::displayStatus(){
    cout << "Robot at " << currentX << ", " << currentY << " (" << numGold << " gold)";
}

bool Robot::move(char direction){
    bool isValidMove = false;
    parseDirection(direction);
    if(!isOutOfBounds()){
        isValidMove = raidCell();
    }
    return isValidMove;
}

void Robot::parseDirection(char direction){
    switch(toupper(direction)){
        case 'E':
            nextX++;
            break;
        case 'W':
            nextX--;
            break;
        case 'S':
            nextY++;
            break;
        case 'N':
            nextY--;
            break;
    }
}

bool Robot::isOutOfBounds(){
    bool isOutOfBounds = false;
    if(0 > nextX || nextX >= MAX_WIDTH){
        isOutOfBounds = true;
    } else if(0 > nextY || nextY >= MAX_HEIGHT){
        isOutOfBounds = true;
    }
    return isOutOfBounds;
}

void Robot::enterNextCell(){
    current->vacate();
    currentX = nextX;
    currentY = nextY;
    current = mapCells->cellAt(currentX, currentY);
    current->enter();
}

void Robot::checkForGold(){
    if(current->hasGold()){
        current->removeGold();
        numGold++;
    }
}

bool Robot::isNextCellOccupied(){
    MapCell *nextCell = mapCells->cellAt(nextX, nextY);
    return nextCell->occupied();
}

bool Robot::raidCell(){
    bool isSuccesfulRaid = true;
    if(!isNextCellOccupied()){
        enterNextCell();
        checkForGold();
    }else{
    isSuccesfulRaid = false;
    }
    return isSuccesfulRaid;
}

bool Robot::move(std::string commands){
    unsigned int index = 0;
    bool isValidMove = true;
    while(index < commands.length() && isValidMove){
        isValidMove = move(commands[(int)index]);
        index++;
    }
    return isValidMove;
}