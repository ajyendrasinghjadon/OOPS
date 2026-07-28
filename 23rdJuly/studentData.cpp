#include <iostream>
using namespace std;

void inputDetail(string name, int rollNo, int age, float marks) {
    cout<<"Enter Student's Name: \n";
    cin>>name;
    cout<<"Enter Student's Roll Number: \n";
    cin>>rollNo;
    cout<<"Enter Student's Age: \n";
    cin>>age;
    cout<<"Enter Student's Marks: \n";
    cin>>marks;
}

int main () {
    string name;
    int rollNo;
    int age;
    float marks;
    inputDetail(name, rollNo, age, marks);
    return 0;
}
