#ifndef Hourly_Worker_h
#define Hourly_Worker_h

#include "Worker.h"
class Hourly_Worker : public Worker
{
public:
    Hourly_Worker(double h, double hpr);

    virtual double compute_pay();
    
private:
    double hours;
    double hourly_pay_rate;
    double weekly_pay;
};
#endif
