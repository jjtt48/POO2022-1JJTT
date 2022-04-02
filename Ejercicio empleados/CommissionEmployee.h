

#ifndef UNTITLED_COMMISSIONEMPLOYEE_H
#define UNTITLED_COMMISSIONEMPLOYEE_H

#include "Employee.h"

class CommissionEmployee: public Employee{
public:
    CommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);

    void setCommissionRate(double);
    double getCommissionRate() const;

    void setGrossSales(double);
    double getGrossSales() const;

    virtual double earnings() const;
    virtual void print() const;

protected:
    double commissionRate;
    double grossSales;
};
#endif //UNTITLED_COMMISSIONEMPLOYEE_H
