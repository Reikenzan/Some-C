#ifndef WORKER_H
#define WORKER_H

#include<iostream>
#include<string>
using namespace std;

class Card
{
public:
   Card();//constructur
   Card(string n);//accesors
   bool is_expired() const;
   void print() const;

private:
   string name;
   
};
#endif
