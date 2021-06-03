// Copyright (c) Year Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: June 3, 2021
// This program asks the user to input a level and converts it to its middle
// percentage using a function that returns the percentage

#include <iostream>
#include <string>

int CalcMark(std::string level) {
    // converts the level inputted to the middle percentage and returns it
    // if the input is invalid, the function returns -1
    int percentage;
    if (level == "4+") {
        percentage = 98;
    } else if (level == "4") {
        percentage = 91;
    } else if (level == "4-") {
        percentage = 83;
    } else if (level == "3+") {
        percentage = 78;
    } else if (level == "3") {
        percentage = 75;
    } else if (level == "3-") {
        percentage = 71;
    } else if (level == "2+") {
        percentage = 68;
    } else if (level == "2") {
        percentage = 65;
    } else if (level == "2-") {
        percentage = 61;
    } else if (level == "1+") {
        percentage = 58;
    } else if (level == "1") {
        percentage = 55;
    } else if (level == "1-") {
        percentage = 51;
    } else if (level == "R") {
        percentage = 25;
    } else {
      percentage = -1;
    }
    return percentage;
}


int main() {
    while (true) {
        // declare local variables
        int levelInt;
        std::string levelString;

        // ask the user to input a level
        std::cout << "Enter the level you want to convert to percentage: ";
        std::cin >> levelString;
        // convert to the middle percentage using the calc_mark() function
        levelInt = CalcMark(levelString);

        if (levelInt == -1) {
            // check if the input is invalid and display an error message
            std::cout << "\n";
            std::cout << levelString << " is not a valid level.\n";
            std::cout << "\n";
        } else {
            // display the level converted to the middle percentage
            std::cout << "\n";
            std::cout << levelString << " has a middle percentage of ";
            std::cout << levelInt << "%\n";
            break;
        }
    }
}
