#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream is("input.txt");
    if (!is) {
        cerr << "���� ���� ����" << endl;
        exit(1);
    }

    string word;
    int cnt=0;
    while (is >> word) {
        cnt++;
    }

    cout << "�ܾ��� ��: " << cnt << endl;
    
    return 0;
}