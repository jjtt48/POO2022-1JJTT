

#ifndef UNTITLED_DAILYEMPLOYEE_H
#define UNTITLED_DAILYEMPLOYEE_H
#include <iostream>
#include "Employee.h"

class DailyEmployee : public Employee{
public:
    static const int daysPerWeek = 7;
    DailyEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);
    void setWage(double);
    double getWage() const;

    void setDays(double);
    double getDays() const;

    virtual double earnings() const;
    virtual void print() const;
private:
    double wage;
    double days;
};

#endif //UNTITLED_DAILYEMPLOYEE_H
