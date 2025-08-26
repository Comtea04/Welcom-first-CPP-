#include <iostream>
#include <string>
#include <time.h>

using namespace std;

// ���������� ���� �Լ�
string RSP_choose() {
    string com;
        int temp = rand()%3;
        if (temp==0) com = "����";
        else if (temp==1) com = "����";
        else com = "��";
    
    return com;
}

// ���������� ���� �Ǵ� �Լ�(��ȿ�� �Ű������� ����)
int RSP_win(string RSP1, string RSP2) {
    // ��� ���
    if (RSP1==RSP2) return 0;

    // ������ �̱�� ���
    if ((RSP1 == "����" && RSP2 == "��") ||
        (RSP1 == "����" && RSP2 == "����") ||
        (RSP1 == "��" && RSP2 == "����")) {
        return 1;
    }
    
    // �� �ܴ� ��� ������ ���� ���
    return -1;
}

int main() {
    srand(time(NULL));

    string choose;
    try {
        cout << "������ ���ðڽ��ϱ�: ";
        cin >> choose;

        // ���� �Է��� ��ȿ���� ���� ��� ����ó��
        if (!(choose=="����" || choose=="����" || choose=="��")) throw choose;
        
        // ��ǻ���� ���� ����
        string com = RSP_choose();
        cout << "��ǻ�ʹ� " << com << endl;

        // ���� ���
        int result = RSP_win(choose, com);
        if (result == 1) cout << "������ �̰���ϴ�.";
        else if (result == 0) cout << "�����ϴ�.";
        else cout << "��ǻ�Ͱ� �̰���ϴ�.";
        cout << endl;

    } catch (string choose) {
        cout << "����: \"����\", \"����\", \"��\" �߿����� �����ϼ���." << endl;
    }

    return 0;
}