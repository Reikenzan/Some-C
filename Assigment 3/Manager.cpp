#include "manager.h"

Manager::Manager()
{}
Manager::Manager(float Anual, double Bono) : SalariedWorker()
{
  setAnualSalary(Anual);
  BonusFromLastYear = Bono;
}
Manager::Manager(string n, int id, string dept, int ssn, float Anual, float Semanal, float Bono) : SalariedWorker(n,id, dept, ssn, Anual, Semanal)
{
 BonusFromLastYear = Bono;
}
/*
void Manager::setWeeklyPay(double b)
{
    WeeklyPay = (AnualySalary + b) / 52;
}
*/

void Manager::setBonusFromLastYear(float b)
{
     BonusFromLastYear = b;
}

float Manager::get_bonus()
{
      return BonusFromLastYear;
}
double Manager::compute_pay()
{
    float anual = getAnualSalary();
    return(anual + BonusFromLastYear) / 52;
}
