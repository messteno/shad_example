#include <iostream>
#include "process.h"
#include "input.h"

int main()
{
    std::ios::sync_with_stdio(false);

    int first_number = ReadNumber();
    int second_number = ReadNumber();

    int sum = ProcessSum(first_number, second_number);

    std::cout << sum << std::endl;

    return 0;
}

