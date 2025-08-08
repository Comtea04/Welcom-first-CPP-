#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, max=-2147483648, min = 214748347;
    cout << "정수의 개수: ";
    cin >> n;

    vector <int> integers;
    for (int i=0; i<n; i++) {
        int tmp;
        cout << "정수를 입력하시오: ";
        cin >> tmp;

        integers.push_back(tmp);

        if (tmp < min) min = tmp;
        if (tmp > max) max = tmp;
    }

    cout << "최대값:  " << max << endl;
    cout << "최소값:  " << min << endl;

    return 0;
}