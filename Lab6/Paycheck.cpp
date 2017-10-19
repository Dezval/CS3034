//
// Created by Dezval on 10/17/2017.
//

#include <iomanip>
#include <cmath>
#include "Paycheck.h"

using namespace std;

Paycheck::Paycheck(string employeeId, string firstName, string lastName, double payAmount) {
    this->employeeId.append(employeeId);
    this->firstName = firstName;
    this->lastName = lastName;
    this->payAmount = payAmount;

}

string Paycheck::getPaycheck() {
    string fname,lname,eid;
    double pay = this->payAmount;
    fname = this->firstName;
    lname = this->lastName;
    eid = this->employeeId;
//    pay = floor(pay * 100.0) / 100.0;
    return "Paycheck for $" + to_string(pay) +" issued to " + eid + " " +fname+ " " + lname;
}



const string &Paycheck::getEmployeeId() const {
    return employeeId;
}

void Paycheck::setEmployeeId(const string &employeeId) {
    Paycheck::employeeId = employeeId;
}

double Paycheck::getPayAmount() const {
    return payAmount;
}

void Paycheck::setPayAmount(double payAmount) {
    Paycheck::payAmount = payAmount;
}

