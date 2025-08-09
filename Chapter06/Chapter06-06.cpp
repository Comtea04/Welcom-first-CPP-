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
        cout << "이름을 입력하시오 : ";
        cin >> name;

        string tel;
        cout << "전화번호를 입력하시오 : ";
        cin >> tel;

        infos.push_back(Contact(name, tel));
    }

    // 탐색
    string find;
    cout << "탐색하고 싶은 이름을 입력하시오 : ";
    cin >> find;

    for (Contact& c : infos) {
        if (c.getName() == find) {
            cout << "전화번호 : " << c.getTel() << endl;
            break;
        }
    }

    return 0;
}