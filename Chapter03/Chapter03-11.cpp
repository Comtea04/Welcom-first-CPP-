#include <iostream>
#include <string>
#include <cctype>       // toupper()

using namespace std;

int main()
{
    string str;
    cout << "문자열을 입력하시오: ";
    getline(cin, str);
    
    if ('a' < str[0] && str[0] < 'z') {
        str[0] = toupper(str[0]);
    }
    if (str.back() != '.') str += '.';
    
    cout << "결과 문자열: " << str;
    
    return 0;
}