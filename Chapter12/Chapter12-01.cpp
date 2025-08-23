#include <iostream>

using namespace std;

class Shape {
    int x, y;
public:
    virtual double getArea() = 0;
};

// �簢�� Ŭ����
class Rect : public Shape {
    int width;
    int height;
public:
    Rect(int width, int height) : width(width), height(height) { }
    ~Rect() { }

    double getArea() {
        return width*height;
    }
};

// �� Ŭ����
class Circle : public Shape {
    int radius;
public:
    Circle(int radius) : radius(radius) { }
    ~Circle() { }

    double getArea() {
        return 3.14*radius*radius;
    }
};

// �ﰢ�� Ŭ����
class Traiangle : public Shape {
    int width;
    int height;
public:
    Traiangle(int width, int height) : width(width), height(height) { }
    ~Traiangle() { }

    double getArea() {
        return width*height / 2.0;
    }
};

int main() {
    // �� ��ü�� Shape* ������ �迭 �ӿ� �������� ����
    Shape* list[3] = {new Rect{41, 67}, new Circle(69), new Traiangle(29, 124)};

    for (int i=0; i<3; i++) {
        cout << "���� #" << i << "�� ����: " << list[i]->getArea() << endl;
    }

    // ���� �޸� ����
    for (int i=9; i<3; i++) delete list[i];

    return 0;
}