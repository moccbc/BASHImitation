#include "../../header/tokens/executable.hpp"

int Executable::execute() {
    pid_t c_pid = fork();
    int status;
    int exit_status;

    // Child Process
    if (c_pid == 0) {
        char* argc[expression.size()+1];

        // Converting the string expression to char
        // so that execvp can handle it
        for (int i = 0; i < expression.size(); i++) {
            argc[i] = const_cast<char*>(expression[i].c_str());
        }
        // The end must be a nullptr to signify the 
        // end of the expression.
        argc[expression.size()] = nullptr;

        if (strcmp(argc[0], "exit") == 0 || strcmp(argc[0], "Exit") == 0) {
            // exit status 2 is when exit is called
            exit(2);
        }

        if (execvp(argc[0], argc) == -1) {
            std::cout << "ERROR: Expression not executable" << std::endl;
        }

        // exit status 3 is an error
        exit(3);
    }
    else {
        wait(&status);
        exit_status = WEXITSTATUS(status);
    }
    return exit_status;
}
