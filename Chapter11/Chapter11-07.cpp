#include <iostream>
#include <string>

using namespace std;

// 부모 클래스
class Person {
protected:
    string job;
    int age;
public:
    // 생성자
    Person(string job, int age) : job(job), age(age) { }

    // 설정자와 접근자
    void setJob( string job ) { this->job = job; }
    void setAge( int age ) { this->age = age; }
    string getJob() const { return job; }
    int getAge() const { return age; }

    bool eat() {
        cout << "먹을 수 있음." << endl;
    }
    bool talk() {
        cout << "말할 수 있음." << endl;
    }
    bool run() {
        cout << "걸을 수 있음." << endl;
    }
};

// 자식 클래스
class Professor : public Person {
public:
    Professor(string name, int age) : Person(name, age) { }
     // 교수만 할 수 있는 기능
    void teach() const {
        cout << "가르칠 수 있음." << endl;
    }

    // 정보 출력 함수
    void print() {
        cout << "나의 직업: " << job << endl;
        cout << "나의 나이: " << age << endl;
        run();
        talk();
        teach();
        cout << endl;
    }
};

class TennisPlayer : public Person {
public:
    TennisPlayer(string name, int age) : Person(name, age) { }
     // 테니스 선수만 할 수 있는 기능
    void playTennis() const {
        cout << "테니스 경기를 할 수 있음." << endl;
    }

    // 정보 출력 함수
    void print() {
        cout << "나의 직업: " << job << endl;
        cout << "나의 나이: " << age << endl;
        run();
        talk();
        playTennis();
        cout << endl;
    }
};

class Businessman : public Person {
public:
    Businessman(string name, int age) : Person(name, age) { }
     // 회사원만 할 수 있는 기능
    void runBusiness() const {
        cout << "회사에서 일할 수 있음." << endl;
    }

    // 정보 출력 함수
    void print() {
        cout << "나의 직업: " << job << endl;
        cout << "나의 나이: " << age << endl;
        run();
        talk();
        runBusiness();
        cout << endl;
    }
};

int main() {
    Professor obj1 {"교수", 39};
    obj1.print();

    TennisPlayer obj2 {"테니스 선수", 23};
    obj2.print();
}