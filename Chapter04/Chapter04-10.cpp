#include <iostream>

using namespace std;

class BankAccount {
    string number;
    int balance;

    public:
    void init(string number_, int balance_) {
        number = number_;
        balance = balance_;

        cout << "현재 잔액: " << balance << endl;
    }

    void deposit(int money) {
        balance += money;
        cout << "after deposit(" << money << ") 현재 잔액: " << balance << endl;
    }

    void withdraw(int money) {
        balance -= money;
        cout << "after withdraw(" << money << ") 현재 잔액: " << balance << endl;
    }
};

int main() {
    BankAccount obj;
    obj.init("12345678", 1000000);

    obj.deposit(1000000);

    obj.withdraw(1000000);
    
    return 0;
}