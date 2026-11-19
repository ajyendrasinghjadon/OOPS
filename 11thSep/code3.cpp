// Create employee class with static data member company name and display it using a static member function
#include <iostream>
using namespace std;

class Employee {
private:
    static string companyName;
    int empId;
public: 
    Employee(int id) {
        empId = id;
    }

    static void displayCompanyName() {
        cout << "Company Name: " << companyName << endl;
    }
};

string Employee::companyName = "Tech Solutions";

int main() {
    Employee e1(101);
    Employee e2(102);
    Employee e3(103);

    Employee::displayCompanyName();

    return 0;
}


// create a university class where the university name is static and student details are non static. Display both

