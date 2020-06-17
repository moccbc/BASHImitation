#ifndef __EXECUTABLE_HPP__
#define __EXECUTABLE_HPP__

#include "token.hpp"

class Executable : public Token {
    public:
        /*---------- Constructors ----------*/
        Executable() { 
            type = "EXECUTABLE"; 
            std::vector<std::string> null_vec(0);
            expression = null_vec; 
        }

        Executable(std::vector<std::string> input) {
            type = "EXECUTABLE";
            expression = input;
        }

        /*---------- Class Functions ----------*/
        std::string get_type() { return type; }

        std::string show() {
            std::string value;
            for (int i = 0; i < expression.size(); i++) {
                value += expression[i];
                value += " ";
            }
            return value;
        }

        int execute();


    private:
        std::string type;
        std::vector<std::string> expression; 
};

#endif // __EXECUTABLE_HPP__
