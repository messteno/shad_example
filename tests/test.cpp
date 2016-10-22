#include <gtest/gtest.h>
#include "process.h"

TEST(TestSum, Success) {
    int first_number = 25;
    int second_number = 27;
    int answer = 52;

    int sum = ProcessSum(first_number, second_number);
    EXPECT_EQ(sum, answer);
}

TEST(TestSum, Error) {
    int first_number = 25;
    int second_number = 27;
    int answer = 53;

    int sum = ProcessSum(first_number, second_number);
    EXPECT_EQ(sum, answer);
}

TEST(TestSum, Segfault) {
    int *p = 0;
    *p = 0;
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
