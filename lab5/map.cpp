//
// Course: CS 2040
// Assignment: Lab 5, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// map.cpp: defines the methods of class Map
//


#include "map.h"
#include "cell.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

Map::Map(){}

void Map::load(){
    string line;
    int row = 0;
    getline(cin, line);
    while (getline(cin, line) && row < HEIGHT) {
        for(int column = 0; column < WIDTH; column++){
            cells[row][column] = new MapCell(column, row, line[column+1]);
        }
        row++;
    }
}

void Map::write(){
    cout << "+--------------------+" << endl;
    for(int row = 0; row < HEIGHT; row++){
        cout << "|" << flush; // Left side border
        for(int column = 0; column < WIDTH; column++){
            cout << cells[row][column]->display() << flush;
        }
        cout << "|" << endl; // Right side border
    }
    cout << "+--------------------+" << endl;
}

MapCell* Map::cellAt(int x, int y){
    return cells[y][x];
}