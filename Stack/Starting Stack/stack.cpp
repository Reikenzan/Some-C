#include "stack.h"
// Constucts a stack to hold up to five integers.    
Stack::Stack()
{
  index = 0;              
  for(int i = 0; i < 5; i++) array[i] = 0;
}

// Pushes an integer into the stack
void Stack::push(int i)
{
   array[index] = i;
   index++;                 
}

// The integer that was pushed out most recently is popped out.
int  Stack::pop()
{
   index--; 
   int i = array[index];
   return i;               
}

