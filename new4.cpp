#include <iostream>
using namespace std;
class math{
    public:
    inline int sqaure(int a){
        return a*a;

    }
};
int main(){
    math m;
    cout<<m.sqaure(10);
    return 0;
}