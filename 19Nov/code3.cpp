// Create a base class Bank with a function getInterestRate(). Derive SBI, HDFC and ICICI classes and override the function.

#include <iostream>
using namespace std;

class Bank {
public:
    virtual void getInterestRate() {
        cout << "Bank Interest Rate" << endl;
    }
};

class SBI : public Bank {
public:
    void getInterestRate() override {
        cout << "SBI Interest Rate: 7%" << endl;
    }
};

class HDFC : public Bank {
public:
    void getInterestRate() override {
        cout << "HDFC Interest Rate: 7.5%" << endl;
    }
};

class ICICI : public Bank {
public:
    void getInterestRate() override {
        cout << "ICICI Interest Rate: 8%" << endl;
    }
};

int main() {
    SBI s;
    HDFC h;
    ICICI i;

    s.getInterestRate();
    h.getInterestRate();
    i.getInterestRate();

    return 0;
}