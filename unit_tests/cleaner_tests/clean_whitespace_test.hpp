#include "gtest/gtest.h"
//#include "../../src/parsing_src/cleaner.cpp"

TEST(CleanerTest, RemoveWhitespaceInFront)
{
    std::string expression = "     echo hello ";
    Cleaner* c = new Cleaner(expression);
    std::string output = c->remove_whitespace();

    EXPECT_EQ("echo hello ", output);
}

TEST(CleanerTest, RemoveWhitespaceInEnd)
{
    std::string expression = "echo hello             ";
    Cleaner* c = new Cleaner(expression);
    std::string output = c->remove_whitespace();

    EXPECT_EQ("echo hello ", output);
}

TEST(CleanerTest, RemoveWhitespaceBothEnds)
{
    std::string expression = "          echo hello        ";
    Cleaner* c = new Cleaner(expression);
    std::string output = c->remove_whitespace();

    EXPECT_EQ("echo hello ", output);
}

TEST(CleanerTest, RemoveWhitespaceInMiddle)
{
    std::string expression = "echo              hello ";
    Cleaner* c = new Cleaner(expression);
    std::string output = c->remove_whitespace();

    EXPECT_EQ("echo hello ", output);
}

TEST(CleanerTest, RemovingWhiteSpaceOverload)
{
    std::string expression = "           echo  hello  && ls &&  (echo world    || echo   hello)      ";
    Cleaner* c = new Cleaner(expression);
    std::string output = c->remove_whitespace();

    EXPECT_EQ("echo hello && ls && (echo world || echo hello) ", output);
}

TEST(CleanerTest, RemovingWhitespaceQuotes)
{
    std::string expression = "echo \"      hello\" ";
    Cleaner* c = new Cleaner(expression);
    std::string output = c->remove_whitespace();

    EXPECT_EQ("echo \"      hello\" ", output);
}

TEST(CleanerTest, RemovingWhitespaceQuotesWithConnector)
{
    std::string expression = "echo \"      hello\"     &&    ls || echo \"bye \" ";
    Cleaner* c = new Cleaner(expression);
    std::string output = c->remove_whitespace();

    EXPECT_EQ("echo \"      hello\" && ls || echo \"bye \" ", output);
}

