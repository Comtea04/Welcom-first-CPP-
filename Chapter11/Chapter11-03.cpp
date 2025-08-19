#include <iostream>

using namespace std;

class Employee {
protected:
    string name;
    int salary;
public:
    Employee(string name, int salary) : name(name), salary(salary) { }
    
    void setName( string name ) { this->name = name; }
    void setSalary( int salary ) { this->salary = salary; }
    string getName() const { return name; }
    int getSalary() const { return salary; }

    int computeSalary() const {
        return salary;
    }
};

class Manager : public Employee{
    int bonus;
public:
    Manager(string name, int salary, int bonus) : Employee(name, salary), bonus(bonus) { }

    void setBonus( int bonus ) { this->bonus = bonus; }
    int getBonus() const { return bonus; }

    int computeSalary() const {
        return salary + bonus;
    }
};

int main() {        
    Manager obj {"��ö��", 200, 100};

    cout << "�̸�: " << obj.getName() << endl;
    cout << "����: " << obj.getSalary() << endl;
    cout << "���ʽ�: " << obj.getBonus() << endl;
    cout << "��ü �޿�: " << obj.computeSalary() << endl;

    return 0;
}