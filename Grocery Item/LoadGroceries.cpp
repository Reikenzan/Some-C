/*
author: Dennis Ramos
This program creates multiple product objects by reading information
from a file.
*/

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include "GroceryItem.h"

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

   for(int i = 0; i < grocery_item.size(); i++)
   {
      grocery_item[i].print();
   } 
   system("pause");
   
   if (grocery_item[8] < grocery_item[5])
      cout << grocery_item[8].getItemName() << " is less than "
           << grocery_item[5].getItemName() << endl;
   else        
      cout << grocery_item[5].getItemName() << " is less than "
           << grocery_item[8].getItemName() << endl;
   sort( grocery_item.begin(), grocery_item.end() ); 

   system("pause");

   for(int i = 0; i < grocery_item.size(); i++)
   {
      grocery_item[i].print();
//      cout << grocery_item[i];
   } 
           

   system("pause");
   return 0;
}
