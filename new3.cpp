#include <iostream>
using namespace std;
class Swap{
    public:
    void swapbyvalue(int *a , int *b){

        int temp =*a;
        *a=*b;
        *b=temp;
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    Swap s;
    int a,b;
    cin>>a>>b;
    s.swapbyvalue(&a,&b);
    cout<<a<<" "<<b<<endl;
    
}