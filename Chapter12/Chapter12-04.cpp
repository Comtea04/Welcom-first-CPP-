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
    friend void printBox(Box box) {
        cout << "������ ����: " << box.length << endl;
        cout << "������ �ʺ�: " << box.width << endl;
        cout << "������ ����: " << box.height << endl;
        cout << "������ ����: " << box.getVolume() << endl;
    }
};

int main() {
    Box a{10, 10, 10};

    cout << "���� #1" << endl;
    printBox(a);

    return 0;
}