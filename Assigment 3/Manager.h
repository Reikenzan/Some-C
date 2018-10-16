#ifndef MANAGER_H
#define MANAGER_H

#include "SalariedWorker.h"

class Manager : public SalariedWorker
{
 public:
  //Constructor
 Manager();
 Manager(float Anual, double Bono);
 Manager(string, int, string, int, float, float,float);
 
//Accessor
float get_bonus();
 
//Mutators
 void setBonusFromLastYear(float);

//Calculations
//float WeeklyPay() const;
virtual double compute_pay();
 
 private:
    double BonusFromLastYear;

};
#endif
