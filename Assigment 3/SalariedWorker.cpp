#include "salariedworker.h"

/*SalariedWorker::SalariedWorker();
{}*/

SalariedWorker::SalariedWorker(string n, int id, string dept, int ssn, float Anual, float Semanal): Worker(n,id, dept, ssn)
{
  AnualSalary = Anual;
  WeeklyPay = Semanal;
}

SalariedWorker::SalariedWorker()
{
    WeeklyPay = 0;
    AnualSalary =0;
}
SalariedWorker::SalariedWorker(double wp)
{
    WeeklyPay = wp;
    AnualSalary = 52 * WeeklyPay;
}
float SalariedWorker::getWeeklyPay() const
{
    return WeeklyPay;
}
float SalariedWorker::getAnualSalary() const
{
    return AnualSalary;
}

double SalariedWorker::compute_pay()
{
    return AnualSalary / 52;
}
 void SalariedWorker::setAnualSalary(float s)
 {
      AnualSalary = s;
}
