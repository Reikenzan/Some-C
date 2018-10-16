#ifndef Manager_h
#define Manager_h

#include "Salaried_Worker.h"

class Manager : public Salaried_Worker
{
public:
    Manager(double as, double b);

    double get_annual_pay() const;
    double get_weekly_pay() const;
    
    virtual double compute_pay();
    
private:
    double weekly_pay;
    double annualy_salary;
    double bonus_from_last_year;
};


#endif
