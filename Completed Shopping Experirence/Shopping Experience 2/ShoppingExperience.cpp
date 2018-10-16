/*
This program simulates a customer buying groceries
*/

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include "GroceryItem.h"
#include "Customer.h"

vector<GroceryItem> stockShelves();
void showAvailableGroceryItems(vector<GroceryItem> flyer);
void printReceipt(Customer);

int main()
{
   vector<GroceryItem> inventory = stockShelves();
   showAvailableGroceryItems(inventory);

   string response = "y";
   int code;
   int quantity;
   bool terminate = false;
   Customer c("John Doe", "101 Main St.", "Rockford", "IL", "61801");
 
   while ( response == "y" )
   {
      cout << "Please select an item to purchase using its item code: ";
      cin >> code;
      cout << "You have selected " << inventory[code].getItemName() << endl;
      cout << "Please enter the quantity for this item: " << endl;
	  cin >> quantity;
	  for(int i = 0; i < quantity; i++)
	  {
	     terminate = !c.add_purchase(inventory[code]);
	     if (terminate) break; 
      }
      if (terminate) return 1; 
      cout << "Do you want to purchase another item (y/n)? ";
      cin >> response;
   }
   printReceipt(c); 

   system("pause");
   return 0;
}

vector<GroceryItem> stockShelves()
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
   return grocery_item;
}

void showAvailableGroceryItems(vector<GroceryItem> flyer)
{
   for(int i = 0; i < flyer.size(); i++)
   {
      flyer[i].print();
   } 
}

void printReceipt(Customer cust)
{
   vector<GroceryItem> shoppingCart = cust.get_shopping_cart();
   double total = 0;  
   cout << endl << endl;
   cout << "==============================================================="<< endl;
   cout << "Thank you for shopping at the WCC Emporium. Here's your receipt";
   cout << endl << endl;   	
   
   for(int i = 0; i < shoppingCart.size(); i ++)
   {
     cout << left << setw(10) << " " << setw(30) << shoppingCart[i].getItemName() 
	      << setw(10) << right << shoppingCart[i].getItemPrice() << endl;
   }
   cout << endl;
   cout << left << setw(10) << " " << setw(30) << "Amount Due" 
      << setw(10) << right << cust.get_unpaid_balance() << endl;   	
   cout << left << setw(10) << " " << setw(30) << "Credit Available" 
      << setw(10) << right << cust.get_credit_limit() - cust.get_unpaid_balance()
	  << endl;   	
   cout << "==============================================================="
        << endl << endl;

}
     
