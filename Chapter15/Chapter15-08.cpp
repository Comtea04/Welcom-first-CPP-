#include <iostream>
#include <list>

using namespace std;

int main() {
    list<string> males, females;

    cout << "���� �ּ� ���α׷��Դϴ�" << endl;

    while (true) {
        string name;
        cout << endl;
        cout << "�� �̸�: ";
        cin >> name;

        char sex;
        cout << "������ �Է��ϼ���(f or m): ";
        cin >> sex;

        if (sex == 'm') {
            if (females.empty()) {
                cout << "���� ���� ����ڰ� �����ϴ�. ��ٷ��ֽʽÿ�." << endl;
                males.push_back(name);
            } else {
                string female = females.front();
                cout << "Ŀ���� ź���߽��ϴ�!" << female << "�� " << name << endl;
                females.pop_front();

                break;
            }
        } else if (sex == 'f') {
            if (males.empty()) {
                cout << "���� ���� ����ڰ� �����ϴ�. ��ٷ��ֽʽÿ�." << endl;
                females.push_back(name);
            } else {
                string male = males.front();
                cout << "Ŀ���� ź���߽��ϴ�!" << male << "�� " << name << endl;
                males.pop_front();

                break;
            }
        } else {
            cout << "�߸��� �����Է��Դϴ�.";
        }
    }

    return 0;
}