#include <iostream>
#include <string>

using namespace std;

// 부모 클래스
class Shape {
    int x, y;
    string color;
public:
    // 생성자
    Shape(int x, int y, string color) : x(x), y(y), color(color) { }

    // 설정자와 접근자
    void setX( int x ) { this->x = x; }
    void setY( int y ) { this->y = y; }
    int getX() const { return x; }
    int getY() const { return y; }

    // 도형 넓이 계산 함수
    double getArea() {
        return -1.00;
    }
};

// 자식 클래스
class Circle : public Shape{
    int radius;
public:
    // 생성자
    Circle(int x, int y, string color, int radius) : Shape(x, y, color), radius(radius) { }
    
    // 원에 대한 넓이 계산 함수로 재정의
    double getArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle obj {0, 0, "red", 20};

    cout << "원의 면적: " << obj.getArea() << endl;

    return 0;
}