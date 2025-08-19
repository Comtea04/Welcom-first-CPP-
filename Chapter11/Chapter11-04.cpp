#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    string address;
    string tel;
public:
    // 생성자
    Person(string n, string a, string t) : name(n), address(a), tel(t) { }
    
    // 설정자와 접근자
    void setName( string name ) { this->name = name; }
    void setAddress( string address ) { this->address = address; }
    void setTel( string tel ) { this->tel = tel; }
    string getName() const { return name; }
    string getAddress() const { return address; }
    string getTel() const { return tel; }
};

class Customer : public Person {
    int id;
    int mileage;
public:
    // 생성자
    Customer(string n, string a, string t, int i, int m) : Person(n, a, t), id(i), mileage(m) { }

    // 설정자와 접근자
    void setId( int id ) { this->id = id; }
    void setMileage( int mileage ) { this->mileage = mileage; }
    int getId() const { return id; }
    int getMileage() const { return mileage; }
};

int main() {
    Customer obj {"김철수", "서울시 종로구", "010-1111-2222", 1, 1000};

    cout << "이름: " << obj.getName() << endl;
    cout << "주소: " << obj.getAddress() << endl;
    cout << "전화번호: " << obj.getTel() << endl;
    cout << "아이디: " << obj.getId() << endl;
    cout << "마일리지: " << obj.getMileage() << endl;

    return 0;
}