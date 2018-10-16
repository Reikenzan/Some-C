#include "GroceryItem.h"
GroceryItem::GroceryItem(string itemName, string itemCode, float itemPrice)
{
  this->itemName = itemName;                                
  this->itemCode = itemCode;                                
  this->itemPrice = itemPrice;                                
}

GroceryItem::GroceryItem()
{
  itemName = "";                                
  itemCode = "";                                
  itemPrice = 0.0;                                
}                          

GroceryItem::GroceryItem(const GroceryItem& original)
{
  this->itemName = original.itemName;                                
  this->itemCode = original.itemCode;                                
  this->itemPrice = original.itemPrice;                                
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
   cout << getItemName()<< endl;
   //cout << getItemCode() << endl;
   cout << getItemPrice() << endl << endl;
}



