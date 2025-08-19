// Ŭ������ �������
#include <iostream>
#include <string>

using namespace std;

// �θ� Ŭ����
class Person {
    string name;
    int age;
public:
    // ������
    Person(string name, int age) : name(name), age(age) { }

    // �����ڿ� ������
    void setName( string name ) { this->name = name; }
    void setAge( int age ) { this->age = age; }
    string getName() const { return name; }
    int getAge() const { return age; }

    bool eat() { }
    bool talk() { }
    bool run() { }
};

// �ڽ� Ŭ����
class Professor : public Person {
public:
    bool teach() { }
};

class TennisPlayer : public Person {
public:
    bool playTennis() { }
};

class Businessman : public Person {
public:
    bool runBusiness() { }
};