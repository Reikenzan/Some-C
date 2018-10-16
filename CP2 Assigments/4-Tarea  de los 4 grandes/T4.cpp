/*
   **********************************************************
   **    Name:        Debora Urrutia                       **
   **    Instructor:  Prof. Ramos.                         **  
   **    Course:      Computer Programming 2               **
   **    Assignment:  Set                                  ** 
   **    Date:        11/18/2014                           **
   **********************************************************
Problem Statement ==============================================================
|  * Define a class called Set that stores integers in a dynamically allocated |
|    array ofintegers. In a set, the order of elements does not matter,        |
|    and every element can occur at most once. Supply the add, contains, and   |
|    get_size member functions and the big four memory management functions:   |
|    1.Copy constructor                                                        |
|    2.Assignment operator                                                     |
|    3.Destructor                                                              |
|    4.Defualt                                                                 |
Design -------------------------------------------------------------------------
+  Main: -Define a class called Set that stores integers Supply the add,       +
+  contains, and get_size member functions and the big four.                   +
+                                                                              +
+  Work: -Definethe add, contains, and get_size member functions.              +
+        -Use the big four memory management functions.                        +
+                                                                              +
+  Outputs: - The integers' list.                                              +
+                                                                              +
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
#include <iostream>
#include "Set.h"
using namespace std;

int main() 
{
    Set a;
    Set b(a);
      a.add(5);
      a.add(10);
      a.add(25);
      a.print();
b = a;
    
     b.add(10);
     b.add(20);
     b.add(30);
     b.print();

/*set copy (b);
b= copy;
	copy.print();
    a = a += b;
   cout << a << endl;	
	*/
	system ("pause");
	return 0;
}
