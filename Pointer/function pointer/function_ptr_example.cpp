#include <iostream>
int addTwoNumbers(int x, int y);
int f1(int f(int, int));
int main()
{
    //declare a pointer to a function
    int (*f_ptr)(int, int) = &addTwoNumbers;

    std::cout << f_ptr(2, 3) << std::endl;
    system("pause");

    return 0;
}
int addTwoNumbers(int x, int y)
{
    return x + y;
}
