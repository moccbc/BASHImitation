#ifndef __SPLITTER_HPP__
#define __SPLITTER_HPP__

#include <string>
#include <vector>

/*---------------------------------------------------
 Class: Splitter
 Input: An expression that has any extra spaces
        removed.
 Output: A vector that holds the substrings. This 
         splits the expression at the spaces.
         Anything contained within quotes is 
         considered as a single substring.
---------------------------------------------------*/

class Splitter {
    public:
        /*---------- Constructors ----------*/
        // Default Constructor
        Splitter() {}

        // Constructor With Parameter
        Splitter(std::string user_input) {
            expression = user_input;
        }

        /*---------- Class Function ----------*/
        /* This function splits the expression by the spaces. Anything contained 
         * within quotes counts as a single substring.
         *
         * Input: An expression without any extra whitespace.
         * Output: An expression without any octothropes and its following text.
         */
        std::vector<std::string> split();


    private:
        std::string expression;

}

#ifndef // __SPLITTER_HPP__
