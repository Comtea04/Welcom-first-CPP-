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

    cout << "�غ��� " << obj.b << "�̰� ���̰� " << obj.h << "�� �ﰢ���� ����: " << obj.area();
    
    return 0;
}