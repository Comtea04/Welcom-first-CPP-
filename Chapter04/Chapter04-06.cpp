#include <iostream>
#include <string>

using namespace std;

class Employee {
    public:
    string name;
    int age;
    int salary;

    void print() {
        cout << name << endl;
        cout << age << endl;
        cout << salary << endl;
    }
};

int main() {
    Employee obj;
    obj.name = "±èÃ¶¼ö";
    obj.age = 38;
    obj.salary = 2000000;

    cout << "Employee1:" << endl;
    obj.print();

    return 0;
}