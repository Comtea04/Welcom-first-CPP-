#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "�� ���� ������ �Է��մϱ�? ";
    cin >> n;

    int* p = new int[n];

    for (int i=0; i<n; i++) {
        cout << "������ �Է��Ͻÿ� : ";
        cin >> p[i];
    }

    cout << "�Էµ� ������: ";
    for (int i=0; i<n; i++) {
        cout << p[i] << ", ";
    }
    cout << endl;

    delete p;

    return 0;
}