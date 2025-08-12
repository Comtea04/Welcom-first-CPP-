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
    bool operator== (const Box& obj2) {
        Box obj1 {length, width, height};
        if (obj1.getVolume()==obj2.getVolume())
            return true;
        else return false;
    }
    void print() {
        cout << "������ ����: " << length << endl;
        cout << "������ �ʺ�: " << width << endl;
        cout << "������ ����: " << height << endl;
        cout << "������ ����: " << getVolume() << endl;
    }
};

int main() {
    cout << boolalpha;
    Box a{10, 10, 10}, b{20,20,20};

    cout << "���� #1" << endl;
    a.print();
    cout << endl;

    cout << "���� #2" << endl;
    b.print();
    cout << endl;

    cout << (a==b) << endl;

    return 0;
}