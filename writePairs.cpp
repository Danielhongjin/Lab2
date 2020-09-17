//
// Created by FOX2 on 9/16/2020.
//
#include <iostream>
#include <fstream>
#include <iomanip>

#include "writePairs.hpp"
void writePairs(std::string fileName) {
    std::ofstream myFile("Readings.txt");
    myFile.precision(8);
    int length = rand() % 512 + 512;
    for (int index = 0; index <= length; index++) {
        double value = 50000 + static_cast<double>(rand()) / static_cast<double>(RAND_MAX/40000.000);
        std::cout << value << " ";
        myFile << index << " " << value;
        if (length != index) {
            myFile << std::endl;
        }
    }
}