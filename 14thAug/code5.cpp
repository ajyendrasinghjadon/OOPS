#include <iostream>
#include <string>
using namespace std;

class Employee {
public: 
    int id;
    string name;
    int salary;

    void display() {
        cout << "ID: " << id << " | Name: " << name << " | Salary: " << salary << endl;
    }
};

int main() {
    Employee emp[50]; 
    
    int n;
    cout << "How many employees do you want to add right now? (Max 50): ";
    cin >> n;

    // Check if the user entered a valid number
    if (n <= 0 || n > 50) {
        cout << "Please enter a valid number between 1 and 50." << endl;
        return 1;
    }

    // Loop to take input for each employee
    cout << "\n--- Enter Employee Data ---" << endl;
    for (int i = 0; i < n; i++) {
        Employee *p = &emp[i]; // Point to the current employee in the array
        
        cout << "\nEmployee " << (i + 1) << ":" << endl;
        cout << "Enter ID: ";
        cin >> p->id;
        
        cout << "Enter Name: ";
        cin.ignore(); // Clears the newline character from the buffer before taking string input
        getline(cin, p->name); // Allows names with spaces (e.g., "John Doe")
        
        cout << "Enter Salary: ";
        cin >> p->salary;
    }

    // Loop to display the data for all entered employees
    cout << "\n--- Employee Records ---" << endl;
    for (int i = 0; i < n; i++) {
        Employee *p = &emp[i];
        p->display(); // Calling the function using the pointer
    }

    return 0;
}