#include "gtest/gtest.h"
// Class files
#include "../src/parsing_src/cleaner.cpp"
#include "../src/parsing_src/splitter.cpp"

// Testing files
#include "cleaner_tests/clean_whitespace_test.hpp"
#include "cleaner_tests/clean_octothrope_test.hpp"
#include "splitter_tests/split_test.hpp"

int main(int argc, char**argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
