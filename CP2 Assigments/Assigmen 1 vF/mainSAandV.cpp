/*
   **********************************************************
   **    Name:       Debora Urrutia                        **
   **    Instructor: Prof. Ramos.                          **  
   **    Course:    Computer Programming 2                 **
   **    Assignment: Sorted Arrays and Vectors             ** 
   **    Date:       9/18/2014                             **
   **********************************************************
Problem Statement ==============================================================
|                                                                              |
|  * Write a program that performs a sorting routine as discussed in class.    |
|  Create an array of 10 integers (e.g., 63, 42, 27, 111, 55, 14,  66, 9,      |
|  75, 87). Pass this array to a separate function that sorts the integers     |
|  and returns a vector containing the sorted integers. Use either the         |
|  SELECTIONSORT algorithmor the INSERTIONSORT                                 |
|                                                                              |
Design -------------------------------------------------------------------------
+    Main: -Hardcoded an array of 10 integers.                                 +
+          -Created a vector that is a copy of what is sent to the function    +
+          sortThis.                                                           +
+                                                                              +
+    Work: -Using selection sort, the array that was sent becomes sorted.      +
+          - A vector is created that contains the elements of the sorted      +
+            array.                                                            +
+          - The sorted vector is returned.                                    +
+                                                                              +
+    Constants:	NONE                                                           +
+    Inputs:	NONE		                                                   +
+    Outputs: -Title indicating the original integers                          +
+             -Title indicating this are already sorted                        +	                                                                      +
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
#include <iostream>
#include <vector>
using namespace std;
vector<int> Sorting(int[], int);
int main()
{
    int Arrays[] = {100 ,  18 , 91 , 25 , 11 , 45 , 54 , 71 , 69 , 37};
	int arraylong = 10;
	cout << "Before Sorting: " << endl;  //Title indicating this are not sorted
	
    for(int i = 0; i < arraylong; i++) 
    cout << Arrays[i] << endl;    // Show the original integers
       
   vector<int> result (Sorting(Arrays, arraylong)); 
    //result is a copy of what sortThis returns
   cout <<endl;
   cout << "After Sorting: " << endl;  //Title indicating this are already sorted

   for(int i = 0; i < arraylong; i++)
    {
        cout <<  result[i]<<endl;   // Show the integers(arrays) sorted
    } 

    system("PAUSE");
    return EXIT_SUCCESS;
}

vector<int> Sorting(int array[], int length) //Uses selection sort algorithm 
{
        int orden, par;
        for(int i = 0; i < length - 1; i++)  //Start nested loop for sorting
        {
          orden = i; 
          for(int j = i; j < length; j++)
          {
            if(array[j] < array[orden])
               orden = j;   //No swapping here. These are just indices
          }
                if(orden != i)
                //The smallest number is not the same as what we started with
                {
                      par = array[i];
                      array[i] = array[orden];
                      array[orden] = par;                        
                }
        }//End sorting of the array    

        vector<int> result;
        for(int i = 0; i < length; i++)     //Starting a loop condition
        {
                result.push_back(array[i]);    //Preparing a set of arrays
        }
            return result;        //Returns a vector
}
