#include <iostream>

using namespace std;

int main()
{
    char oper;
    cout << "������ ����: ";
    cin >> oper;
    
    double a, b;
    cout << "���ڸ� �Է��Ͻÿ�: ";
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
            else cout << "�������� ������ �� �����ϴ�" << endl;
    }
    
    cout << "����� ���: " << ans << endl;
    
    return 0;
}