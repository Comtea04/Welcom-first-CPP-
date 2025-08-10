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
        cout << "Time ��ü: " << hour << ":" << minute << ":" << second << endl;
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

    if (isEqual(A, B)) cout << "�ð��� ��ġ�մϴ�." << endl;
    else cout << "�ð��� ��ġ���� �ʽ��ϴ�." << endl;

    Time* pA = &A;
    Time* pB = &B;

    if (isEqual(pA, pB)) cout << "�ð��� ��ġ�մϴ�." << endl;
    else cout << "�ð��� ��ġ���� �ʽ��ϴ�." << endl;

    return 0;
}