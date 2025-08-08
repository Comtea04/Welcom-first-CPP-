#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SMS {
    string sender;
    string receiver;
    string text;

public:
    SMS() : sender(""), receiver(""), text("") { }
    SMS(string s, string r, string t) : sender(s), receiver(r), text(t) { }

    void print() {
        cout << "�߽���: " << sender;
        cout << " ������: " << receiver;
        cout << " ����: " << text << endl;
    }

    void setSender(string s) { sender = s; }
    void setReceiver(string r) { receiver = r; }
    void setText(string t) { text = t; }
};

int main() {
    // SMS SMSs[2];

    // SMSs[0] = SMS {"010-1234-5678", "010-1234-5679", "C++���δ� �ߵǰ�����?"};
    // SMSs[1] = SMS {"010-1234-5679", "010-1234-5678", "�� 5������� ���� ���׿�"};

    // for (int i=0; i<2; i++) {
    //     SMSs[i].print();
    // }


    vector <SMS> SMSs;
    SMSs[0] = SMS {"010-1234-5678", "010-1234-5679", "C++���δ� �ߵǰ�����?"};
    SMSs[1] = SMS {"010-1234-5679", "010-1234-5678", "�� 5������� ���� ���׿�"};

    for (int i=0; i<2; i++) {
        SMSs[i].print();
    }

    return 0;
}