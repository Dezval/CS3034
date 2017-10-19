#include <iostream>
#include "PayrollSystem.h"

using namespace std;

int main() {

    PayrollSystem payroll;
    payroll.addEmployee("0001","John","Dilinger",.50);
    payroll.addEmployee("0002","Johnny","Depp",5000);
    payroll.addEmployee("0003","John","Hurley",120);
    payroll.addEmployee("0004","John","Hancock",12);

    payroll.hoursWorkedByEmployee("E0001",300);
    payroll.hoursWorkedByEmployee("E0002",300);
    payroll.hoursWorkedByEmployee("E0003",300);
    payroll.hoursWorkedByEmployee("E0004",300);

    payroll.issuePaychecks();

//
    payroll.removeEmployee("E0001");
    cout << "updating data" << endl;


    payroll.hoursWorkedByEmployee("E0002",500);
    payroll.hoursWorkedByEmployee("E0003",500);
    payroll.hoursWorkedByEmployee("E0004",500);
//
    payroll.issuePaychecks();

    return 0;
}