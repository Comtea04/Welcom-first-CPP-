#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    
    int pos_x, pos_y;
    int arr[3][3] = {0, };      // 3x3 보드는 0으로 초기화화
    int player = 1;
    bool game_stop = false;
    
    while (!game_stop) {
        
        if (player++ % 2 == 1) {
            // 둘 수 있을 때
            cout << "(x,y) 좌표: ";
            cin >> pos_x >> pos_y;
            
            if (arr[pos_y][pos_x] != 0) {
                cout << "잘못된 칸입니다. 다시 입력하세요" << endl;
                player--;
                continue;
            }
            
            arr[pos_y][pos_x] = 1;   // 1부터 시작한 player 정수는 입력 시도마다 1씩 증가함. 홀수면 X플레이어, 짝수면 O컴퓨터로 정함
        }
        else {                      // 컴퓨터 차례
            // 선택 가능한 칸 계산
            int selectable[9][2];
            int selectable_cnt = 0;
            
            // 선택가능한 테두리 칸을 selectable 2차원 배열에 저장
            for (int i=0; i<3; i++) {
                for (int j=0; j<3; j++) {
                    if ( arr[i][j] == 0 ) {
                        selectable[selectable_cnt][0] = i;
                        selectable[selectable_cnt][1] = j;
                        
                        selectable_cnt++;
                    }
                }
            }
            
            // 그 중 랜덤으로 한 칸을 선택
            int random = rand()%selectable_cnt;
            
            pos_x = selectable[random][1];
            pos_y = selectable[random][0];
            
            arr[pos_y][pos_x] = -1;                    // 보드에 적용 시 X는 +1, O는 -1로 표기
            // printf("1\n");
            cout << "컴퓨터의 좌표: " << pos_x << " " << pos_y << endl;
        }
        
        for (int i=0; i<7; i++) {
            switch (i) {
                case 0: case 2: case 4: case 6:
                    cout << "---|---|---";
                    break;
                
                default:
                    for (int j=0; j<3; j++) {
                        if (arr[i/2][j] > 0)        // i가 홀수(1, 3, 5)일 때 각각 i/2는 0, 1, 2가 됨
                            cout << " X ";
                        else if (arr[i/2][j] < 0)
                            cout << " O ";
                        else cout << "   ";
                        
                        if (j<=1) cout << "|";
                    }
            }
            cout << endl;
        }
        
        // 승자 구하기
        for (int i=0; i<3; i++) {
            // 가로
            if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]) {
                if (arr[i][0] == 1) {
                    cout << "플레이어 승리!" << endl;
                    game_stop = true;
                    break;
                }
                else if (arr[i][0] == -1) {
                    cout << "컴퓨터 승리!" << endl;
                    game_stop = true;
                    break;
                }
            }
            
            // 세로
            if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i]) {
                if (arr[0][i] == 1) {
                    cout << "플레이어 승리!" << endl;
                    game_stop = true;
                    break;
                }
                else if (arr[0][i] == -1) {
                    cout << "컴퓨터 승리!" << endl;
                    game_stop = true;
                    break;
                }
            }
            
            // 대각선
            if ((arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) || (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])) {
                if (arr[1][1] == 1) {
                    cout << "플레이어 승리!" << endl;
                    game_stop = true;
                    break;
                }
                else if (arr[1][1] == -1) {
                    cout << "컴퓨터 승리!" << endl;
                    game_stop = true;
                    break;
                }
            }
        }
        
        // 무승부인가?
        if (player >= 11) {
            cout << "무승부";
            game_stop = true;
            break;
        }
    
    }

    return 0;
}