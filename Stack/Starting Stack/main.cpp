#include <cstdlib>
#include <iostream>
#include "stack.h"
using namespace std;

int main(int argc, char *argv[])
{
    Stack s;
    s.push(17);
    s.push(3);
    s.push(9);
    s.push(6);
    s.push(4);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
