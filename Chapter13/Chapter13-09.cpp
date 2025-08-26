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
    cout << "탐색할 단어: ";
    cin >> word;

    string line;
    int index = 1;
    while (getline(is, line)) {
        if (line.find(word) != string::npos) {      // find()는 못찾을 때 string::npos를 반환
            cout << index << ": " << line << endl;;
        }
        index++;
    }
    
    return 0;
}