#ifndef OVERFLOWEXCEPTION_H
#define OVERFLOWEXCEPTION_H
#include <string>
#include <stdexcept>
using namespace std;
class Overflow_Exception: public exception
{
   public:
      virtual const char* what() const throw();
};
#endif
