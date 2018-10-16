#include "Manager.h"

Manager::Manager(double as, double b)
{
    annualy_salary = as;
    bonus_from_last_year = b;
}

double Manager::get_annual_pay() const
{
    return annualy_salary;
}
double Manager::get_weekly_pay() const
{
    return weekly_pay;
}
double Manager::compute_pay()
{
    return weekly_pay = (annualy_salary + bonus_from_last_year) / 52;
}
