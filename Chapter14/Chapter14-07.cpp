#include <iostream>

using namespace std;

template <class T>
class Circle {
    T x, y;
    double radius;          // �������� �� ��� �׳� �Ǽ������� ����. �̷��� ���� �Է��ص� �Ǽ�ó�� ��������
public:
    Circle(T x, T y, double r) : x(x), y(y), radius(r) { }

    double area() const { return 3.14*radius*radius; }
};

int main() {
    Circle<double> circleA(0.0, 0.0, 10.0);
    cout << "����: " << circleA.area() << endl;
    return 0;
}