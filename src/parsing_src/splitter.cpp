#include "../../header/parsing/splitter.hpp"

std::vector<std::string> Splitter::split() {

    std::string to_split = expression;
    std::vector<std::string> substrings;
    std::string substring = "";
    bool in_quote = false;

    for (int i = 0; i < to_split.size(); i++) {
        if (to_split[i] == '"') {
            in_quote = !in_quote;
        }

        if (!in_quote && to_split[i] == ' ') {
            substrings.push_back(substring);
            substring = "";
        }
        else {
            if (to_split[i] != '"') {
                substring += to_split[i];
            }
        }
    }
    return substrings;
}
