// Create a class distance and overload the === operator to compare two distance objects 

#include <iostream>
using namespace std;
class Distance {
    int meter;
public:
    Distance(int m) {
        meter = m;
    }

    bool operator == (Distance d) {
        return meter == d.meter;
    }
};

int main() {
    Distance d1(100);
    Distance d2(100);

    if (d1 == d2)
        cout << "Distances are equal";
    else
        cout << "Distances are not equal";

    return 0;
}