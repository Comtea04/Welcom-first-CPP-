#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, max=-2147483648, min = 214748347;
    cout << "������ ����: ";
    cin >> n;

    vector <int> integers;
    for (int i=0; i<n; i++) {
        int tmp;
        cout << "������ �Է��Ͻÿ�: ";
        cin >> tmp;

        integers.push_back(tmp);

        if (tmp < min) min = tmp;
        if (tmp > max) max = tmp;
    }

    cout << "�ִ밪:  " << max << endl;
    cout << "�ּҰ�:  " << min << endl;

    return 0;
}