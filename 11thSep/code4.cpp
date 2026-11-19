// create a university class where the university name is static and student details are non static. Display both

#include <iostream>
using namespace std;

class University {
private: 
    static string universityName;
    string studentName;
public:
    University(string name) {
        studentName = name;
    }
    static void displayUniversityName() {
        cout << "University Name: " << universityName << endl;
    }
    void displayStudentName() {
        cout << "Student Name: " << studentName << endl;
    }

};

string University::universityName = "Global University";

int main() {
    University u1("Ajyendra");
    University u2("Abhinav");
    University u3("Ashu");

    University::displayUniversityName();
    
    u1.displayStudentName();
    u2.displayStudentName();
    u3.displayStudentName();

    return 0;
}


