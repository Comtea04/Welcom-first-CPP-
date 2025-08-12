#include <iostream>

using namespace std;

int main()
{
    int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i=7; i<=12; i++) {
        cout << i << "월은 " << days[i-1] << "일까지 있습니다." << endl;
    }
    
    return 0;
}