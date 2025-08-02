#include <iostream>
#include <time.h>
#include <string>

using namespace std;

int main()
{
    srand(time(NULL));
    
    string word = "apple";
    string shuffled = word;
    string ans;
    
    for (int i=0; i<word.size(); i++) {
        char a = rand()%shuffled.size();
        char b = rand()%shuffled.size();
        
        char tmp = shuffled[a];
        shuffled[a] = shuffled[b];
        shuffled[b] = tmp;
    }
    
    do {
        cout << shuffled << "�� � �Ⱦ ��ũ����� ���ϱ��? ";
        cin >> ans;
    } while (ans != word);
    cout << "�����մϴ�." << endl;
    
    return 0;
}