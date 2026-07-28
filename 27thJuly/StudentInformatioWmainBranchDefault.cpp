#include <iostream>
#include <string>
using namespace std;

void studentInfo (string name, int rollNo, string branch="CSE") {
    cout << "Student's Details: " << endl;
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollNo << endl;    
    cout << "Branch: " << branch << endl;
}

int main () {
    string name;
    int rollNo;
    string branch;

    cout << "Enter Student's Name: \n";
    cin >> name;
    cout << "Enter Student's Roll Number: \n";
    cin >> rollNo;
    cout << "Enter Student's Branch (default is CSE): \n";
    cin >> branch;

    studentInfo(name, rollNo, branch);
    cout<<endl;
    studentInfo("Harsh", 25);
    return 0;
}