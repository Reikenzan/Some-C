#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H

#include "Worker.h"

using namespace std;

class HourlyWorker : public Worker
{
 public:
//Constructor
 HourlyWorker();
 HourlyWorker(float hours, float rate);
 HourlyWorker(string, int, string, int, float, float);
 
//Accessor

 float getHourlyPayRate () const;
 float getHours () const;

//Mutators
 void setHourlyPayRate(float);
 void setHours(float);

//Calculations
 float WeeklyPay() const;
 double compute_pay() const;
  
 private:
   float hours;
   float hourlyPayRate;   
};
#endif
