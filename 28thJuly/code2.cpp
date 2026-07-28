// write a class employee with data members employee id, name, salary and define all member functions outside the
// class using the operators (acceptDetails, displayDetails, IncreaseSalaryby10%)

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empId;
    string name;
    float salary;

public:
    void acceptDetails();
    void displayDetails();
    void increaseSalaryBy10();
};

void Employee::acceptDetails() {
    cout << "Enter Employee ID: ";
    cin >> empId;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Salary: ";
    cin >> salary;
}

void Employee::displayDetails() {
    cout << "\nEmployee Details: " << endl;
    cout << "Employee ID : " << empId << endl;
    cout << "Name : " << name << endl;
    cout << "Salary : " << salary << endl;
}

void Employee::increaseSalaryBy10() {
    salary = salary + (salary * 0.10);
    cout << "\nSalary increased by 10%." << endl;
}

int main() {
    Employee emp;

    emp.acceptDetails();
    emp.displayDetails();

    emp.increaseSalaryBy10();

    cout << "\nAfter Salary Increment:" << endl;
    emp.displayDetails();

    return 0;
}