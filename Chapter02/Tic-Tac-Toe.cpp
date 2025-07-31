#include <iostream>

using namespace std;

int main()
{
    int pos_x, pos_y;
    int arr[3][3] = {0, };      // 3x3 보드는 0으로 초기화화
    int player = 1;
    
    while (true) {
        cout << "(x,y) 좌표: ";
        cin >> pos_x >> pos_y;
        
        if (player++ % 2 == 1) arr[pos_y][pos_x] = 1;   // 1부터 시작한 player 정수는 입력 시도마다 1씩 증가함. 홀수면 X플레이어, 짝수면 O플레이어로 정함
        else arr[pos_y][pos_x] = -1;                    // 이를 보드에 적용 시 X는 +1, O는 -1로 표기
        
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
        
    
    }

    return 0;
}