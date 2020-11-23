#ifndef STACKEXCEPTION_H
#define STACKEXCEPTION_H

#include "Stack.h"
#include <exception>
#include <string>

class StackException:public std::exception
{
    public:
        StackException();
        virtual const char * what() const throw();
        //Returns "There are no items on stack!"
};

#endif