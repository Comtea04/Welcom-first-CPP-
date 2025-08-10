#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Time {
    int hour;
    int minute;
    int second;
public:
    Time() : hour(0), minute(0), second(0) { }
    Time(int h, int m, int s) : hour(h), minute(m), second(s) { }
    ~Time() { }

    void print() {
        cout << "Time 객체: " << hour << ":" << minute << ":" << second << endl;
    }

    void setHour(int hour) { this->hour = hour; }
    void setMinute(int minute) { this->minute = minute; }
    void setSecond(int second) { this->second = second; }
    int getHour() const { return hour; }
    int getMinute() const { return minute; }
    int getSecond() const { return second; }
};

bool isEqual(Time& t1, Time& t2) {
    if (t1.getHour() == t2.getHour()) {
        if (t1.getMinute() == t2.getMinute()) {
            if (t1.getSecond() == t2.getSecond()) {
                return true;
            }
        }
    }
    return false;

    // return (t1.getHour()==t2.getHour()) && (t1.getMinute()==t2.getMinute()) && (t1.getSecond()==t2.getSecond());
}
bool isEqual(Time *pt1, Time *pt2) {
    if (pt1->getHour() == pt2->getHour()) {
        if (pt1->getMinute() == pt2->getMinute()) {
            if (pt1->getSecond() == pt2->getSecond()) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    Time A {12, 11, 33};
    Time B {12, 11, 33};

    A.print();
    B.print();

    if (isEqual(A, B)) cout << "시간이 일치합니다." << endl;
    else cout << "시간이 일치하지 않습니다." << endl;

    Time* pA = &A;
    Time* pB = &B;

    if (isEqual(pA, pB)) cout << "시간이 일치합니다." << endl;
    else cout << "시간이 일치하지 않습니다." << endl;

    return 0;
}