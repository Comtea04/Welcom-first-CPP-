#include <iostream>

using namespace std;

template <class T>
class Circle {
    T x, y;
    double radius;          // 반지름은 말 없어서 그냥 실수형으로 했음. 이러면 정수 입력해도 실수처럼 연산해줌
public:
    Circle(T x, T y, double r) : x(x), y(y), radius(r) { }

    double area() const { return 3.14*radius*radius; }
};

int main() {
    Circle<double> circleA(0.0, 0.0, 10.0);
    cout << "면적: " << circleA.area() << endl;
    return 0;
}