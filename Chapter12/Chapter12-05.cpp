#include <iostream>
#include <string>

using namespace std;

class Time {
    int hours;
    int minutes;

public:
    Time(int hours, int minutes) : hours(hours), minutes(minutes) { }
    ~Time() { }

    Time& operator++() {
        minutes++;
        if (minutes == 60) {
            hours++;
            minutes = 0;
        }
        // hour + (++minutes/60);       // �̷��� �ص� ��
        // minutes%=60;

        return *this;
    }
    
    void displayTime() {
        cout << hours << ": " << minutes << endl;
    }
};

int main() {
    Time myTime {10, 59};
    myTime.displayTime();
    
    ++myTime;
    myTime.displayTime();

    ++myTime;
    myTime.displayTime();

    return 0;
}