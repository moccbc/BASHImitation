#include "../../header/parsing/cleaner.hpp"

std::string Cleaner::remove_whitespace() {
    std::string to_clean = expression;

    // Removing the white space in front of the string
    while (to_clean[0] == ' ') {
        to_clean.erase(0,1);
    }

    bool in_quote = false;

    // Removing the whitespace everywhere else
    for (int i = 0; i < to_clean.size(); i++) {
        if (to_clean[i] == '"') {
            in_quote = !in_quote;
        }

        if (!in_quote && to_clean[i] == ' ') {
            while (i != to_clean.size()-1 && to_clean[i+1] == ' '){
                to_clean.erase(i, 1);
            }
        }
    }
    return to_clean;
}

std::string Cleaner::remove_octothrope() {
    std::string to_clean = expression;
    bool in_quote = false;

    for (int i = 0; i < to_clean.size(); i++) {
        if (to_clean[i] == '"') {
            in_quote = !in_quote;
        }

        if (!in_quote && to_clean[i] == '#') {
            to_clean.erase(to_clean.begin() + i, to_clean.end());
        }
    }

    return to_clean;
}

std::string Cleaner::clean() {
    expression = remove_whitespace();
    expression = remove_octothrope();
    return expression;
}
