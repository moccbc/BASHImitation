#include "../../header/parsing/splitter.hpp"

std::vector<std::string> Splitter::split() {
    std::string to_split = expression;
    std::vector<std::string> substrings;
    std::string substring = "";
    for (int i = 0; i < to_split.size(); i++) {
        if (to_split[i] == ' ') {
            substrings.push_back(substring);
            substring = "";
        }
        else {
            substring += to_split[i];
        }
    }
    return substrings;
}
