// create a  vector of integers then use auto keyword to iterate through it 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nos = {10, 20, 30, 40, 50};
    for(auto num : nos) {
        cout << num << " ";
    }
    return 0;
}