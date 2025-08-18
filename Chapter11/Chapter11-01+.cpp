#include <iostream>

using namespace std;

class Point {
protected:
    int x, y;
public:
    Point(int x=0, int y=0) : x(x), y(y) { }

    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }
    int getX() const { return x; }
    int getY() const { return y; }
};

class ThreePoint : public Point {
    int z;
public:
    ThreePoint(int x=0, int y=0, int z=0) : Point(x,y) {
        this->z = z;
    }

    ThreePoint operator+ (const ThreePoint& obj2) const {
        ThreePoint obj1;

        obj1.setX( this->x + obj2.x );
        obj1.setY( this->y + obj2.y );
        obj1.setZ( this->z + obj2.z );

        return obj1;
    }

    void print() {
        cout << "(" << x << "," << y << "," << z << ")" << endl;
    }

    void setZ(int z) { this->z = z; }
    int getZ() const { return z; }
};

int main() {
    ThreePoint p1(10, 10, 10);
    ThreePoint p2(10, 10, 10);
    ThreePoint p3;

    p3 = p1 + p2;

    p3.print();

    return 0;
}