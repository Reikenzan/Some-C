/*
****************************************************************************
Name: Brian Lemus

Computer Programming 2

Assignment: Vectors and Arrays
****************************************************************************

Problem Statement **********************************************************

    -Take an array of 10 ints. We want to sort this array and have it 
    returned as a vector.

Design***********************************************************************
     Main: -Hardcoded an array of 10 integers.
           -Created a vector that is a copy of what is sent to the function 
           sortThis.
           -Outputted both the array and the vector.
          
     sortThis: -Using selection sort, the array that was sent becomes sorted.
              - A vector is created that contains the elements of the sorted 
               array.
              - The sorted vector is returned.
*/
#include <cstdlib>

#include <iostream>

#include <vector>

using namespace std;

 vector<int> sortThis(int[], int);

int main(int argc, char *argv[])
{
    int test[] = {63, 42, 27, 111, 55, 14,  66, 9, 75, 87};
    
    int testSize = 10;

    vector<int> result (sortThis(test, testSize)); 
    //result is a copy of what sortThis returns

        for(int i = 0; i < testSize; i++)
    {
            std::cout << test[i]<<endl; 
     //Array is also sorted because arrays are always passed by reference
            std::cout << result[i]<<endl;
            std::cout << "\n";
    }
    system("PAUSE");

    return EXIT_SUCCESS;

}


vector<int> sortThis(int array[], int length) //Uses selection sort algorithm 
{
            int posMin, temp;

        for(int i = 0; i < length - 1; i++)
        {
                posMin = i; 
                for(int j = i; j < length; j++)
                {
                        if(array[j] < array[posMin])
                             posMin = j; 
                             //No swapping here. These are just indices
                }

                if(posMin != i)
                //The smallest number is not the same as what we started with
                {
                          temp = array[i];
                          array[i] = array[posMin];
                          array[posMin] = temp;                        
                }
        }//End sorting of array    

            vector<int> result;

        for(int i = 0; i < length; i++)
        {
                result.push_back(array[i]);
        }
            return result;
}
