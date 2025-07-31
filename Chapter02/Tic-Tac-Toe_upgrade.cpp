#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    
    int pos_x, pos_y;
    int arr[3][3] = {0, };      // 3x3 ����� 0���� �ʱ�ȭȭ
    int player = 1;
    bool game_stop = false;
    
    while (!game_stop) {
        
        if (player++ % 2 == 1) {
            // �� �� ���� ��
            cout << "(x,y) ��ǥ: ";
            cin >> pos_x >> pos_y;
            
            if (arr[pos_y][pos_x] != 0) {
                cout << "�߸��� ĭ�Դϴ�. �ٽ� �Է��ϼ���" << endl;
                player--;
                continue;
            }
            
            arr[pos_y][pos_x] = 1;   // 1���� ������ player ������ �Է� �õ����� 1�� ������. Ȧ���� X�÷��̾�, ¦���� O��ǻ�ͷ� ����
        }
        else {                      // ��ǻ�� ����
            // ���� ������ ĭ ���
            int selectable[9][2];
            int selectable_cnt = 0;
            
            // ���ð����� �׵θ� ĭ�� selectable 2���� �迭�� ����
            for (int i=0; i<3; i++) {
                for (int j=0; j<3; j++) {
                    if ( arr[i][j] == 0 ) {
                        selectable[selectable_cnt][0] = i;
                        selectable[selectable_cnt][1] = j;
                        
                        selectable_cnt++;
                    }
                }
            }
            
            // �� �� �������� �� ĭ�� ����
            int random = rand()%selectable_cnt;
            
            pos_x = selectable[random][1];
            pos_y = selectable[random][0];
            
            arr[pos_y][pos_x] = -1;                    // ���忡 ���� �� X�� +1, O�� -1�� ǥ��
            // printf("1\n");
            cout << "��ǻ���� ��ǥ: " << pos_x << " " << pos_y << endl;
        }
        
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
        
        // ���� ���ϱ�
        for (int i=0; i<3; i++) {
            // ����
            if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]) {
                if (arr[i][0] == 1) {
                    cout << "�÷��̾� �¸�!" << endl;
                    game_stop = true;
                    break;
                }
                else if (arr[i][0] == -1) {
                    cout << "��ǻ�� �¸�!" << endl;
                    game_stop = true;
                    break;
                }
            }
            
            // ����
            if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i]) {
                if (arr[0][i] == 1) {
                    cout << "�÷��̾� �¸�!" << endl;
                    game_stop = true;
                    break;
                }
                else if (arr[0][i] == -1) {
                    cout << "��ǻ�� �¸�!" << endl;
                    game_stop = true;
                    break;
                }
            }
            
            // �밢��
            if ((arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) || (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])) {
                if (arr[1][1] == 1) {
                    cout << "�÷��̾� �¸�!" << endl;
                    game_stop = true;
                    break;
                }
                else if (arr[1][1] == -1) {
                    cout << "��ǻ�� �¸�!" << endl;
                    game_stop = true;
                    break;
                }
            }
        }
        
        // ���º��ΰ�?
        if (player >= 11) {
            cout << "���º�";
            game_stop = true;
            break;
        }
    
    }

    return 0;
}