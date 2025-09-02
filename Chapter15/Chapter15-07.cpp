#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    list<int> years = {2012, 2013, 2014};

    cout << "저장된 연도: ";
    for (int& i : years) {
        cout << i << " ";
    }
    cout << endl;

    // 윤년 판단 람다 함수
    auto isLeapYear = [](int x) {
        if (x%4==0) {
            if (x%100==0) {
                if (x%400==0) {
                    return true;
                }
                return false;
            }
            return true;
        }
        return false;
    };

    // find_if로 윤년을 찾음
    auto it = find_if(years.begin(), years.end(), isLeapYear);

    // 윤년이 있다면 출력
    if (it != years.end()) {
        cout << "윤년은: " << *it << endl;  // 이터레이터를 통해 값을 출력
    } else {
        cout << "윤년이 없습니다." << endl;
    }

    return 0;
}