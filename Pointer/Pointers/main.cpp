/*
   Using pointers to dynammically allocate an array.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

void passArray(int array[], int length);

int main(int argc, char *argv[])
{
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    passArray(data, 10);

    int how_many;
    cout << "How many integers do you want to store?" << endl;
    cin >> how_many;
    int* array_ptr = new int[how_many];
    for(int i = 0; i < how_many; i++) *(array_ptr + i) = i+1; 
    passArray(array_ptr, how_many);
    delete [] array_ptr;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


void passArray(int array[], int length)
{
//   for (int i=0; i < length-1; i++) array[i] = array[i] * 2;

  for (int* ptr = array; ptr < array+length; ptr++)
     cout << *ptr << endl; 

}

