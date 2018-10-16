/*
   **********************************************************
   **    Name:        Debora Urrutia                       **
   **    Instructor:  Prof. Ramos.                         **  
   **    Course:      Computer Programming 2               **
   **    Assignment:  Shopping Cart (Vector)               ** 
   **    Date:        10/09/2014                           **
   **********************************************************
Problem Statement ==============================================================
|  * Create a new data member for the Customer class that contains grocery     |
|    items purchased by the customer. Prompt the user to add an item to their  |
|    shopping cart by selecting from the list (using the item code). Ask them  |
|    to supply a quantity. When the customer is finished shopping, print out   |
|    a simple receipt.                                                         |
Design -------------------------------------------------------------------------
+  Main: -Create a vector call shopingcart that stores all items chose         +
+         by the customer .                                                    +
+        -Display a recipt containg all the items purchased and total payment. +
+  Work: -Create a vector that contains grocery items purchased.               +
+        -Add existing files(customer,GroceryItems)that will help the vector.  +
+        -Prompt the user to add an item to their shopping cart by selecting   +
+         from the list and the quantity of the selected item.                 +
+        -Stores items that will be printed out in a receipt.                  +
+        -Receipt must contain: Items chosen, Amount Due and Credit Available. +
+  Inputs:  -Items' code.                                                      +
+           -Items' quantity.		                                           +
+  Outputs: -If countinue shopping.                                            +
+           -A receipt showing: shoppingcart, Amount Due and Credit Available. +
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <fstream>
#include "GroceryItem.h"
#include "customer.h"
using namespace std;
int main()
{
   fstream fs;
   fs.open("GroceryFile.txt", fstream::in);
   string restOfLine;
   string name;
   string code,code2;
   string fullcode;
   string response = "y";
   int quantity;
   float total = 0;
   float price;
   vector<GroceryItem> grocery_item;
   while(!fs.eof())
   {
      getline(fs, name, '\n');
      getline(fs, fullcode, '=');   // changed to get only 
      getline(fs, code, ' ');      // the number of the code, 
      getline(fs, code2, '\n');   // not the hole line of characters
      fs >> price;
      getline(fs, restOfLine, '\n');
      GroceryItem g(name, code, price);
	  grocery_item.push_back(GroceryItem(name, code2, price));  
   }
   fs.close();
//creating a new customer
   Customer x("John Doe", "101 Main St.", "Rockford", "IL", "61801");
      for(int i = 0; i < grocery_item.size(); i++)
   {
      grocery_item[i].print();
   } 
cout<<"------------------------------------------------------------------"<<endl;
	  while (response == "y")
	  {
	    cout << endl<<"Which item would you like to add to shopping cart?  ";
	    cin >> code;
		cout <<endl<< "How many items would you like to add?  ";
		cin >> quantity;
		for (int i = 0; i < grocery_item.size(); i++)  // starting loop
		{
		  if (code == grocery_item[i].getItemCode()) //compareing the code of the item
		  {                                                        
			  price = grocery_item[i].getItemPrice() * quantity; //Total is get by the multiplication of quantity
			  total += price;                                   // of the item by the price store in text list       
			  for(int j =0; j < quantity; j++)  
			  {                                 //Allow to add(store)more items to the customer 
                x.add_grocery_item(grocery_item[i]);
              }
		  }
       }
		  if (!x.add_purchase(price)) break;;    // It allowds to continue or not with the purchases.
		  cout <<endl<< "Do you want to purchase another item (y/n)?  "; 
		  cin >> response;    
	  }
    cout<<endl<<"*******************************************************************"<<endl<<endl;
	  x.display_shoppingCart();  //Displays the ithems in the shopping cart.
      cout << right << setw(42) <<"__________" <<endl;        
      //Shows the total that must be paid.
      cout<< endl << left << setw(35) <<"Amount Due: " << x.get_unpaid_balance() <<endl;  
      //Show what is left from the credit limit by substracting it from total.
      cout<< left << setw(35) <<"Credit Available: " << x.get_credit_limit()- total <<endl; 
      
   system("pause");
   return 0;
}
