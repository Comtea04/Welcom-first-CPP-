#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <time.h>

using namespace std;

// 사전 사전 설정(엌ㅋㅋ)
void dict_init(map<string, string>& dict) {
    dict["boy"] = "소년";
    dict["school"] = "학교";
    dict["office"] = "직장";
    dict["house"] = "집";
    dict["morning"] = "아침";
    dict["evening"] = "저녁";
}

// 메뉴별로 함수로 만들었음. 이렇게 하면 깔끔하고 유지보수가 좋아짐
void add_word(map<string, string>& dict) {
    string word;
    cout << "추가할 단어: ";
    cin >> word;

    string meaning;
    cout << "추가할 의미: ";
    cin >> meaning;

    dict[word] = meaning;
}

void test_word(map<string, string>& dict) {

}

int main() {
    srand(time(NULL));

    // 맵 구조 사전 생성
    map<string, string> dict;
    dict_init(dict);
    
    // 메인 루프
    while (true) {
        cout << "=============================================" << endl;
        cout << "단어 추가 : 1, 단어 테스트 : 2, 종료 : 3" << endl;
        cout << "=============================================" << endl;

        int choice;
        cout << "하나를 선택하세요 : ";
        cin >> choice;

        switch (choice)
        {
        case 1: add_word(dict); break;
        
        case 2: test_word(dict); break;

        case 3: cout << "프로그램을 종료합니다." << endl; break;

        default:        // 넣고 싶어서 넣었음
            cout << "잘못된 입력입니다. 다시 입력하세요" << endl;
        }
    }

    return 0;
}