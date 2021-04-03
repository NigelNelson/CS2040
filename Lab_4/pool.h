//
// Course: CS 2040
// Assignment: Lab 4, 2021
// Date: 3/31/21
// Author: Nigel Nelson
//
// pool.h: declares the class Pool
//
//

#ifndef _pool_h
#define _pool_h

#include <iostream>
#include <string>
using namespace std;

// Class that contains a list of names, that is able to compare with other names and Pools
class Pool {
public:
  // Constructor that initializes the Pool class with num_names = 0
  Pool();
  // Method that adds a name to pool of people to match
  void add(string name);
  // Method that reads names until reach end of file, END, or MAXNAMES items
  void readNames();
  // Method to check if a Pool's list of names is empty
  bool empty();
  // OverLoaded method used to compares a Pool with another Pool, and print all names that match
  void printMatches(Pool *pool);
  // Overloaded method that takes a string and prints the the names that it has that matches the provided name
  void printMatches(string name);
private:
  static constexpr int MAXNAMES = 20;
  string names[MAXNAMES];
  int numNames;
  // Method that checks if two names are a match
  bool isMatchingPair(string name1, string name2);
  // Method to check if the Pool is full
  bool full();
  /*
   * Method that prints two given names that are not identical, and 
   * contain a common character, besides "_"
   */
  void printSingleMatch(string name1, string name2);
};
#endif