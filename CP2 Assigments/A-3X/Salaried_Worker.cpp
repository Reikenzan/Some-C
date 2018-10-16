#include "Salaried_Worker.h"

Salaried_Worker::Salaried_Worker()
{
    weekly_pay = 0;
    annual_pay =0;
}
Salaried_Worker::Salaried_Worker(double wp)
{
    weekly_pay = wp;
    annual_pay = 52 * weekly_pay;
}
double Salaried_Worker::get_weekly_pay() const
{
    return weekly_pay;
}
double Salaried_Worker::get_annual_pay() const
{
    return annual_pay;
}

double Salaried_Worker::compute_pay()
{
    return weekly_pay = annual_pay / 52;
}
