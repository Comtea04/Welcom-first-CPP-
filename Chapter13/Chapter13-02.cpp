#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream is("sample.txt");
    if (!is) {
        cerr << "���� ���� ����" << endl;
        exit(1);
    }

    int number;
    int sum=0;
    while (is) {
        is >> number;
        sum += number;
    }

    cout << "���Ͽ� ����� ������ ���� " << sum << endl;

    return 0;
}