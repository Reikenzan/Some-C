#include "Hourly_Worker.h"

Hourly_Worker::Hourly_Worker(double h, double hpr)
{
    hours = h;
    hourly_pay_rate = hpr;
}

double Hourly_Worker::compute_pay()
{
    return weekly_pay = hours * hourly_pay_rate;
}
