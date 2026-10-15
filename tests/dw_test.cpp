#include <gtest/gtest.h>
#include "dw.h"

TEST(PrintMultiplicationTable, PrintsTwoByThreeTable) {
    testing::internal::CaptureStdout();
    print_multiplication_table(2, 3);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "1 2 3 \n2 4 6 \n");
}

TEST(PrintMultiplicationTable, PrintsSingleRow) {
    testing::internal::CaptureStdout();
    print_multiplication_table(1, 4);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "1 2 3 4 \n");
}
