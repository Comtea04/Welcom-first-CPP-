#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int player;
    
    cout << "����, ����, �� �߿� �ϳ��� �����Ͻÿ�(1, 2, 3): ";
    cin >> player;
    
    int com = rand()%3 + 1;
    cout << "��ǻ��: " << com << endl;
    
    if (com == 1 && player == 3) {
        com = 4;
    }
    
    if (com == 3 && player == 1) {
        player = 4;
    }
    
    if (com == player)
        cout << "�����ϴ�" << endl;
    else
        cout << ((com < player) ? "�����" : "��ǻ��") << "��!" << endl;
    
    return 0;
}