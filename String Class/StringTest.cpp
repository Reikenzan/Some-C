#include <iostream>
#include "String.h"
using namespace std;
int main()
{
   String a = "Mary";
   String b = "Anne";
   cout << a << endl;
   cout << b << endl;
   a = a += b;
   cout << a << endl;
   system("pause");
   return EXIT_SUCCESS;
}
