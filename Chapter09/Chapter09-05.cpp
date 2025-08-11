#include <iostream>
#include <string>

using namespace std;

class Box {
    double length;
    double width;
    double height;
public:
    static int count;
    Box(double l = 2.0, double w = 2.0, double h = 2.0) {
        length = l;
        width = w;
        height = h;
        count++;
    }
    double volume() {
        return length*width*height;
    }
    static int getCount() {
        return count;
    }
};

int Box::count = 0;

int main() {
    Box b1;
    Box b2(3, 4, 5);

    cout << "ÀüÃ¼ °´Ã¼ ¼ö: " << Box::getCount() << endl;

    return 0;
}