#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream os("sample.txt");
    
    if (!os) {
        cerr << "���� ���� ����" << endl;
        exit(1);
    }
    
    for (int i=0; i<10; i++) {
        os << i << " ";
    }

    return 0;
}