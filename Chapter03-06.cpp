#include <iostream>
#include <string>
#include <algorithm>        // å 151p�� remove()��� �ִµ�, erase()�Լ���

using namespace std;

int main()
{
    string call = ".";
    do {
        cout << "��ȭ��ȣ�� �Է��Ͻÿ�: ";
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