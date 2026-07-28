#include <iostream>
#include <string>
using namespace std;

class Student {
    public : 
        string name;
        int rollNo;
        int age;
        float marks;

        void inputDetails() {
            cout << "Enter Student's Name: \n";
            cin >> name;
            cout << "Enter Student's Roll Number: \n";
            cin >> rollNo;
            cout << "Enter Student's Age: \n";
            cin >> age;
            cout << "Enter Student's Marks: \n";
            cin >> marks;
        }

        void displayDetails() {
            cout << "Student's Details: \n" << endl;
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << rollNo << endl;    
            cout << "Age: " << age << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main () {
    Student s;
    s.inputDetails();
    s.displayDetails();
    return 0;
}








