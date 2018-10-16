#ifndef WORKER_H
#define WORKER_H

#include<string>
#include<cstdio>
#include<iostream>
using namespace std;

class Worker
{
 public:
 //Constructors
   Worker();
   Worker(string, int, string, int);  
 //Accessors
   string getName() const;
   int getCompID() const;
   string getDepartment() const;
   int getSocialSecurityNumber() const;  
 //Calculations
   virtual double compute_pay();

 private:
   string name;
   int compid;
   string dept;
   int ssnum;
};
       
#endif
