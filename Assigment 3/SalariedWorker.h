#ifndef SALARIEDWORKER_H
#define SALARIEDWORKER_H

#include "Worker.h"
using namespace std;

class SalariedWorker : public Worker
{
 public:
 //Constructor
SalariedWorker();
SalariedWorker(double wp);
SalariedWorker(string, int, string, int, float, float);
 
//Accessor
 float getAnualSalary () const;

//Mutators
 void setAnualSalary(float);

//Calculations
 float getWeeklyPay() const;
 
 double compute_pay();
 
 private:
   float AnualSalary;
   float WeeklyPay;
     
};
#endif
