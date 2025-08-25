#include <iostream>
#include <fstream>

using namespace std;

#define users 2

int main()
{
    fstream iofile("user.txt", ios::out);
    if (!iofile) {
        cerr << "������ �� �� �����ϴ�." << endl;
        return 1;
    }

    int num;
    string name;
    string phone;
    string mail;

    for (int i=0; i<users; i++) {
        cout << "�Է��� ������� ��ȣ, �̸�, ��ȭ��ȣ, �̸��� �ּҸ� ���ʴ�� �Է��ϼ���" << endl;
        cin >> num;
        cin >> name;
        cin >> phone;
        cin >> mail;

        iofile << num << " " << name << " " << phone << " " << mail << endl;
    }
    iofile.close();

    int n;
    cout << "��ȭ��ȣ�� ã�� ���� ����� ��ȣ�� �Է��ϼ���: ";
    cin >> n;

    ifstream infile("user.txt");
    string line;
    string phone_num="";
    int cnt=0;
    
    for (int i=0; i<users; i++) {
        getline(infile, line);

        // �տ��� ��ȣ�� �о ������ ��ȯ
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