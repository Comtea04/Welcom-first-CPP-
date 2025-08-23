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
        cout << "상자의 길이: " << length << endl;
        cout << "상자의 너비: " << width << endl;
        cout << "상자의 높이: " << height << endl;
        cout << "상자의 부피: " << getVolume() << endl;
    }
};

int main() {
    Box a{10, 10, 10}, b{20,20,20}, c;
    c = a+b;

    cout << "상자 #1" << endl;
    a.print();
    cout << endl;

    cout << "상자 #2" << endl;
    b.print();
    cout << endl;

    cout << "상자 #3" << endl;
    c.print();

    return 0;
}