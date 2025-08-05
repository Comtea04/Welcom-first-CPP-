#include <iostream>

using namespace std;

class Box {
    double length;
    double width;
    double height;

    public:
    double getVolume() {
        return length*width*height;
    }

    double getHeight() {
        return height;
    }

    void setHeight(double height_) {
        height = height_;
    }
    
    double getLength() {
        return length;
    }

    void setLength(double length_) {
        length = length_;
    }

    double getWidth() {
        return width;
    }

    void setWidth(double width_) {
        width = width_;
    }
};

int main() {
    Box obj;

    obj.setLength(6);
    obj.setWidth(7);
    obj.setHeight(5);
    
    cout << "[" << obj.getLength() << "," << obj.getWidth() << "," << obj.getHeight() << "]" << endl;

    cout << "상자의 부피: " << obj.getVolume() << endl;
    
    return 0;
}