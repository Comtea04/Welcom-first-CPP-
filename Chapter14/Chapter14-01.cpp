#include <iostream>

using namespace std;

int main() {
    int age;
    try {
        cout << "나이를 입력하시오: ";
        cin >> age;

        if (age<0) throw age;

        cout << "나이는 " << age << "입니다" << endl;
    } catch (int age) {
        cout << "오류: 양수를 입력하여야 함" << endl;
    }

    return 0;
}