#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    
    double cash=50, bets=0, win=0;      // ������ �� �� ���Ǹ� ���� �Ǽ������� ����(���� ����)
    cout << "�ʱ� �ݾ� $50" << endl;
    cout << "��ǥ �ݾ� $250" << endl;
    
    while (0 < cash && cash <250) {
        bets++;
        if (rand()%2==1) {      // �¸�
            cash++;
            win++;
        }
        else             cash--;    // �й�
    }
    
    cout << bets << " ���� " << win << "�� �¸�" << endl;
    cout << "�̱� Ȯ��=" << (win / bets) << endl;
    
    
    return 0;
}