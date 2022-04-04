#include "DailyEmployee.h"
using namespace std;
DailyEmployee::DailyEmployee( const string &first, const string &last, const string &ssn, double dailyWage, double workedDays): Employee(first, last, ssn){
    setWage(dailyWage);
    setDays(workedDays);
}
void DailyEmployee::setWage(double dailyWage){
    wage = (dailyWage < 0.0 ? 0.0 : dailyWage);
}

double DailyEmployee::getWage() const{
    return wage;
}

void DailyEmployee::setDays(double workedDays) {
    days=(((workedDays >= 0.0) && (workedDays <= daysPerWeek)) ? workedDays : 0.0);
}

double DailyEmployee::getDays() const {
    return days;
}

double DailyEmployee::earnings() const {
    if(getDays() > 0){
        return getDays() * getWage();
    }
    return 0;
}

void DailyEmployee::print() const {
    cout << "Daily employee";
    Employee::print();
    cout << "\ndaily wage:" << getWage() << "; days worked: " << getDays();
}

