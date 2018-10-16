#include <cstdlib>
#include <iostream>

using namespace std;

void sort(int x[], int start, int end)
{
    if(start == end) return;
    
    int temp = x[start];
    int swap = x[start];
    int saved_index = start;
    
    for(int i = start; i < end; i++) //find the smallest value
       if(x[i] < temp)
       {
         temp = x[i];           
         saved_index = i;
       }
    x[start] = temp;
    x[saved_index] = swap;
    sort(x, start + 1, end);   
     
}     
int main()
{
    int x[5] ={7, 3, 2, 9, 5};
    sort(x, 0, 5);

    for(int i = 0; i < 5; i++)
       cout << x[i] << endl;
                    
    system("PAUSE");
    return EXIT_SUCCESS;
}









