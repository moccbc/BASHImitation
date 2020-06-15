#include "../../header/parsing/cleaner.hpp"

std::string Cleaner::remove_whitespace() {
    std::string to_clean = expression;

    // Removing the white space in front of the string
    while (to_clean[0] == ' ') {
        to_clean.erase(0,1);
    }

    // Removing the whitespace everywhere else
    for (int i = 0; i < to_clean.size(); i++) {
        if (to_clean[i] == ' ') {
            while (i != to_clean.size()-1 && to_clean[i+1] == ' '){
                to_clean.erase(i, 1);
            }
        }
    }
    return to_clean;
}

