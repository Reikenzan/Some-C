#include "GroceryItem.h"
GroceryItem::GroceryItem(string name, string code, float price)
{
  itemName = name;                                
  itemCode = code;                                
  itemPrice = price;                                
}

GroceryItem::GroceryItem()
{
  itemName = "";                                
  itemCode = "";                                
  itemPrice = 0.0;                                
}                          

void GroceryItem::setItemName(string itemName)
{
   this->itemName = itemName;
}

void GroceryItem::setItemCode(string itemCode)
{
   this->itemCode = itemCode;
}

void GroceryItem::setItemPrice(float itemPrice)
{
   this->itemPrice = itemPrice;
}

string GroceryItem::getItemName() const
{
   return itemName;
}

string GroceryItem::getItemCode() const
{
   return itemCode;	
}

float GroceryItem::getItemPrice() const
{
   return itemPrice;	
}

void GroceryItem::print() const
{
   cout << getItemName() << endl;
   cout << getItemCode() << endl;
   cout << getItemPrice() << endl << endl;
}
/*
bool operator < (GroceryItem a, GroceryItem b)
{
   return a.getItemPrice() < b.getItemPrice();     
}     
*/
bool GroceryItem::operator < (GroceryItem b) const 
{
   return itemPrice < b.itemPrice;     
}     
/*
ostream& operator << (ostream& out, const GroceryItem& g)
{
   out << "item name : " << g.itemName()  << endl
       << "item code : " << g.getItemCode()  << endl
       << "item price: " << g.getItemPrice() << endl << endl;
   return out;    
                
}         
*/

