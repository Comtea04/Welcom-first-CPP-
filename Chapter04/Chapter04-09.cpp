#include <iostream>

using namespace std;

class Triangle {
    public:
    int b, h;

    double area() {
        return b*h/2.0;
    }
};

int main() {
    Triangle obj;
    obj.b = 3;
    obj.h = 4;

    cout << "밑변이 " << obj.b << "이고 높이가 " << obj.h << "인 삼각형의 면적: " << obj.area();
    
    return 0;
}