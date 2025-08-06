#include <iostream>
#include <string>

using namespace std;

class SMS {
    string sender;
    string receiver;
    string text;

    public:
    SMS() : sender("010-0000-0000"), receiver("010-0000-0000") { }
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
    SMS obj1;
    obj1.setSender("010-1234-5678");
    obj1.setReceiver("010-1234-5679");
    obj1.setText("C++���δ� �ߵǰ�����?");

    cout << "���ڸ޽��� #1" << endl;
    obj1.print();
    cout << endl;

    SMS obj2 {"010-1234-5679", "010-1234-5678", "�� 5������� ���� ���׿�."};
    cout << "���ڸ޽��� #2" << endl;
    obj2.print();

    return 0;
}