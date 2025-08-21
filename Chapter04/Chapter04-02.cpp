#include <iostream>
#include <string>

using namespace std;

class Computer {
    string name;
    int RAM;
    double cpu_speed;

    public:
    void setComputer(string name_, int RAM_, double cpu_speed_) {
        name = name_;
        RAM = RAM_;
        cpu_speed = cpu_speed_;
    }

    void print() {
        cout << "이름: " << name << endl;
        cout << "RAM: " << RAM << endl;
        cout << "CPU 속도: " << cpu_speed << endl;
    }
};

int main() {
    Computer obj;
    
    obj.setComputer("오피스컴퓨터", 8, 4.2);
    obj.print();

    return 0;
}