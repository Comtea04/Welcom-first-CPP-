#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "�󸶳� ���� �̸��� �Է� �Ͻðڽ��ϱ�? ";
    cin >> n;

    string* p = new string[n];
    for (int i=0; i<n; i++) {
        cout << "�̸� �Է� # " << i+1 << ": ";
        cin >> p[i];
    }
    cout << endl;

    cout << "������ �̸� ����Դϴ�." << endl;
    for (int i=0; i<n; i++) {
        cout << "�̸� #" << i+1 << ": " << p[i] << endl;
    }

    delete p;

    return 0;
}