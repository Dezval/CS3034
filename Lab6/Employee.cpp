//
// Created by Dezval on 10/17/2017.
//

#include "Employee.h"
using namespace std;

Employee::Employee(string employeeId, string firstName, string lastName, double wage) {
    this->employeeId.append(employeeId);
    this->firstName = firstName;
    this->lastName = lastName;
    this->wage = wage;
}

double Employee::calcPay() {
//    cout<<"wage: " << this->wage << " | hoursWorked: " << this->hoursWorked << endl;
    return this->wage*this->hoursWorked;
}

double Employee::getWage() const {
    return wage;
}

void Employee::setWage(double wage) {
    Employee::wage = wage;
}

int Employee::getHoursWorked() const {
    return hoursWorked;
}

void Employee::setHoursWorked(int hoursWorked) {
//    cout << " setting hoursWorked: " << hoursWorked << endl;
    this->hoursWorked = hoursWorked;
}

const string &Employee::getEmployeeId() const {
    return employeeId;
}

void Employee::setEmployeeId(const string &employeeId) {
    Employee::employeeId = employeeId;
}

const string &Employee::getFirstName() const {
    return firstName;
}

void Employee::setFirstName(const string &firstName) {
    Employee::firstName = firstName;
}

const string &Employee::getLastName() const {
    return lastName;
}

void Employee::setLastName(const string &lastName) {
    Employee::lastName = lastName;
}
