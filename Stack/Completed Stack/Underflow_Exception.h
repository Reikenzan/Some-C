#ifndef UNDERFLOWEXCEPTION_H
#define UNDERFLOWEXCEPTION_H
#include <string>
#include <stdexcept>
using namespace std;
class Underflow_Exception: public exception
{
   public:
      virtual const char* what() const throw();
};
#endif
