#ifndef __SEMI_HPP__
#define __SEMI_HPP__

#include "token.hpp"

class Semi : public Token {
    public:
        /*---------- Constructors ----------*/
        Semi() { 
            type = "SEMI"; 
            left_child = nullptr;
            right_child = nullptr;
        }

        Semi(Token* left, Token* right) {
            type = "SEMI";
            left_child = left;
            right_child = right;
        }

        /*---------- Class Functions ----------*/
        std::string get_type() { return type; }

        std::string show() {
            return left_child->show() + " ; " + right_child->show();
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

#endif // __OR_HPP__
