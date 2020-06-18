#ifndef __LPAREN_HPP__
#define __LPAREN_HPP__

#include "token.hpp"

class Lparen : public Token {
    /*---------- Constructor -----------*/
    Lparen() {
        type = "LPAREN";
    }

    std::string get_type() { return type; }

    std::string show() {
        return "( ";
    }

    int execute() { return 10000; }

    private:
        std::string type;
}

#endif //__LPAREN_HPP__
