
#ifndef LAB6_EMPLOYEE_H
#define LAB6_EMPLOYEE_H

#include <stdio.h>
#include <iostream>
#include "Paycheck.h"

using namespace std;

class Employee {

public:

    Employee(string employeeId, string firstName, string lastName, double wage);
    double calcPay();

    double getWage() const;

    void setWage(double wage);

    int getHoursWorked() const;

    void setHoursWorked(int hoursWorked);

    const string &getEmployeeId() const;

    void setEmployeeId(const string &employeeId);

    const string &getFirstName() const;

    void setFirstName(const string &firstName);

    const string &getLastName() const;

    void setLastName(const string &lastName);

private:
    string employeeId = "E";
    string firstName;
    string lastName;
    double wage;
    int hoursWorked = 0;
};


#endif //LAB6_EMPLOYEE_H
