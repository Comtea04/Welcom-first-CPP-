// 일단 책이 이상함. 그래서 소문자는 없다고 가정하고, 대문자만 바꾸기로 했음
// 문제 설명엔 띄어쓰기 있는 척 하더니 예시 출력에는 또 없길래, 띄어쓰기 처리 없이 했음
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream iofile("sample.txt", ios::in | ios::out);      // sample.txt알아서 만들어둬야됨
    if (!iofile) {
        cerr << "파일 오픈 실패" << endl;
        exit(1);
    }

    string str;
    getline(iofile, str);
    cout << "평문 : " << str << endl;

    int key;
    cout << "이동거리 : ";
    cin >> key;

    // 암호화
    string encrypted_str = "";
    cout << "암호문: ";
    iofile.seekp(0, ios::beg);      // 쓰기 포인터를 파일 처음으로 이동
    for (char ch : str) {
        char encrypted = (char) ((ch - 'A' + key)%26 + 'A');
        encrypted_str += encrypted;
    }

    // 파일에 반영
    iofile.clear();         // 스트림 초기화
    iofile.seekp(0, ios::beg);
    iofile << encrypted_str;
    
    // 파일 다시 읽기
    iofile.clear();
    iofile.seekg(0, ios::beg);
    getline(iofile, str);
    cout << str << endl;
    
    return 0;
}