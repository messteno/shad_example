#include "input.h"
#include <iostream>

int ReadNumber(std::istream &input_stream) {
    int number = 0;
    input_stream >> number;
    return number;
}

