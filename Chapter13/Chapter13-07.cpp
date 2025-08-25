// �ϴ� å�� �̻���. �׷��� �ҹ��ڴ� ���ٰ� �����ϰ�, �빮�ڸ� �ٲٱ�� ����
// ���� ���� ���� �ִ� ô �ϴ��� ���� ��¿��� �� ���淡, ���� ó�� ���� ����
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream iofile("sample.txt", ios::in | ios::out);      // sample.txt�˾Ƽ� �����־ߵ�
    if (!iofile) {
        cerr << "���� ���� ����" << endl;
        exit(1);
    }

    string str;
    getline(iofile, str);
    cout << "�� : " << str << endl;

    int key;
    cout << "�̵��Ÿ� : ";
    cin >> key;

    // ��ȣȭ
    string encrypted_str = "";
    cout << "��ȣ��: ";
    iofile.seekp(0, ios::beg);      // ���� �����͸� ���� ó������ �̵�
    for (char ch : str) {
        char encrypted = (char) ((ch - 'A' + key)%26 + 'A');
        encrypted_str += encrypted;
    }

    // ���Ͽ� �ݿ�
    iofile.clear();         // ��Ʈ�� �ʱ�ȭ
    iofile.seekp(0, ios::beg);
    iofile << encrypted_str;
    
    // ���� �ٽ� �б�
    iofile.clear();
    iofile.seekg(0, ios::beg);
    getline(iofile, str);
    cout << str << endl;
    
    return 0;
}