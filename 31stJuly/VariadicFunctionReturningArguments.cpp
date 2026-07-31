#include <iostream>
#include <cstdarg>
using namespace std;
int countArguments(int count, ...) {
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++)
        va_arg(args, int);
    va_end(args);
    return count;
}

int main() {
    cout << "Number of arguments = " << countArguments(5, 10, 20, 30, 40, 50);
    return 0;
}