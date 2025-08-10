#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "몇 개의 정수를 입력합니까? ";
    cin >> n;

    int* p = new int[n];

    for (int i=0; i<n; i++) {
        cout << "정수를 입력하시오 : ";
        cin >> p[i];
    }

    cout << "입력된 정수는: ";
    for (int i=0; i<n; i++) {
        cout << p[i] << ", ";
    }
    cout << endl;

    delete p;

    return 0;
}