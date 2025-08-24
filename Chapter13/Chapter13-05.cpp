#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream is1("input.txt");
    ifstream is2("input copy.txt");
    if (!(is1 && is2)) {
        cerr << "파일 오픈 실패" << endl;
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
        cout << "표절입니다." << endl;
    else
        cout << "표절이 아닙니다." << endl;
    
    return 0;
}