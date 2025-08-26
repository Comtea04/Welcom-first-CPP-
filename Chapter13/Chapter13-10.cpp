#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream is("input.txt");
    if (!is) {
        cerr << "파일 오픈 실패" << endl;
        exit(1);
    }

    string word;
    int cnt=0;
    while (is >> word) {
        cnt++;
    }

    cout << "단어의 수: " << cnt << endl;
    
    return 0;
}