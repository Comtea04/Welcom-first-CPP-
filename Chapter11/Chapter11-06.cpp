// 클래스만 만들었음
#include <iostream>
#include <string>

using namespace std;

// 부모 클래스
class Person {
    string name;
    int age;
public:
    // 생성자
    Person(string name, int age) : name(name), age(age) { }

    // 설정자와 접근자
    void setName( string name ) { this->name = name; }
    void setAge( int age ) { this->age = age; }
    string getName() const { return name; }
    int getAge() const { return age; }

    bool eat() { }
    bool talk() { }
    bool run() { }
};

// 자식 클래스
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