#include <iostream>
#include <fstream>

using namespace std;

#define users 2

int main()
{
    fstream iofile("user.txt", ios::out);
    if (!iofile) {
        cerr << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    int num;
    string name;
    string phone;
    string mail;

    for (int i=0; i<users; i++) {
        cout << "입력할 사용자의 번호, 이름, 전화번호, 이메일 주소를 차례대로 입력하세요" << endl;
        cin >> num;
        cin >> name;
        cin >> phone;
        cin >> mail;

        iofile << num << " " << name << " " << phone << " " << mail << endl;
    }
    iofile.close();

    int n;
    cout << "전화번호를 찾고 싶은 사람의 번호를 입력하세요: ";
    cin >> n;

    ifstream infile("user.txt");
    string line;
    string phone_num="";
    int cnt=0;
    
    for (int i=0; i<users; i++) {
        getline(infile, line);

        // 앞에서 번호만 읽어서 정수로 변환
        int file_num = 0;
        int j = 0;
        while (j < line.size() && line[j] != ' ') {
            file_num = file_num * 10 + (line[j] - '0');
            j++;
        }

        if (file_num == n) {
            bool startCollecting = false;
            cnt=0;
            for (char c : line) {   
                if (c==' ') {
                    cnt++;
                    continue;
                }
                if (cnt == 2) {
                    phone_num += c;
                    startCollecting = true;
                }
                else if (cnt > 2 && startCollecting) break;
                else if (startCollecting) {
                    phone_num += c;
                }
            }
        }
    }
    cout << phone_num << endl;
    
    return 0;
}