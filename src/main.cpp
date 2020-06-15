#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

int main() {
    string command;
    do {
        cout << "$ ";
        getline(cin, command);
        if (command != "") {
            command += ' ';

        }

    } while (true);
    return 0;
}
