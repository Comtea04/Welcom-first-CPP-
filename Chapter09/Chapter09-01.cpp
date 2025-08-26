#include <iostream>

using namespace std;

class Circle {
public:
    int x, y;
    int radius;

    Circle() : x(0), y(0), radius(0) { }
    Circle(int x, int y, int r) : x(x), y(y), radius(r) { }
    void print() { cout << "Circle(" << radius << ")" << endl; }
};

Circle getLargerCircle(const Circle& c1, const Circle& c2) {
    if (c1.radius > c2.radius) return c1;
    else return c2;
}

int main() {
    Circle c1;
    c1.radius = 10;
    c1.print();

    Circle c2;
    c2.radius = 20;
    c2.print();

    cout << "더 큰 원은 다음과 같다." << endl;
    getLargerCircle(c1, c2).print();

    return 0;
}