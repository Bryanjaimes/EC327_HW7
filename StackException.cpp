#include "StackException.h"
#include <exception>
#include <iostream>
using namespace std;

StackException::StackException()
{
    
}

const char * StackException::what() const throw()
{
    return "There are no items on stack!\n";
}
