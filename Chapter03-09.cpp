#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    
    int a = rand()%6+1;
    int b = rand()%6+1;
    
    cout << "������� �ֻ���:  " << a << "+" << b << "=" << a+b << endl;
    
    if (a+b == 7 || a+b==11)
        cout << "����ڰ� �̰���ϴ�." << endl;
    else
        cout << "����ڰ� �����ϴ�." << endl;
    
    return 0;
}