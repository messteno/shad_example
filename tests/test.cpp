#include <criterion/criterion.h>
#include <sstream>
#include <vector>

#include "process.h"

Test(basic_suite, success) {
    int first_number = 25;
    int second_number = 27;
    int answer = 52;

    int sum = ProcessSum(first_number, second_number);
    cr_expect(sum == answer, "%d != %d", sum, answer);
}

Test(basic_suite, error) {
    int first_number = 25;
    int second_number = 27;
    int answer = 53;

    int sum = ProcessSum(first_number, second_number);
    cr_expect(sum == answer, "%d != %d", sum, answer);
}

Test(basic_suite, segfault) {
    int *p = 0;
    *p = 0;
}

