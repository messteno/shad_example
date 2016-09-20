#include <criterion/criterion.h>
#include <sstream>
#include <vector>

#include "process.h"

Test(basic_suite, simple) {
    int first_number = 25;
    int second_number = 27;
    int answer = 53;

    int sum = ProcessSum(first_number, second_number);
    cr_expect(sum == answer, "%d != %d", sum, answer);
}

