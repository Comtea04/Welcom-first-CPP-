#include <iostream>

using namespace std;

int main()
{
    int pos_x, pos_y;
    int arr[3][3] = {0, };      // 3x3 ����� 0���� �ʱ�ȭȭ
    int player = 1;
    
    while (true) {
        cout << "(x,y) ��ǥ: ";
        cin >> pos_x >> pos_y;
        
        if (player++ % 2 == 1) arr[pos_y][pos_x] = 1;   // 1���� ������ player ������ �Է� �õ����� 1�� ������. Ȧ���� X�÷��̾�, ¦���� O�÷��̾�� ����
        else arr[pos_y][pos_x] = -1;                    // �̸� ���忡 ���� �� X�� +1, O�� -1�� ǥ��
        
        for (int i=0; i<7; i++) {
            switch (i) {
                case 0: case 2: case 4: case 6:
                    cout << "---|---|---";
                    break;
                
                default:
                    for (int j=0; j<3; j++) {
                        if (arr[i/2][j] > 0)        // i�� Ȧ��(1, 3, 5)�� �� ���� i/2�� 0, 1, 2�� ��
                            cout << " X ";
                        else if (arr[i/2][j] < 0)
                            cout << " O ";
                        else cout << "   ";
                        
                        if (j<=1) cout << "|";
                    }
            }
            cout << endl;
        }
        
    
    }

    return 0;
}