#include <iostream>
using namespace std;

int main() {
    int a, b;
    int *p1, *p2;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    p1 = &a;
    p2 = &b;
    if (*p1 > *p2)
        cout << "Larger number is: " << *p1;
    else
        cout << "Larger number is: " << *p2;
    return 0;
}

// write the variadic function that returns the number of arguments