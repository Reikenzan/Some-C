#include <cstdlib>
#include <iostream>
#include "stack.h"
using namespace std;

int main(int argc, char *argv[])
{
   try
   {
      Stack s;
      s.push(17);
      s.push(3);
      s.push(9);
      s.push(6);
      s.push(4);
//    s.push(14);
      cout << s.pop() << endl;
      cout << s.pop() << endl;
      cout << s.pop() << endl;
      cout << s.pop() << endl;
      cout << s.pop() << endl;
//    cout << s.pop() << endl;
   }
   catch(Overflow_Exception& e) {cout << e.what() << endl;}
   catch(Underflow_Exception& e){cout << e.what() << endl;}
    
    
   system("PAUSE");
   return EXIT_SUCCESS;
}
