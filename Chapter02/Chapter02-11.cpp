#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cout << "n의 값을 입력하시오: ";
    cin >> n;
    
    int sum=0;
    for (int i=1; i<=n; i++) {
        sum += i*i;
    }
    
    cout << "계산값은 " << sum << "입니다." << endl;
    
    return 0;
}