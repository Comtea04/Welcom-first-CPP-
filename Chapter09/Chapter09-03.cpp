#include <iostream>
#include <string.h>

using namespace std;

class MyClass {
    char* stored;
public:
    MyClass( const char* str );
    MyClass( const MyClass& other );
    ~MyClass() { delete[] stored; }
};

MyClass::MyClass( const char* str ) {
    stored = new char[strlen(str)+1];
    strcpy(stored, str);
}

MyClass::MyClass( const MyClass& other )    {
    this->stored = new char[strlen(other.stored)+1];
    strcpy(this->stored, other.stored);
}

int main() {        // main���� ���� �� �� ����. ��������ڸ� �˾Ƽ� �׽�Ʈ�ϸ� ��
    MyClass obj1{"Hello"};

    MyClass obj2{obj1};

    return 0;
}