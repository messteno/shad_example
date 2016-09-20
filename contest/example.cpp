#include <vector>
#include <iostream>

int ReadNumber(std::istream &input_stream = std::cin);

int ProcessSum(int first_number, int second_number);

int main()
{
    std::ios::sync_with_stdio(false);

    int first_number = ReadNumber();
    int second_number = ReadNumber();

    int sum = ProcessSum(first_number, second_number);

    std::cout << sum << std::endl;

    return 0;
}

int ReadNumber(std::istream &input_stream) {
    int number = 0;
    input_stream >> number;
    return number;
}

int ProcessSum(int first_number, int second_number) {
    return first_number + second_number;
}


