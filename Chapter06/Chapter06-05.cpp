#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
    string name;
    double marks;
public:
    Student(string n, double m) : name(n), marks(m) { }

    void print() {
        cout << "�̸� : " << name << endl;
        cout << "���� : " << marks << endl;
    }

    double getMarks() { return marks; }
};

// ���� �� �Լ�
bool compare(Student A, Student B) {
    return A.getMarks() > B.getMarks();
}

int main() {
    vector <Student> students;

    for (int i=0; i<3; i++) { // å���� �Է¶��� �Ⱥ����� �� ����(�Էµ� �ϰ� ��µ� �ؾߵǴµ�, �ѹ����ۿ� �Ⱥ���)
        string name;
        cout << "�̸� : ";
        cin >> name;

        double marks;
        cout << "���� : ";
        cin >> marks;

        students.push_back(Student(name, marks));
    }

    // ���������� ����
    sort(students.begin(), students.end(), compare);

    // ���
    cout << "==========================================" << endl;
    for (int i=0; i<3; i++) {
        students[i].print();
    }
    cout << "==========================================" << endl;

    return 0;
}