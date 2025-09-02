#include <iostream>
#include <list>

using namespace std;

int main() {
    list<string> males, females;

    cout << "미팅 주선 프로그램입니다" << endl;

    while (true) {
        string name;
        cout << endl;
        cout << "고객 이름: ";
        cin >> name;

        char sex;
        cout << "성별을 입력하세요(f or m): ";
        cin >> sex;

        if (sex == 'm') {
            if (females.empty()) {
                cout << "아직 여성 대상자가 없습니다. 기다려주십시요." << endl;
                males.push_back(name);
            } else {
                string female = females.front();
                cout << "커플이 탄생했습니다!" << female << "과 " << name << endl;
                females.pop_front();

                break;
            }
        } else if (sex == 'f') {
            if (males.empty()) {
                cout << "아직 남성 대상자가 없습니다. 기다려주십시요." << endl;
                females.push_back(name);
            } else {
                string male = males.front();
                cout << "커플이 탄생했습니다!" << male << "과 " << name << endl;
                males.pop_front();

                break;
            }
        } else {
            cout << "잘못된 성별입력입니다.";
        }
    }

    return 0;
}