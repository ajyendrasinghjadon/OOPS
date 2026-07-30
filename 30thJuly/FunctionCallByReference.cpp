#include <iostream>
using namespace std;

void increase(int &x) {
    x = x + 20;
    cout << "Value inside function: " << x << endl;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Before function call: " << num << endl;
    increase(num);
    cout << "After function call: " << num << endl;
    return 0;
}