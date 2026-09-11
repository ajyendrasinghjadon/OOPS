#include <iostream>
using namespace std;

class Student
{
public:
    static int count;
    int roll;
    Student(int r)
    {
        roll = r;
        count++;
    }
};
int Student::count = 0;

int main()
{
    Student s1(1);
    Student s2(2);
    Student s3(3);

    cout << "Total Students: " << Student::count << endl;
    return 0;
}