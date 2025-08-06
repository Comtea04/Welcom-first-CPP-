#include <iostream>
#include <string>

using namespace std;

class Airplane {
    string name;
    int capacity;
    int speed;

    public:
    Airplane() : name("NoName"), capacity(0), speed(0) { }
    Airplane(string n, int c) : name(n), capacity(c), speed(800) { }
    Airplane(string n, int c, int s) : name(n), capacity(c), speed(s) { }

    void print() {
        cout << "������� �̸�: " << name << endl;
        cout << "������� �뷮: " << capacity << endl;
        cout << "������� �ӵ�: " << speed << " Km/h" << endl; 
    }

    string getName() { return name; }
    int getCapacity() { return capacity; }
    int getSpeed() { return speed; }
    void setName(string t) { name = t; }
    void setCapacity(int a) { capacity = a; }
    void setSpeed(int s) { speed = s; }
};

int main() {
    Airplane obj1 {"���� 787", 900, 300};        // Airplane(string n, int c, int s)
    
    Airplane obj2;                              // Airplane()
    obj2.setName("������� 350");
    obj2.setCapacity(400);
    obj2.setSpeed(1000);

    cout << "����� #1" << endl;
    obj1.print();
    cout << endl;

    cout << "����� #2" << endl;
    obj2.print();

    return 0;
}