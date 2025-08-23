#include <iostream>

using namespace std;

class Shape {
    int x, y;
public:
    virtual double getArea() = 0;
};

// 사각형 클래스
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

// 원 클래스
class Circle : public Shape {
    int radius;
public:
    Circle(int radius) : radius(radius) { }
    ~Circle() { }

    double getArea() {
        return 3.14*radius*radius;
    }
};

// 삼각형 클래스
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
    // 각 객체를 Shape* 포인터 배열 속에 동적으로 저장
    Shape* list[3] = {new Rect{41, 67}, new Circle(69), new Traiangle(29, 124)};

    for (int i=0; i<3; i++) {
        cout << "도형 #" << i << "의 면적: " << list[i]->getArea() << endl;
    }

    // 동적 메모리 해제
    for (int i=9; i<3; i++) delete list[i];

    return 0;
}