// construct a rectangle calss and use a copy constructor to create a second rectangle from the first

#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    Rectangle(const Rectangle& other) : length(other.length), width(other.width) {}

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle r1(5.0, 3.0);
    Rectangle r2(r1);

    cout << "Rectangle 1:" << endl;
    r1.display();

    cout << "Rectangle 2:" << endl;
    r2.display();

    return 0;
}
