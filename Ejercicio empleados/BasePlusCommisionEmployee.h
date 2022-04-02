//
// Created by User on 30/03/2022.
//

#ifndef UNTITLED_BASEPLUSCOMMISIONEMPLOYEE_H
#define UNTITLED_BASEPLUSCOMMISIONEMPLOYEE_H

#include"CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee{
    public:
    BasePlusCommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0);

    void setBaseSalary(double);
    double getBaseSalary() const;

    virtual double earnings() const;
    virtual void print() const;

    private:
        double baseSalary;

};
#endif //UNTITLED_BASEPLUSCOMMISIONEMPLOYEE_H
