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




