#include <iostream>

using namespace std;

int main()
{
    char oper;
    cout << "연산의 종류: ";
    cin >> oper;
    
    double a, b;
    cout << "숫자를 입력하시오: ";
    cin >> a >> b;
    
    double ans;
    switch (oper) {
        case '+':
            ans = a+b;
            break;
        case '-':
            ans = a-b;
            break;
        case '*':
            ans = a*b;
            break;
        case '/':
            if (b!=0) {
                ans = a/b;
                break;
            }
            else cout << "나눗셈을 수행할 수 없습니다" << endl;
    }
    
    cout << "계산의 결과: " << ans << endl;
    
    return 0;
}