#include "gtest/gtest.h"

TEST(SplitterTest, SplitSingle)
{
    std::string expression = "echo hello ";
    Splitter* s = new Splitter(expression);
    std::vector<std::string> output = s->split();

    EXPECT_EQ("echo", output[0]);
    EXPECT_EQ("hello", output[1]);
}

TEST(SplitterTest, SplitMultiple)
{
    std::string expression = "echo hello && echo world ";
    Splitter* s = new Splitter(expression);
    std::vector<std::string> output = s->split();

    EXPECT_EQ("echo", output[0]);
    EXPECT_EQ("hello", output[1]);
    EXPECT_EQ("&&", output[2]);
    EXPECT_EQ("echo", output[3]);
    EXPECT_EQ("world", output[4]);
}

TEST(SplitterTest, SplitOverLoad)
{
    std::string expression = "( echo hello && echo world ) ; ( echo good || echo bye ) && ls ";
    Splitter* s = new Splitter(expression);
    std::vector<std::string> output = s->split();

    EXPECT_EQ("(", output[0]);
    EXPECT_EQ("echo", output[1]);
    EXPECT_EQ("hello", output[2]);
    EXPECT_EQ("&&", output[3]);
    EXPECT_EQ("echo", output[4]);
    EXPECT_EQ("world", output[5]);
    EXPECT_EQ(")", output[6]);
    EXPECT_EQ(";", output[7]);
    EXPECT_EQ("(", output[8]);
    EXPECT_EQ("echo", output[9]);
    EXPECT_EQ("good", output[10]);
    EXPECT_EQ("||", output[11]);
    EXPECT_EQ("echo", output[12]);
    EXPECT_EQ("bye", output[13]);
    EXPECT_EQ(")", output[14]);
    EXPECT_EQ("&&", output[15]);
    EXPECT_EQ("ls", output[16]);
}

