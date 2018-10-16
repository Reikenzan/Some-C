#include <cstdlib>
#include <iostream>

using namespace std;
double average (int [],int);
void printGrade (int [], int);
int main(int argc, char *argv[])
{
    int scores [10]={84,97,23,64,73,100,89,78,59,18};
    cout << average (scores, 10) << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
double average (int s[], int length)
{
       double total=0;
       for (int i=0; i<length; i++)
          total = total + s [i];
       return total/length;
}
void printGrade (int s[], int length)
{
     swap(
     return EXIT_SUCCESS;
}
