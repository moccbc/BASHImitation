#ifndef __OR_HPP__
#define __OR_HPP__

#include "token.hpp"

class Or : public Token {
    public:
        /*---------- Constructors ----------*/
        Or() { 
            type = "Or"; 
            left_child = nullptr;
            right_child = nullptr;
        }

        Or(Token* left, Token* right) {
            type = "OR";
            left_child = left;
            right_child = right;
        }

        /*---------- Class Functions ----------*/
        std::string get_type() { return type; }

        std::string show() {
            return left_child->show() + " || " + right_child->show();
        }

        int execute();


    private:
        std::string type;
        Token* left_child;
        Token* right_child;

};

#endif // __OR_HPP__
