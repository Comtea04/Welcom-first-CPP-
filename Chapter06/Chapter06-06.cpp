#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Contact {
    string name;
    string tel;
public:
    Contact(string n, string t) : name(n), tel(t) { }

    string getName() { return name; }
    string getTel() { return tel; }
};

int main() {
    vector <Contact> infos;

    for (int i=0; i<3; i++) {
        string name;
        cout << "�̸��� �Է��Ͻÿ� : ";
        cin >> name;

        string tel;
        cout << "��ȭ��ȣ�� �Է��Ͻÿ� : ";
        cin >> tel;

        infos.push_back(Contact(name, tel));
    }

    // Ž��
    string find;
    cout << "Ž���ϰ� ���� �̸��� �Է��Ͻÿ� : ";
    cin >> find;

    for (Contact& c : infos) {
        if (c.getName() == find) {
            cout << "��ȭ��ȣ : " << c.getTel() << endl;
            break;
        }
    }

    return 0;
}