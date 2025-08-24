#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream iofile("input.txt", ios::in | ios::out);
    if (!iofile) {
        cerr << "파일 오픈 실패" << endl;
        exit(1);
    }

    char c;
    while (iofile.get(c)) {
        iofile.seekg(-1, ios::cur);
        iofile << (char) toupper(c);
        iofile.seekg(iofile.tellg(), ios::beg);
    }
    
    return 0;
}