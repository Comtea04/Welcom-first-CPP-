#include <iostream>

using namespace std;

class Box {
    double length;
    double width;
    double height;
public:
    Box(double l=0, double w=0, double h=0) : length(l), width(w), height(h) { }
    double getVolume(void) const{
        return length*width*height;
    }
    Box operator+ (const Box& obj2) {
        Box obj1 {length+obj2.length, width+obj2.width, height+obj2.height};
        return obj1;
    }
    void print() {
        cout << "������ ����: " << length << endl;
        cout << "������ �ʺ�: " << width << endl;
        cout << "������ ����: " << height << endl;
        cout << "������ ����: " << getVolume() << endl;
    }
};

int main() {
    Box a{10, 10, 10}, b{20,20,20}, c;
    c = a+b;

    cout << "���� #1" << endl;
    a.print();
    cout << endl;

    cout << "���� #2" << endl;
    b.print();
    cout << endl;

    cout << "���� #3" << endl;
    c.print();

    return 0;
}