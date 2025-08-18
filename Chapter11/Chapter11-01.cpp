#include <iostream>

using namespace std;

class Point {
protected:
    int x, y;
public:
    Point(int x, int y) : x(x), y(y) { }
};

class ThreePoint : public Point {
    int z;
public:
    ThreePoint(int x, int y, int z) : Point(x,y) {
        this->z = z;
    }

    void print() {
        cout << "(" << x << "," << y << "," << z << ")" << endl;
    }
};

int main() {
    ThreePoint p(10, 10, 10);
    p.print();

    return 0;
}