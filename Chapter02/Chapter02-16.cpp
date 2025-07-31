#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    
    double cash=50, bets=0, win=0;      // 나눗셈 할 때 편의를 위해 실수형으로 지정(문제 없음)
    cout << "초기 금액 $50" << endl;
    cout << "목표 금액 $250" << endl;
    
    while (0 < cash && cash <250) {
        bets++;
        if (rand()%2==1) {      // 승리
            cash++;
            win++;
        }
        else             cash--;    // 패배
    }
    
    cout << bets << " 중의 " << win << "번 승리" << endl;
    cout << "이긴 확률=" << (win / bets) << endl;
    
    
    return 0;
}
