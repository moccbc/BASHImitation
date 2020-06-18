#ifndef __AND_HPP__
#define __AND_HPP__

#include "token.hpp"

class And : public Token {
    public:
        /*---------- Constructors ----------*/
        And() { 
            type = "AND"; 
            left_child = nullptr;
            right_child = nullptr;
        }

        And(Token* left, Token* right) {
            type = "AND";
            left_child = left;
            right_child = right;
        }

        /*---------- Class Functions ----------*/
        std::string get_type() { return type; }

        std::string show() {
            return left_child->show() + " && " + right_child->show();
        }

        void set_left(Token* left) {
            left_child = left;
        }

        void set_right(Token* right) {
            right_child = right;
        }

        int execute();


    private:
        std::string type;
        Token* left_child;
        Token* right_child;

};

#endif // __AND_HPP__
