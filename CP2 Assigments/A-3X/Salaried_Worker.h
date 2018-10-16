#ifndef Assignment_3_Salaried_Worker_h
#define Assignment_3_Salaried_Worker_h

#include "Worker.h"

class Salaried_Worker : public Worker
{
public:
    Salaried_Worker();
    Salaried_Worker(double wp);
    double get_weekly_pay() const;
    double get_annual_pay() const;
 
    virtual double compute_pay();
    
private:
    double weekly_pay;
    double annual_pay;
};

#endif
