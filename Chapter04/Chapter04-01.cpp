#include <iostream>
#include <string>

using namespace std;

class Person {
    string name;
    int age;

    public:
    void setPerson(string name_, int age_) {
        name = name_;
        age = age_;
    }

    void print() {
        cout << "�̸� : " << name << endl;
        cout << "���� : " << age << endl;
    }
};

int main() {
    Person obj;
    
    obj.setPerson("��ö��", 21);
    obj.print();

    return 0;
}