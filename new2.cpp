#include <iostream>
using namespace std;
class math{
    public:
     void display(){
        int a=10;
        int &b=a;
        cout<<a<<endl;
        b=20;
        cout<<a<<endl;
     }
};
int main(){
    math m;
    m.display();
}