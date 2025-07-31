#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    
    cout << "첫 번째 문자열: ";
    cin >> s1;
    
    cout << "두 번째 문자열: ";
    cin >> s2;
    
    if (s1 == s2)
        cout << "2개의 문자열은 같습니다." << endl;
    else
        cout << "2개의 문자열은 다릅니다." << endl;

    return 0;
}