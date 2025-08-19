#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    string address;
    string tel;
public:
    // ������
    Person(string n, string a, string t) : name(n), address(a), tel(t) { }
    
    // �����ڿ� ������
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
    // ������
    Customer(string n, string a, string t, int i, int m) : Person(n, a, t), id(i), mileage(m) { }

    // �����ڿ� ������
    void setId( int id ) { this->id = id; }
    void setMileage( int mileage ) { this->mileage = mileage; }
    int getId() const { return id; }
    int getMileage() const { return mileage; }
};

int main() {
    Customer obj {"��ö��", "����� ���α�", "010-1111-2222", 1, 1000};

    cout << "�̸�: " << obj.getName() << endl;
    cout << "�ּ�: " << obj.getAddress() << endl;
    cout << "��ȭ��ȣ: " << obj.getTel() << endl;
    cout << "���̵�: " << obj.getId() << endl;
    cout << "���ϸ���: " << obj.getMileage() << endl;

    return 0;
}