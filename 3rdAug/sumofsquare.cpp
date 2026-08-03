#include <cstdarg>
#include <iostream>
using namespace std;
int square(int count, ...) {
    va_list args;   
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; i++) {
        int j=va_arg(args, int)*va_arg(args, int);
        total += j;
    }
    va_end(args);       
    return total;
}
int main() {
    cout << square(3, 10, 20, 30); 
    return 0;
}