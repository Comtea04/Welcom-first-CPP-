#include <iostream>
#include <string>

using namespace std;

int main()
{
    string max="", str;
    
    for (int i=0; i<5; i++) {
        cout << "문자열을 입력하시오:: ";
        cin >> str;
        
        if (str.size() > max.size()) max = str;
    }
    
    cout << "제일 긴 문자열:  " << max << endl;
    
    return 0;
}