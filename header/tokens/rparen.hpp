#ifndef __RPAREN_HPP__
#define __RPAREN_HPP__

#include "token.hpp"

class Rparen : public Token {
    /*---------- Constructor -----------*/
    Rparen() {
        type = "RPAREN";
    }

    std::string get_type() { return type; }

    std::string show() {
        return " )";
    }

    int execute() { return 10001; }

    private:
        std::string type;
}

#endif //__LPAREN_HPP__
