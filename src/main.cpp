#include <iostream>
#include <string>
#include <unistd.h>
#include "parsing_src/cleaner.cpp"
#include "parsing_src/splitter.cpp"
#include "../header/tokens/token.hpp"
#include "token_src/executable.cpp"
#include "token_src/and.cpp"

using namespace std;

int main() {
    string string_expression;
    vector<string> vector_expression;
    do {
        cout << "$ ";
        getline(cin, string_expression);
        if (string_expression != "") {
            string_expression += ' ';

            // Removing extra spaces and # stuff
            Cleaner* cleaner = new Cleaner(string_expression);
            string_expression = cleaner->clean();

            // Splitting the expression at spaces 
            Splitter* splitter = new Splitter(string_expression);
            vector_expression = splitter->split();

            // Temporary expression handling
            Token* Exec = new Executable(vector_expression);

            // Exit command returns 2
            if (Exec->execute() == 2) {
                break;
            }
        }

    } while (true);
    return 0;
}
