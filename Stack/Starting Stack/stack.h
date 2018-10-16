#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
class Stack
{
   public:
      // Constucts a stack to hold up to five integers.    
      Stack();
      // Pushes an integer into the stack
      void push(int);
      // The integer that was pushed out most recently is popped out.
      int  pop();
   private:
      int array[5];
      int index;                       
};
#endif
