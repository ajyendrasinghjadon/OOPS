// create a class number and write a function that returns an object containing the value 100
#include <iostream>
using namespace std;
class Number {
    int value;
public:
    Number(int v) {
        value = v;
    }
    Number GetNumber() {
        return Number(100);
    }
    int getValue() {
        return value;
    }
};
int main() {
    Number n1(0);
    Number n2 = n1.GetNumber();
    cout << "The value of the object is: " << n2.getValue() << endl;
    return 0;
}
