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
        cout << "상자의 길이: " << box.length << endl;
        cout << "상자의 너비: " << box.width << endl;
        cout << "상자의 높이: " << box.height << endl;
        cout << "상자의 부피: " << box.getVolume() << endl;
    }
};

int main() {
    Box a{10, 10, 10};

    cout << "상자 #1" << endl;
    printBox(a);

    return 0;
}