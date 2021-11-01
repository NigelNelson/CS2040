//
// Course: CS 2040
// Assignment: Lab 5, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// robot.h: declares the class Robot
//


#ifndef ROBOT_H_
#define ROBOT_H_

#include <string>

class MapCell;
class Map;

/*
 * Class that represents a Robot which lives on a map at
 * a particular x and y coordinate.
 */
class Robot {
public:
    /*
     * Constructor for the Robot class that takes a pointer to the map
     * that it lives on, and its starting coordinates as arguments.
     */
    Robot(Map *map, int startx, int starty);
    // Displays Robot status in the form of "Robot at 6, 7 (1 gold)" to cout.
    void displayStatus();
    /* 
     * Moves Robot in specified direction (e/w/s/n), returning true
     * if was able to move in that direction.
     */
    bool move(char direction);
    /*
     * Moves Robot in a series of directions, returning true if was
     * able to complete the list of directions.
     */
    bool move(std::string commands);
private:
    /*
     * Makes the Robot search for gold in the next cell
     * if it is able to, otherwise returns false.
     */
    bool raidCell();
    /*
     * Returns true if the Robot is attempting to navigate
     * outside of its Map.
     */
    bool isOutOfBounds();
    /*
     * Edits the next coordinates of the Robot in resonse to
     * a char representing a compass direction.
     */
    void parseDirection(char direction);
    /* 
     * Returns true if the next cell is occupied by an
     * object that the Robot cannot navigate through.
     */
    bool isNextCellOccupied();
    /*
     * Vacates the Robot from the current cell to enter
     * the next desired cell.
     */
    void enterNextCell();
    // Removes gold from the current cell if it is there.
    void checkForGold();
    static constexpr int MAX_WIDTH = 20;
    static constexpr int MAX_HEIGHT = 10;
    Map *mapCells;
    MapCell *current;
    int currentX;
    int currentY;
    int nextX;
    int nextY;
    int numGold;
};
#endif