#include <iostream>

using namespace std;

int main() {
    int capital=0, small=0, number=0;
    string pw;

    cout << "��ȣ�� �Է��Ͻÿ�:  ";
    cin >> pw;

    for (char c : pw) {
        if ('A' < c && c < 'Z') capital++;
        if ('a' < c && c < 'z') small++;
        if ('0' < c && c < '9') number++;
    }

    if (capital * small * number != 0)
        cout << "�����մϴ�." << endl;
    else
        cout << "�������� �ʽ��ϴ�." << endl;
}