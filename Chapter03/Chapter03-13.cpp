#include <iostream>

using namespace std;

int main() {
    int capital=0, small=0, number=0;
    string pw;

    cout << "암호를 입력하시오:  ";
    cin >> pw;

    for (char c : pw) {
        if ('A' < c && c < 'Z') capital++;
        if ('a' < c && c < 'z') small++;
        if ('0' < c && c < '9') number++;
    }

    if (capital * small * number != 0)
        cout << "안전합니다." << endl;
    else
        cout << "안전하지 않습니다." << endl;
}