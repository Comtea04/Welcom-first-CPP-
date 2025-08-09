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
        cout << "이름 : " << name << endl;
        cout << "학점 : " << marks << endl;
    }

    double getMarks() { return marks; }
};

// 학점 비교 함수
bool compare(Student A, Student B) {
    return A.getMarks() > B.getMarks();
}

int main() {
    vector <Student> students;

    for (int i=0; i<3; i++) { // 책에는 입력란을 안보여준 것 같음(입력도 하고 출력도 해야되는데, 한번씩밖에 안보임)
        string name;
        cout << "이름 : ";
        cin >> name;

        double marks;
        cout << "학점 : ";
        cin >> marks;

        students.push_back(Student(name, marks));
    }

    // 학점순으로 정렬
    sort(students.begin(), students.end(), compare);

    // 출력
    cout << "==========================================" << endl;
    for (int i=0; i<3; i++) {
        students[i].print();
    }
    cout << "==========================================" << endl;

    return 0;
}