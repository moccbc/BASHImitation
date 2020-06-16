#include "gtest/gtest.h"
#include "../src/parsing_src/cleaner.cpp"
#include "cleaner_tests/clean_whitespace_test.hpp"
#include "cleaner_tests/clean_octothrope_test.hpp"

int main(int argc, char**argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
