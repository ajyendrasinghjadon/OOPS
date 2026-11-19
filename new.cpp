#include <iostream>
using namespace std;
class math
{
    public:
    int add(int a,int b);
    int subtract(int a,int b);
};
int math:: add(int a, int b)
{
    return a+b;
}
int math::subtract(int a,int b){
    return b-a;

}
int main(){
    math m;
    cout<<m.add(5,10)<<endl;
    cout<<m.subtract(20,30)<<endl;
}

