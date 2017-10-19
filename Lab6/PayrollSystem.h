#ifndef LAB6_PAYROLLSYSTEM_H
#define LAB6_PAYROLLSYSTEM_H

#include <iostream>
#include <vector>
#include "Employee.h"

using namespace std;

class PayrollSystem {

public:
    void addEmployee(string employeeId, string firstName, string lastName, double wage);
    void removeEmployee(string eid);
    void hoursWorkedByEmployee(string eid, int hoursWorked);
    void issuePaychecks();
    int paycheckExists(string eid);

private:
    string companyName;
    vector<Employee> employees;
    vector<Paycheck> paychecks;

};


#endif //LAB6_PAYROLLSYSTEM_H
