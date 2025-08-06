#include <iostream>

using namespace std;

class Date {
    int year;
    int month;
    int day;

    public:
    Date() : year(0), month(0), day(0) { }
    Date(int y, int m, int d) : year(y), month(m), day(d) { }

    bool isLeapYear() {
        if (year%4 == 0) {
            if (year%100 == 0) {
                if (year%400 == 0)
                    return true;
                else return false;
            }
            else return true;
        }
        else return false;
    }

    void print1() {
        cout << year << "." << month << "." << day << endl;
    }

    void print2() {     // 그냥 문제에서 중복정의 해보라고 해서 만듬
        cout << year << "|" << month << "|" << day << endl;
    }

    Date nextMonth() {
        Date next {year, month+1, day};
        return next;
    }


};

int main() {
    Date obj1 {2017, 9, 1};
    obj1.print1();

    Date obj2 = obj1.nextMonth();
    obj2.print1();     // 괄호 꼭 안해도 됨

    return 0;
}