#ifndef __CLEANER_HPP__
#define __CLEANER_HPP__

#include <string>
/*---------------------------------------------------
 Class: Cleaner
 Input: An expression that the user inputted.
 Output: The same expression with 
         - extra spaces
         - anything after the octothrope
         removed.
---------------------------------------------------*/
class Cleaner {
    public:
        /*---------- Constructors ----------*/
        // Default Constructor
        Cleaner() {}

        // Constructor With Parameter
        Cleaner(std::string user_input) {
            expression = user_input;
        }

        /*---------- Filter Functions ----------*/
        /*
         * This will remove any unnecessary whitespace from the expression.
         * Any extra spaces between quotations will be ignored.
         *
         * Input: The exact same string as what the user inputs.
         * Output: An expression with only a single space between all terms.
         */
        std::string remove_whitespace();

        /*
         * This will remove any octothropes and text following that from the 
         * expression. Will ignore any octothropes in quotes.
         *
         * Input: The expression without any extra whitespace.
         * Output: An expression without any octothropes and its following text.
         */
        std::string remove_octothrope();

        /*---------- Main Function ----------*/
        /*
         * This is the wrapper function for all of the Cleaner class functions.
         * This removes the necessity to call every single filter function in 
         * order to clean the expression.
         *
         * Input: The exact same string as what the user inputs.
         * Output: The cleaned expression passed through all of the filter functions.
         */
        std::string clean();

    private:
        std::string expression;
};

#endif //__CLEANER_HPP__
