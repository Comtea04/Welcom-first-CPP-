#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "얼마나 많은 이름을 입력 하시겠습니까? ";
    cin >> n;

    string* p = new string[n];
    for (int i=0; i<n; i++) {
        cout << "이름 입력 # " << i+1 << ": ";
        cin >> p[i];
    }
    cout << endl;

    cout << "다음은 이름 목록입니다." << endl;
    for (int i=0; i<n; i++) {
        cout << "이름 #" << i+1 << ": " << p[i] << endl;
    }

    delete p;

    return 0;
}