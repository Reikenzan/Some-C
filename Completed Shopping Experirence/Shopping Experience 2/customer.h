#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include <iostream>
#include "GroceryItem.h"
using namespace std;
class Customer
{
public:

  Customer(string name, string address, string city, string state, string zipcode);  
  void increase_limit(double amount);
  string get_name()  const;
  string get_address() const;
  string get_city()  const;
  string get_state() const;
  string get_zipcode() const;
  double get_credit_limit() const;
  double get_unpaid_balance() const;
  vector<GroceryItem> get_shopping_cart() const;
////////////////////////////////////////  
//  bool add_purchase(double val);
  bool add_purchase(GroceryItem item);
////////////////////////////////////////  
  void pay_balance(double payment);

private:
  string name;
  string address;
  string city;
  string state;
  string zipcode;
  double credit_limit;
  double year_to_date_purchases;
  double unpaid_balance;
  vector<GroceryItem> shopping_cart;
};
#endif
