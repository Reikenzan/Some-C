#include "hourlyworker.h"

HourlyWorker::HourlyWorker()
{}
HourlyWorker::HourlyWorker(float h, float rate) : Worker()
{
  hours = hours;
  hourlyPayRate = rate;
}
HourlyWorker::HourlyWorker(string n, int id, string dept, int ssn, float h, float rate) : Worker(n,id, dept, ssn)
{
   hours = h;
   hourlyPayRate = rate;
}
 //Accessor
 float HourlyWorker::getHourlyPayRate () const
 {
  return hourlyPayRate; 
 }
 float HourlyWorker::getHours () const
 {
  return hours;
 }
//Mutators
 void HourlyWorker::setHourlyPayRate(float p)
 {
  hourlyPayRate = p;
 }
  void HourlyWorker::setHours(float h)
 {
   hours = h;
 }
 //Calculations
 float HourlyWorker::WeeklyPay() const
 {
  return hours * hourlyPayRate;
 }
 double HourlyWorker::compute_pay() const
 {
        return hours * hourlyPayRate;
}
