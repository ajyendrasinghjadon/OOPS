// 1. Create overloaded functions named interest() to calculate simple interest using:
    // => Principle and rate
    // => Principal, Rate and Time

#include <iostream>
using namespace std;

class Bank {
public:
    void interest(float p, float r) {
        cout << "Simple Interest: " << (p * r) / 100 << endl;
    }

    void interest(float p, float r, float t) {
        cout << "Simple Interest: " << (p * r * t) / 100 << endl;
    }
};

int main() {
    Bank b;

    b.interest(10000, 5);
    b.interest(10000, 5, 2);

    return 0;
}