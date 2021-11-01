//
// Course: CS 2040
// Assignment: Lab 5, 2021
// Date: 4/12/21
// Author: Nigel Nelson
//
// map.h: declares the class Map
//


#ifndef MAP_H_
#define MAP_H_
#include <string>

class MapCell;

/* 
 * Class that tracks the area in which the robot moves.
 * Is represented by a 2D array of MapCells.
 */
class Map {
public:
    // Initializes an empty Map
    Map();
    // Reads the input map from cin.
    void load();
    // Writes the stored map using cout.
    void write();
    // Returns a pointer to the MapCell at (x,y) in the Map.
    MapCell* cellAt(int x, int y);
    private:
    // Method that writes the horizontal line portion of the Map.
    void writeHorizontalLine();
    static constexpr int WIDTH = 20;
    static constexpr int HEIGHT = 10;
    MapCell *cells[HEIGHT][WIDTH];
};
#endif