/*
author: Dennis Ramos
This program creates multiple product objects by reading information
from a file.
*/

#include <iostream>
#include <vector>
#include <fstream>
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
   return 0;
}
