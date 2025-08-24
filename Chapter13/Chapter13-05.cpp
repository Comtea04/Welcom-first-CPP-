#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream is1("input.txt");
    ifstream is2("input copy.txt");
    if (!(is1 && is2)) {
        cerr << "���� ���� ����" << endl;
        exit(1);
    }

    string line1, line2;
    bool isSame=true;
    while (is1 && is2) {
        getline(is1, line1);
        getline(is2, line2);
    
        if (line1 != line2) isSame = false;
    }

    if (isSame)
        cout << "ǥ���Դϴ�." << endl;
    else
        cout << "ǥ���� �ƴմϴ�." << endl;
    
    return 0;
}