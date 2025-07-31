#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int player;
    
    cout << "가위, 바위, 보 중에 하나를 선택하시오(1, 2, 3): ";
    cin >> player;
    
    int com = rand()%3 + 1;
    cout << "컴퓨터: " << com << endl;
    
    if (com == 1 && player == 3) {
        com = 4;
    }
    
    if (com == 3 && player == 1) {
        player = 4;
    }
    
    if (com == player)
        cout << "비겼습니다" << endl;
    else
        cout << ((com < player) ? "사용자" : "컴퓨터") << "승!" << endl;
    
    return 0;
}