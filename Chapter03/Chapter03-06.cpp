#include <iostream>
#include <string>
#include <algorithm>        // 책 151p에 remove()라고 있는데, erase()함수임

using namespace std;

int main()
{
    string call = ".";
    do {
        cout << "전화번호를 입력하시오: ";
        cin >> call;
        
        if (call=="quit") break;
        
        for (auto& c : call) {
            if (c=='(') call.erase(call.find('('), 1);
            if (c==')') call.erase(call.find(')'), 1);
        }
        cout << call << endl;
        
    } while (true);
    
    return 0;
}