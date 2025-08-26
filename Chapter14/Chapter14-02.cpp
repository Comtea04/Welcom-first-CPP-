#include <iostream>
#include <string>
#include <time.h>

using namespace std;

// 가위바위보 선택 함수
string RSP_choose() {
    string com;
        int temp = rand()%3;
        if (temp==0) com = "가위";
        else if (temp==1) com = "바위";
        else com = "보";
    
    return com;
}

// 가위바위보 승자 판단 함수(유효한 매개변수만 가능)
int RSP_win(string RSP1, string RSP2) {
    // 비긴 경우
    if (RSP1==RSP2) return 0;

    // 유저가 이기는 경우
    if ((RSP1 == "가위" && RSP2 == "보") ||
        (RSP1 == "바위" && RSP2 == "가위") ||
        (RSP1 == "보" && RSP2 == "바위")) {
        return 1;
    }
    
    // 그 외는 모두 유저가 지는 경우
    return -1;
}

int main() {
    srand(time(NULL));

    string choose;
    try {
        cout << "무엇을 내시겠습니까: ";
        cin >> choose;

        // 유저 입력이 유효하지 않은 경우 예외처리
        if (!(choose=="가위" || choose=="바위" || choose=="보")) throw choose;
        
        // 컴퓨터의 선택 생성
        string com = RSP_choose();
        cout << "컴퓨터는 " << com << endl;

        // 승자 출력
        int result = RSP_win(choose, com);
        if (result == 1) cout << "유저가 이겼습니다.";
        else if (result == 0) cout << "비겼습니다.";
        else cout << "컴퓨터가 이겼습니다.";
        cout << endl;

    } catch (string choose) {
        cout << "오류: \"가위\", \"바위\", \"보\" 중에서만 선택하세요." << endl;
    }

    return 0;
}