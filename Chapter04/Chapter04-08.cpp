#include <iostream>

using namespace std;

class Complex {
    public:
    double r;
    double i;

    void print() {
        cout << r << (i>=0 ? " + " : " - ") << (i>=0 ? i : -i) << "i" << endl;
    }
};

int main() {
    Complex obj1;
    obj1.r = 5;
    obj1.i = 3;

    Complex obj2;
    obj2.r = 3;
    obj2.i = -4;

    obj1.print();
    obj2.print();
    
    return 0;
}