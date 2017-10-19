//
// Created by Dezval on 10/17/2017.
//

#include <iomanip>
#include "PayrollSystem.h"

using namespace std;

void PayrollSystem::addEmployee(string employeeId, string firstName, string lastName, double wage) {
    employees.push_back(Employee(employeeId,firstName,lastName,wage));
}

void PayrollSystem::removeEmployee(string eid) {
    for(int i = 0, max = employees.size(); i < max; i++){
        if(employees[i].getEmployeeId() == eid){
            cout << "Deleting Employee " << eid << " " << employees[i].getFirstName() << " " << employees[i].getLastName() << endl;
            employees.erase(employees.begin()+i);
            if(paychecks[i].getEmployeeId() == eid){
                paychecks.erase(paychecks.begin() + i);
            }
            break;
        }
    }
}

void PayrollSystem::hoursWorkedByEmployee(string eid, int hoursWorked) {
    for(int i = 0, max = employees.size(); i < max; i++){
        if(employees.at(i).getEmployeeId().compare(eid) == 0){
//            cout << "1. Employee " << employees.at(i).getEmployeeId() << " worked " << employees.at(i).getHoursWorked() << " hours." << endl;
            employees.at(i).setHoursWorked(hoursWorked);
//            cout << "2. Employee " << employees.at(i).getEmployeeId() << " worked " << employees.at(i).getHoursWorked() << " hours." << endl;

        }
    }
}

void PayrollSystem::issuePaychecks() {
    int max = employees.size();
    int index;
    for(int i = 0; i < max; i++){
            paychecks.push_back(Paycheck(employees.at(i).getEmployeeId(),
                                         employees.at(i).getFirstName(),
                                         employees.at(i).getLastName(),
                                         employees.at(i).calcPay()));
        employees.at(i).setHoursWorked(0);
        cout << paychecks.at(i).getPaycheck() << endl;
    }
    for(int i = 0; i < max; i ++){
        if(!paychecks.empty())
            paychecks.erase(paychecks.begin());
    }

}

int PayrollSystem::paycheckExists(string eid) {
    int max = employees.size();
    for(int i = 0; i < max; i++){
        if(paychecks[i].getEmployeeId() == eid){
            return i;
        }
    }
    return -1;
}
