#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "���ڿ��� �Է��Ͻÿ�: ";
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