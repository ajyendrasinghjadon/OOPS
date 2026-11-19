#include <iostream>
using namespace std;
int x=100;
class math{
    public:
    void display();
};
void math:: display(){
    int x=20;
    cout<<x<<endl;
    cout<<::x<<endl;
}
int main(){
    math m;
    m.display();
}