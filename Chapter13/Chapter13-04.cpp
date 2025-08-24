#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream iofile("input.txt", ios::in | ios::out);
    if (!iofile) {
        cerr << "파일 오픈 실패" << endl;
        exit(1);
    }

    iofile.seekg(0, ios::end);
    int len = iofile.tellg();

    char c;
    for (int i=1; i<=len; i++) {
        iofile.seekg(-i, ios::end);
        iofile.get(c);
        cout << c;
    }
    cout << endl;
    
    return 0;
}