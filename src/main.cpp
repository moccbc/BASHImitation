#include <iostream>
#include <string>
#include <unistd.h>
#include "parsing_src/cleaner.cpp"

using namespace std;

int main() {
    string command;
    do {
        cout << "$ ";
        getline(cin, command);
        if (command != "") {
            command += ' ';
            Cleaner* c = new Cleaner(command);
            command = c->clean();
            cout << command << endl;

        }

    } while (true);
    return 0;
}
