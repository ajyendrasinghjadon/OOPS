#include <iostream>
using namespace std;
class Area {
    public: 
        void area(int length, int breadth) {
            cout<<"Area of rectangle is: " << length * breadth << endl;
        }
        void area(int side) {
            cout<<"Area of square is: " << side * side << endl;
        }
        void area(float radius) {
            cout<<"Area of circle is: " << 3.14 * radius * radius << endl;
        }
};

int main() {
    Area obj;
    obj.area(5);
    obj.area(5, 4);
    obj.area(3.5f);
}
