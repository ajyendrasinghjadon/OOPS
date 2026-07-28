#include <iostream>
using namespace std;
inline int cube(int num = 2) {
    return num * num * num;
}

int main () {
    int number;
    cout << "Enter a number to find its cube (default is 2): ";
    cin >> number;
    cout << "Cube of " << number << " is: " << cube(number) << endl;
    cout << "Cube of default value (2) is: " << cube() << endl;
    return 0;
}



// wa c++ program to create a function that accepts an integer by refernce and increases its value by 20 and display the value before and after the function call
// write a class employee with data members employee id, name, salary and define all member functions outside the class using the  operators (acceptDetails, displayDetails, IncreaseSalaryby10%)
