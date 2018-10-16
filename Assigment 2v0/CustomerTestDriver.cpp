#include <iostream>
#include "customer.h"
using namespace std;
int main()
{
   string response = "y";
   double val;
 
   Customer c("John Doe", "101 Main St.", "Rockford", "IL", "61801");
 
   while ( response == "y" )
   {
      cout << "Purchase value (in $): ";
      cin >> val;
      if(!c.add_purchase(val)) break;;
 
      cout << "Do you want to purchase another item (y/n)? ";
      cin >> response;
   }
 
   cout << "Please pay the balance of $" << c.get_unpaid_balance() << endl;

   system("pause");
   return 0;
}

