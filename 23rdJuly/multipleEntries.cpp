#include <iostream>
#include <string>
using namespace std;
int main () {
    string name;
    int rollNo;
    int age;
    float marks;
    cout<<"Enter number of students: \n";
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        cout<<"Enter Student's Name: \n";
        cin>>name;
        cout<<"Enter Student's Roll Number: \n";
        cin>>rollNo;
        cout<<"Enter Student's Age: \n";
        cin>>age;
        cout<<"Enter Student's Marks: \n";
        cin>>marks;
    }
    cout<<"Student's Details: \n" << endl;
    for(int i=0; i<n; i++) {
        cout<<"Name: " << name << endl;
        cout<<"Roll Number: " << rollNo << endl;    
        cout<<"Age: " << age << endl;
        cout<<"Marks: " << marks << endl;
    }
    return 0;
}