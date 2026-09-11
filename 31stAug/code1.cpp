// 3 public member functions 1)marks of student by user input 2)Add marks of 2 students as parameter 3)Display marks of student
// classes will be private and public member functions will be used to access the private data members of the class
// functions would be addmarks(), entermarks(), displaymarks().

#include <iostream>
using namespace std;
class Student {
    private:
        int marks;
    public:
        void entermarks() {
            cout << "Enter marks of student: ";
            cin >> marks;
        }
        void displaymarks() {
            cout << "Marks of student: " << marks << endl;
        }
        void addmarks(Student s1, Student s2) {
            marks = s1.marks + s2.marks;
        }   
};
int main() {
    Student s1, s2, s3;
    s1.entermarks();
    s2.entermarks();
    s3.addmarks(s1, s2);
    s3.displaymarks();
    return 0;
}
