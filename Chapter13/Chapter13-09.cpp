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
    cout << "Ž���� �ܾ�: ";
    cin >> word;

    string line;
    int index = 1;
    while (getline(is, line)) {
        if (line.find(word) != string::npos) {      // find()�� ��ã�� �� string::npos�� ��ȯ
            cout << index << ": " << line << endl;;
        }
        index++;
    }
    
    return 0;
}