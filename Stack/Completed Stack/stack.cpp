#include "stack.h"
// Constucts a stack to hold up to five integers.    
Stack::Stack()
{
  index = 0;              
  for(int i = 0; i < 5; i++) array[i] = 0;
}

// Pushes an integer into the stack
void Stack::push(int i) throw(Overflow_Exception)
{
   if(index > 4) throw Overflow_Exception();
   array[index] = i;
   index++;                 
}

// The integer that was pushed out most recently is popped out.
int  Stack::pop() throw(Underflow_Exception)
{
   index--;
   
   if(index < 0) throw Underflow_Exception();
    
   int i = array[index];
   return i;               
}

