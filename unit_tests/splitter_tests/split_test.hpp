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
    std::string expression = "echo hello && echo world";
    Splitter* s = new Splitter(expression);
    std::vector<std::string> output = s->split();

    std::string output_string = "";

    for (int i = 0; i < output.size(); i++) {
        output_string += output[i];
        output_string += ' ';
    }

    EXPECT_EQ("echo hello ", output_string);
}

