#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    
    int a = rand()%6+1;
    int b = rand()%6+1;
    
    cout << "사용자의 주사위:  " << a << "+" << b << "=" << a+b << endl;
    
    if (a+b == 7 || a+b==11)
        cout << "사용자가 이겼습니다." << endl;
    else
        cout << "사용자가 졌습니다." << endl;
    
    return 0;
}