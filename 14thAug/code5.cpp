// write a class of emlpyee id name and salary

#include  <iostream>
using namespace std;

class Student {
public: 
    int id;
    string name;
    float salary;

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

};

int main() {
    Student s1;
    s1.id = 101;
    s1.name = "John Doe";
    s1.salary = 50000.0;

    s1.display();

    return 0;
}