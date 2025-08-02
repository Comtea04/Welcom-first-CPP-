#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "문자열을 입력하시오: ";
    getline(cin, str);
    int counter[256] = {0, };    

    for (int i : str) {
        counter[i]++;
    }
    
    for (int i='a'; i<'z'; i++) {
        cout << (char) i << ": " << counter[i] << endl;
    }
    
    return 0;
}