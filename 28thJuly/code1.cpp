// Write a c++ program to create a function that accepts an integer by refernce 
// and increases its value by 20 and display the value before and after the function call

#include <iostream>
using namespace std;
void increaseBy20(int &num) {
    num = num + 20;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "Before function call: " << number << endl;
    increaseBy20(number);
    cout << "After function call: " << number << endl;
    return 0;
}