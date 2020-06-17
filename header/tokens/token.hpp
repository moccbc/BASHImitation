#ifndef __TOKEN_HPP__
#define __TOKEN_HPP__

#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>


/*---------------------------------------------------
 Class: Token 
        This is an abstract base class for all of the 
        tokens.
 Child Clases: - Executable
               - And
               - Or
               - Semi
---------------------------------------------------*/
class Token {
    public:
        /*---------- Constructors ----------*/
        Token() {}

        /*---------- Pure Virtual Fuctions ----------*/
        // Returns the type of the token.
        virtual std::string get_type() = 0;

        // Executes the token.
        virtual int execute() = 0;

        // Shows what the actual expression is.
        virtual std::string show() = 0;

};

#endif //__TOKEN_HPP__
