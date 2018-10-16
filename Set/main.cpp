#include <cstdlib>
#include <iostream>
#include "Set.h"
using namespace std;

int main()
{
    Set a;
    a.add(7);
    a.add(9);
    a.add(5);
    a.add(7);
    a.add(23);
    a.add(2);
    a.print();
    
    Set b(a);
    b.print();
    
    Set c;
    c.add(123);
    c.add(124);
    c.add(125);
    c.add(126);
    
    b=c;
    b.print();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
