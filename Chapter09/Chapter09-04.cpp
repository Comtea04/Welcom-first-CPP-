#include <iostream>
#include <string>

using namespace std;

class Point {
    double xval, yval;
public:
    Point(double x = 0.0, double y = 0.0) : xval(x), yval(y) { }

    void print() { cout << "(" << xval << "," << yval << ")" << endl; }

    double getX() { return xval; }
    double getY() { return yval; }
};

void swap(Point& A, Point& B) {
    Point tmp = A;
    A = B;
    B = tmp;
}

int main() {
    Point obj1(1.2, -2.8);
    Point obj2(3, 6);

    obj1.print();
    obj2.print();

    swap(obj1, obj2);

    obj1.print();
    obj2.print();

    return 0;
}