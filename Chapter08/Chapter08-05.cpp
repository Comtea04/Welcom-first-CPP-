#include <iostream>
#include <string>

using namespace std;

class Student {
    string name;

public:
    Student(string n="") : name(n) { }

    string getName() const { return name; }
    void setName(string name) { this->name = name; }
};

class Myclass {
    string className;
    Student* p;
    int size;
public:
    Myclass(string className, int size) : className(className), size(size) {
        p = new Student[size];
    }
    ~Myclass() { delete[] p; }
    
    void setStudent(int index, string name) {
        if (index >= 0 && index < size) {
            p[index].setName(name);
        }
    }

    void printStudents() const {
        cout << "학급 " << className << "의 학생들은 다음과 같다." << endl;
        for (int i = 0; i < size; i++) {
            cout << "학생 #" << i + 1 << ": " << p[i].getName() << endl;
        }
    }    
};

int main() {
    Myclass obj("special", 3);

    obj.setStudent(0, "홍길동");
    obj.setStudent(1, "김철수");
    obj.setStudent(2, "최자영");

    obj.printStudents();

    return 0;
}