#ifndef STACK_H
#define STACK_H
#include <iostream>
#include "Overflow_Exception.h"
#include "Underflow_Exception.h"
using namespace std;
class Stack
{
   public:
      // Constucts a stack to hold up to five integers.    
      Stack();
      // Pushes an integer into the stack
      void push(int) throw(Overflow_Exception);
      // The integer that was pushed out most recently is popped out.
      int  pop() throw(Underflow_Exception);
   private:
      int array[5];
      int index;                       
};
#endif
