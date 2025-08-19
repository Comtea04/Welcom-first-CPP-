#include <iostream>
#include <string>

using namespace std;

// �θ� Ŭ����
class Shape {
    int x, y;
    string color;
public:
    // ������
    Shape(int x, int y, string color) : x(x), y(y), color(color) { }

    // �����ڿ� ������
    void setX( int x ) { this->x = x; }
    void setY( int y ) { this->y = y; }
    int getX() const { return x; }
    int getY() const { return y; }

    // ���� ���� ��� �Լ�
    double getArea() {
        return -1.00;
    }
};

// �ڽ� Ŭ����
class Circle : public Shape{
    int radius;
public:
    // ������
    Circle(int x, int y, string color, int radius) : Shape(x, y, color), radius(radius) { }
    
    // ���� ���� ���� ��� �Լ��� ������
    double getArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle obj {0, 0, "red", 20};

    cout << "���� ����: " << obj.getArea() << endl;

    return 0;
}