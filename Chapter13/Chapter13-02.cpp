#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream is("sample.txt");
    if (!is) {
        cerr << "파일 오픈 실패" << endl;
        exit(1);
    }

    int number;
    int sum=0;
    while (is) {
        is >> number;
        sum += number;
    }

    cout << "파일에 저장된 정수의 합은 " << sum << endl;

    return 0;
}