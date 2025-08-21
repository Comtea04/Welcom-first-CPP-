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
        cout << "이름 : " << name << endl;
        cout << "나이 : " << age << endl;
    }
};

int main() {
    Person obj;
    
    obj.setPerson("김철수", 21);
    obj.print();

    return 0;
}