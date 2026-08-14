// write an inline function to return maximum of two numbers 
#include<iostream>
using namespace std;
inline int maximum(int a, int b) {
    if(a > b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Maximum number => " << maximum(a, b) << endl;
    return 0;
}