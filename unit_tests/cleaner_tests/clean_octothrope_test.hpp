#include "gtest/gtest.h"

TEST(CleanerTest, RemoveHash)
{
    std::string expression = "echo hello #ffhfhfhfh ";
    Cleaner* c = new Cleaner(expression);
    std::string output = c->remove_octothrope();

    EXPECT_EQ("echo hello ", output);
}

