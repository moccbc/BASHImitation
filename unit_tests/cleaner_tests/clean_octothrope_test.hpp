#include "gtest/gtest.h"

TEST(CleanerTest, RemoveHash)
{
    std::string expression = "echo hello #ffhfhfhfh ";
    Cleaner* c = new Cleaner(expression);
    std::string output = c->remove_octothrope();

    EXPECT_EQ("echo hello ", output);
}

TEST(CleanerTest, RemoveHashInQuotes)
{
    std::string expression = "echo \"#ffhfhfhfh\" ";
    Cleaner* c = new Cleaner(expression);
    std::string output = c->remove_octothrope();

    EXPECT_EQ("echo \"#ffhfhfhfh\" ", output);
}

TEST(CleanerTest, RemoveHashInQuotesMore)
{
    std::string expression = "echo \"#ffhfhfhfh\" && echo bye #ffffff ";
    Cleaner* c = new Cleaner(expression);
    std::string output = c->remove_octothrope();

    EXPECT_EQ("echo \"#ffhfhfhfh\" && echo bye ", output);
}

