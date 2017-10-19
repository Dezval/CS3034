#ifndef LAB6_PYCHECK_H
#define LAB6_PYCHECK_H

#include <iostream>

using namespace std;

class Paycheck {
public:
    Paycheck(string employeeId, string firstName, string lastName, double payAmount);
    string getPaycheck();

    const string &getEmployeeId() const;

    void setEmployeeId(const string &employeeId);

private:

    double payAmount;
    string employeeId = "";
    string firstName;
    string lastName;

};


#endif //LAB6_PYCHECK_H
