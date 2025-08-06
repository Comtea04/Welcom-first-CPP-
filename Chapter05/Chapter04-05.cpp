#include <iostream>

using namespace std;

class Complex {
    double r;
    double i;

    public:
    Complex() : r(0), i(0) { }
    Complex(double r_, double i_) : r(r_), i(i_) { }

    void print() {
        cout << r << (i>=0 ? " + " : " - ") << (i>=0 ? i : -i) << "i";
    }

    double getR() { return r ;}
    double getI() { return i ;};
    void setR(double r_) { r = r_; }
    void setI(double i_) { i = i_; }
    
};

Complex add(Complex a, Complex b) {
        Complex c;
        c.setR(a.getR() + b.getR());
        c.setI(a.getI() + b.getI());

        return c;
    }

int main() {
    Complex obj1;
    obj1.setR(5);
    obj1.setI(3);

    Complex obj2 {3, -4};

    cout << "(";
    obj1.print();
    cout << ")+(";
    obj2.print();
    cout << ")=(";
    add(obj1, obj2).print();
    cout << ")" << endl;
    
    return 0;
}