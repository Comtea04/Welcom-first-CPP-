#include <iostream>

using namespace std;

class Line {
    int *ptr;
public:
    Line( int len );
    Line(const Line& other);
    ~Line() { delete ptr; }

    int getLength() { return *ptr; }
};

Line::Line( int len ) {
    cout << "일반 생성자" << endl;
    ptr = new int;
    *ptr = len;
};      

Line::Line(const Line& other) {
    cout << "복사 생성자" << endl;
    this->ptr = new int;
    *this->ptr = *other.ptr;
}

void displayLine(Line obj) {
    cout << "선의 길이 : " << obj.getLength() << endl;
}

int main() {
    Line L1 {10};
    Line L2 {L1};

    displayLine(L1);
    displayLine(L2);

    return 0;
}