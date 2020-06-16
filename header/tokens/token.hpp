#ifndef __TOKEN_HPP__
#define __TOKEN_HPP__

#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
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
        virtual std::string get_type();
        virtual int execute();

    protected:
        std::string type;
        int status;
        int exit_status;

};

#endif //__TOKEN_HPP__
