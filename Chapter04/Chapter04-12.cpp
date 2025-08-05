#include <iostream>

using namespace std;

class Time {
    int hour;
    int minute;
    int second;

    public:
    void setTime(const int h, const int m, const int s) {
        hour = h;
        minute = m;
        second = s;
    }

    void print() {
        cout << (hour<10 ? "0" : "") << hour << ":" << minute << ":" << second << endl;
    }
};

int main() {
    Time obj;

    obj.setTime(7, 10, 20);

    obj.print();
    
    return 0;
}