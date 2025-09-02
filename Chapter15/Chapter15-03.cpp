#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <time.h>

using namespace std;

// ���� ���� ����(������)
void dict_init(map<string, string>& dict) {
    dict["boy"] = "�ҳ�";
    dict["school"] = "�б�";
    dict["office"] = "����";
    dict["house"] = "��";
    dict["morning"] = "��ħ";
    dict["evening"] = "����";
}

// �޴����� �Լ��� �������. �̷��� �ϸ� ����ϰ� ���������� ������
void add_word(map<string, string>& dict) {
    string word;
    cout << "�߰��� �ܾ�: ";
    cin >> word;

    string meaning;
    cout << "�߰��� �ǹ�: ";
    cin >> meaning;

    dict[word] = meaning;
}

void test_word(map<string, string>& dict) {

}

int main() {
    srand(time(NULL));

    // �� ���� ���� ����
    map<string, string> dict;
    dict_init(dict);
    
    // ���� ����
    while (true) {
        cout << "=============================================" << endl;
        cout << "�ܾ� �߰� : 1, �ܾ� �׽�Ʈ : 2, ���� : 3" << endl;
        cout << "=============================================" << endl;

        int choice;
        cout << "�ϳ��� �����ϼ��� : ";
        cin >> choice;

        switch (choice)
        {
        case 1: add_word(dict); break;
        
        case 2: test_word(dict); break;

        case 3: cout << "���α׷��� �����մϴ�." << endl; break;

        default:        // �ְ� �; �־���
            cout << "�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���" << endl;
        }
    }

    return 0;
}