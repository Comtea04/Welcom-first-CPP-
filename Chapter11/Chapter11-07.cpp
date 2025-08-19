#include <iostream>
#include <string>

using namespace std;

// �θ� Ŭ����
class Person {
protected:
    string job;
    int age;
public:
    // ������
    Person(string job, int age) : job(job), age(age) { }

    // �����ڿ� ������
    void setJob( string job ) { this->job = job; }
    void setAge( int age ) { this->age = age; }
    string getJob() const { return job; }
    int getAge() const { return age; }

    bool eat() {
        cout << "���� �� ����." << endl;
    }
    bool talk() {
        cout << "���� �� ����." << endl;
    }
    bool run() {
        cout << "���� �� ����." << endl;
    }
};

// �ڽ� Ŭ����
class Professor : public Person {
public:
    Professor(string name, int age) : Person(name, age) { }
     // ������ �� �� �ִ� ���
    void teach() const {
        cout << "����ĥ �� ����." << endl;
    }

    // ���� ��� �Լ�
    void print() {
        cout << "���� ����: " << job << endl;
        cout << "���� ����: " << age << endl;
        run();
        talk();
        teach();
        cout << endl;
    }
};

class TennisPlayer : public Person {
public:
    TennisPlayer(string name, int age) : Person(name, age) { }
     // �״Ͻ� ������ �� �� �ִ� ���
    void playTennis() const {
        cout << "�״Ͻ� ��⸦ �� �� ����." << endl;
    }

    // ���� ��� �Լ�
    void print() {
        cout << "���� ����: " << job << endl;
        cout << "���� ����: " << age << endl;
        run();
        talk();
        playTennis();
        cout << endl;
    }
};

class Businessman : public Person {
public:
    Businessman(string name, int age) : Person(name, age) { }
     // ȸ����� �� �� �ִ� ���
    void runBusiness() const {
        cout << "ȸ�翡�� ���� �� ����." << endl;
    }

    // ���� ��� �Լ�
    void print() {
        cout << "���� ����: " << job << endl;
        cout << "���� ����: " << age << endl;
        run();
        talk();
        runBusiness();
        cout << endl;
    }
};

int main() {
    Professor obj1 {"����", 39};
    obj1.print();

    TennisPlayer obj2 {"�״Ͻ� ����", 23};
    obj2.print();
}