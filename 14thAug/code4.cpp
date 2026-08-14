// write a program to increment a number by 5 using value, reference and pointer and observe the change

#include <iostream>
using namespace std;

void byValue(int x) {
    x = x + 5;
    cout << "Inside byValue: " << x << endl;
}

void byReference(int &x) {
    x = x + 5;
    cout << "Inside byReference: " << x << endl;
}

void byPointer(int *x) {
    *x = *x + 5;
    cout << "Inside byPointer: " << *x << endl;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "\nOriginal number: " << num << endl;

    byValue(num);
    cout << "After byValue: " << num << endl;

    byReference(num);
    cout << "After byReference: " << num << endl;

    byPointer(&num);
    cout << "After byPointer: " << num << endl;

    return 0;
}