#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <time.h>

using namespace std;

// ���� ���� ����
void dict_init(map<string, string>& dict) {
    dict["boy"] = "�ҳ�";
    dict["school"] = "�б�";
    dict["office"] = "����";
    dict["house"] = "��";
    dict["morning"] = "��ħ";
    dict["evening"] = "����";
}

int main() {
    srand(time(NULL));

    // �� ������ ���� ����
    map<string, string> dict;
    dict_init(dict);

    // �������� ������ �ܾ� �迭
    string words[dict.size()] = {"boy", "school", "office", "house", "morning", "evening"};
    string answers[4] = {"����", "�ҳ�", "�б�", "����"};

    // ���� ����
    while (true) {
        int index = rand() % dict.size();

        int n;
        cout << words[index] << "�� �ǹ̴�? (1)����(2)�ҳ�(3)�б�(4)����" << endl;
        cout << "��ȣ�� �����Ͻÿ�: ";
        cin >> n;

        string answer = answers[n-1];
        if (dict[words[index]]==answer) cout << "�¾ҽ��ϴ�." << endl;
        else cout << "Ʋ�Ƚ��ϴ�." << endl;
    }   // �����ڰ� ���� �� ����

    return 0;
}