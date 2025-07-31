#include <iostream>

using namespace std;

int main()
{
    bool five = false;
    int num;
    
    for (int i=0; i<5; i++) {
        cout << "숫자를 입력하세요: ";
        cin >> num;
        
        if (num == 5) five = true;
    }
    
    if (five)
        cout << "5를 입력하였군요! 컴퓨터 승" << endl;
    else
        cout << "인내심이 강합니다. 사용자 승" << endl;
    
    return 0;
}