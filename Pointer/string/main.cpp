#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  cout << "harry"<< endl;                      // string literal
  cout << "harry" + 1 << endl;
  cout << *("harry" + 2) << endl;
  cout << "harry"[4] << endl;
  cout << "_________________________________________________" << endl;

  char  s[] = {'h','a','r','r','y','\0'};      // character array
  cout << s << endl; 
  cout << s + 1 << endl;
  cout << *(s +2) << endl;
  s[4] = 'i';
  cout << s << endl; 
  cout << "_________________________________________________" << endl;
  
  cout << string("harry") << endl;             // string object
  string a("harry");
  cout << a << endl;
  cout << a[4] << endl;
  a[4] = 'i';
  cout << a << endl;

  getchar();
  return 0;
}
