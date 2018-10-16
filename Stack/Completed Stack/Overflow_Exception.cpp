#include "Overflow_Exception.h"
const char* Overflow_Exception::what() const throw()
{
   return "You have exceeded the stack's capacity.";      
}      
