#include <iostream>

using namespace std;

int main() {
    int age;
    try {
        cout << "���̸� �Է��Ͻÿ�: ";
        cin >> age;

        if (age<0) throw age;

        cout << "���̴� " << age << "�Դϴ�" << endl;
    } catch (int age) {
        cout << "����: ����� �Է��Ͽ��� ��" << endl;
    }

    return 0;
}