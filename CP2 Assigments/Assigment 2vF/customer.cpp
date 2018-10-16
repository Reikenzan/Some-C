#include "customer.h"

Customer::Customer(string n, string a, string c, string s, string z)
{
  name = n;
  address = a;
  city = c;
  state = s;
  zipcode = z;
  credit_limit = 100;
  year_to_date_purchases = 0;
  unpaid_balance = 0;
}

void Customer::increase_limit(double amount)
{
  credit_limit += amount;
}

string Customer::get_name() const
{
  return name;
}

string Customer::get_address() const
{
  return address;
}

string Customer::get_city() const
{
  return city;
}

string Customer::get_state() const
{
  return state;
}

string Customer::get_zipcode() const
{
  return zipcode;
}

double Customer::get_credit_limit() const
{
  return credit_limit;
}

double Customer::get_unpaid_balance() const
{
  return unpaid_balance;
}

bool Customer::add_purchase(double val)
{
  if ( (val + unpaid_balance) > credit_limit )
  {
    cout << "Not enough credit limit. Purchase cannot be completed.\n";
    return false;
  }

  year_to_date_purchases += val;
  unpaid_balance += val;
  cout <<endl<< "Purchase successful.\n"; //trace message
  return true;
}

void Customer::pay_balance(double payment)
{
  unpaid_balance -= payment;
}
//
void Customer::add_grocery_item(GroceryItem a)
{
     shoppingCart.push_back(a);
}
void Customer::display_shoppingCart()
{
     for(int i =0; i < shoppingCart.size(); i++)
     {
             cout << left << setw(35) << shoppingCart[i].getItemName() << setw(5) << shoppingCart[i].getItemPrice() << endl;
     }
}



