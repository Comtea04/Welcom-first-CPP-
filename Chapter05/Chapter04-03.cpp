#include <iostream>

using namespace std;

class Box {
    double length;
    double width;
    double height;

    public:
    Box() : length(0), width(0), height(0) { }
    Box(double l, double w, double h) : length(l), width(w), height(h) { }

    double getVolume() { return length*width*height; }

    bool empty(Box& b) {        // 박스가 비어있는지 확인(어떤식으로 확인해야 되는지 모르곘음)
        if (b.getVolume() == 0) return true;
        else return false;
    }

    void print(Box& b) {
        cout << "상자의 길이: " << length << endl;
        cout << "상자의 너비: " << width << endl;
        cout << "상자의 높이: " << height << endl;
        cout << "상자의 부피: " << b.getVolume() << endl;
    }
    
    double getHeight() { return height; }
    double getLength() { return length; }
    double getWidth() { return width; }

    void setHeight(double height_) { height = height_; }
    void setLength(double length_) { length = length_; }
    void setWidth(double width_) { width = width_; }
};

int main() {
    Box obj1;
    cout << "상자 #1" << endl;
    obj1.print(obj1);
    cout << endl;
    
    Box obj2 {3, 2, 5};
    obj2.setHeight(4);
    cout << "상자 #2" << endl;
    obj2.print(obj2);
    
    return 0;
}