#include <iostream>
#include <string>
#include <cctype>       // toupper()

using namespace std;

int main()
{
    string str;
    cout << "���ڿ��� �Է��Ͻÿ�: ";
    getline(cin, str);
    
    if ('a' < str[0] && str[0] < 'z') {
        str[0] = toupper(str[0]);
    }
    if (str.back() != '.') str += '.';
    
    cout << "��� ���ڿ�: " << str;
    
    return 0;
}