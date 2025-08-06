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
        cout << "발신자: " << sender;
        cout << " 수신자: " << receiver;
        cout << " 내용: " << text << endl;
    }

    void setSender(string s) { sender = s; }
    void setReceiver(string r) { receiver = r; }
    void setText(string t) { text = t; }
};

int main() {
    SMS obj1;
    obj1.setSender("010-1234-5678");
    obj1.setReceiver("010-1234-5679");
    obj1.setText("C++공부는 잘되가나요?");

    cout << "문자메시지 #1" << endl;
    obj1.print();
    cout << endl;

    SMS obj2 {"010-1234-5679", "010-1234-5678", "네 5장까지는 문제 없네요."};
    cout << "문자메시지 #2" << endl;
    obj2.print();

    return 0;
}