// create class student  object data member name   that object have pointer , data member will be accesed using pointers in cpp
#include <iostream>
using namespace std;
class Student {
public:
    string name;
    void display() {
        cout << "Student Name: " << name << endl;
    }
};
int main() {
    Student s;
    s.name = "Aditya";
    Student *ptr = &s;
    cout << "Student Name: " << ptr->name << endl;
    ptr->display();
    return 0;
}