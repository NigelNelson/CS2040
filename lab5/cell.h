//
// Course: CS 2040
// Assignment: Lab 5, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// cell.h: declares the class MapCell
//


#ifndef CELL_H_
#define CELL_H_

/* 
 * Tracks the contents of a particular cell on the map.
 * Each MapCell tracks the type of object at that location.
 */
class MapCell {
    int xLocation;
    int yLocation;
    char token;
    bool hasRobot;
public:
    /*
     * Constructor for a map cell that takes x and y coordinates
     * and the character at that location.
     */
    MapCell(int x, int y, char type);
    // Whether or not the cell contains '#' as its token.
    bool hasMountain();
    // Whether or not the cell contains '*' as its token.
    bool hasGold();
    // Removes the '*' token and replaces it with a space.
    void removeGold();
    // Whether not the cell contains a mountain.
    bool occupied();
    // Returns the character to display for this location
    char display();
    // Signifies the robot enters the cell.
    void enter();
    // Signifies the robot leaves the cell.
    void vacate();
};
#endif