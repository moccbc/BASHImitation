#include "../../header/parsing/splitter.hpp"

std::vector<std::string> Splitter::Split() {
    std::string to_split = expression;
    std::vector<std::string> split_expression;
    std::string substring = "";
    for (int i = 0; i < to_split.size(); i++) {
        if (to_split[i] == ' ') {
            substring.push_back(substring);
            substring = "";
        }
        else {
            substring += to_split[i];
        }
    }
    return split_expression;
}
