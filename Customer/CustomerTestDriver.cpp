#include <iostream>
#include "customer.h"
using namespace std;
int main()
{
   string response = "y";
   double val;
 
   Customer a("John Doe", "101 Main St.", "Rockford", "IL", "61801", 100.00);
   Customer b("J", "101 Main St.", "Rockford", "IL", "61801", 100.00);
   Customer c("Doe", "101 Main St.", "Rockford", "IL", "61801", 100.00);
   Customer z("D", "101 Main St.", "Rockford", "IL", "61801", 100.00);
   
   while ( response == "y" )
   {
      cout << "Purchase value (in $): ";
      cin >> val;
      if(!c.add_purchase(val)) break;;

      cout << "Do you want to purchase another item (y/n)? ";
      cin >> response;
   }
 
   cout << "Please pay the balance of $" << c.get_unpaid_balance() << endl;
/*   cout << "would you like to pay off part of the unpaid balance?" <<endl;
   if (response== "y")
   {
      cout< "Enter the payment amoun (in $)";
      (c.get_
      cout << "Do you want to purchase another item (y/n)? ";
      cin >> response;
   }*/
   system("pause");
   return 0;
}
