#ifndef GROCERY_ITEM
#define GROCERY_ITEM

#include <iostream>
#include <string>

using namespace std;
class GroceryItem
{
 public:
   // constructors
   GroceryItem(string, string, float);
   GroceryItem();
   // mutators
   void setItemName(string);
   void setItemCode(string);
   void setItemPrice(float);
   // accessors
   string getItemName() const;
   string getItemCode() const;
   float getItemPrice() const;
   void print() const;
   bool operator < (GroceryItem) const ;
//   friend ostream& operator << (ostream&, const GroceryItem&);
//   friends allow private access.
 private:
   string itemName;
   string itemCode;
   float itemPrice;
};
//bool operator < (GroceryItem, GroceryItem);
//ostream& operator << (ostream&, const GroceryItem&);
#endif
