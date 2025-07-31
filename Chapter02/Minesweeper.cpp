#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    char board[10][10];
    srand(time(NULL));
    
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            if (rand()%10 < 3)
                board[i][j] = '#';
            else
                board[i][j] = '.';
        }
    }
    
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}