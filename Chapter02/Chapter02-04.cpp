#include <iostream>

using namespace std;

int main()
{
    bool five = false;
    int num;
    
    for (int i=0; i<5; i++) {
        cout << "���ڸ� �Է��ϼ���: ";
        cin >> num;
        
        if (num == 5) five = true;
    }
    
    if (five)
        cout << "5�� �Է��Ͽ�����! ��ǻ�� ��" << endl;
    else
        cout << "�γ����� ���մϴ�. ����� ��" << endl;
    
    return 0;
}