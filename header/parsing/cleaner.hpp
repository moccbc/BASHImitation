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

        /*---------- Class Functions ----------*/
        std::string remove_whitespace();

    private:
        std::string expression;
};

#endif //__CLEANER_HPP__
