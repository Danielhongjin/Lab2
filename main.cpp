#include <iostream>
#include "writePairs.hpp"
#include "readPairs.hpp"
int main() {
    std::cout << RAND_MAX << std::endl;
    writePairs("Readings.txt");
    readPairs("Readings.txt");
    return 0;
}
