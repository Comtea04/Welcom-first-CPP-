#include <iostream>
#include <string>

using namespace std;

int main()
{
    string max="", str;
    
    for (int i=0; i<5; i++) {
        cout << "���ڿ��� �Է��Ͻÿ�:: ";
        cin >> str;
        
        if (str.size() > max.size()) max = str;
    }
    
    cout << "���� �� ���ڿ�:  " << max << endl;
    
    return 0;
}