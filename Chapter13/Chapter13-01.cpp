#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream os("sample.txt");
    
    if (!os) {
        cerr << "파일 오픈 실패" << endl;
        exit(1);
    }
    
    for (int i=0; i<10; i++) {
        os << i << " ";
    }

    return 0;
}