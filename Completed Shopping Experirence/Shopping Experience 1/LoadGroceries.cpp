/*
The Problem:
    We were given to task of modifying the customer class in order to implement
    a functioning shopping cart for their groceries. We need this to have the
    user specify the amount of a certain grocery item while making sure they
    do not exceed their credit limit. Once checking out, a reciept will be need 
    to be displayed for the customer.
    
Analysis:
    Input: 
           Grocery item code
           Quantity if a grocery
           Whether or not customer would like to keep shopping
    Output:
           Everything the customer bought and the respective item's price
           The total amount due
           Their credit limit
           
Design:
       1)Make a vector of grocery items from the text file
       2)Have user input item code
       3)Have user input quantity of said grocery
       4)Use a for loop to add grocery items to a customer's shopping cart
       5)Repeat steps 1-4 if customer wants to keep shopping for another item
       6)Print out a customer's reciept, total amount due, 
       and their credit limit
       
*/
#include <iostream>
#include <vector>
#include <fstream>
#include "GroceryItem.h"
#include "customer.h"

int main()
{
   fstream fs;
   fs.open("GroceryFile.txt", fstream::in);
   
   string restOfLine;
   string name;
   string code;
   float price;
   vector<GroceryItem> grocery_item;
   while(!fs.eof())
   {
      getline(fs, name, '\n');
      getline(fs, code, '\n');
      fs >> price;
      getline(fs, restOfLine, '\n');
      GroceryItem g(name, code, price);
	  grocery_item.push_back(GroceryItem(name, code, price));
   }
   fs.close();

   string response = "y";
   int val;
   int amount;
 
   Customer c("Brian Lemus", "101 Main St.", "Rockford", "IL", "61801");
 
   while ( response == "y" )
   {
      cout << "Enter Item Code for Purchase ";
      cin >> val;
      
      cout<< "How many of these would you like? ";
      cin >> amount;
      
      if(!c.add_purchase(amount * grocery_item[val].getItemPrice())) break;
      //Checks if the price of a certain quantity of grocery item exceeds
      //the customer credit limit
      
      for(int i = 0; i < amount; i++)
      {
      c.addItem(grocery_item[val]);
      //This loop adds a grocery item until i reaches amount
      }
      
      cout << "Do you want to purchase another item (y/n)? ";
      cin >> response;
   }
 
 vector<GroceryItem> reciept(c.getList());
 for(int i = 0; i <reciept.size(); i++)
   {
      reciept[i].print();
   } 
   cout << "Amount Due                      " << c.get_unpaid_balance() << endl;
   cout << "Credit available                  " << c.get_credit_limit() << endl;
   
   system("pause");
   return 0;
}
