#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <time.h>

using namespace std;

// 사전 사전 설정
void dict_init(map<string, string>& dict) {
    dict["boy"] = "소년";
    dict["school"] = "학교";
    dict["office"] = "직장";
    dict["house"] = "집";
    dict["morning"] = "아침";
    dict["evening"] = "저녁";
}

int main() {
    srand(time(NULL));

    // 맵 구조인 사전 생성
    map<string, string> dict;
    dict_init(dict);

    // 문제에서 가정한 단어 배열
    string words[dict.size()] = {"boy", "school", "office", "house", "morning", "evening"};
    string answers[4] = {"저녁", "소년", "학교", "직장"};

    // 메인 루프
    while (true) {
        int index = rand() % dict.size();

        int n;
        cout << words[index] << "의 의미는? (1)저녁(2)소년(3)학교(4)직장" << endl;
        cout << "번호를 선택하시오: ";
        cin >> n;

        string answer = answers[n-1];
        if (dict[words[index]]==answer) cout << "맞았습니다." << endl;
        else cout << "틀렸습니다." << endl;
    }   // 종료자가 없는 것 같음

    return 0;
}