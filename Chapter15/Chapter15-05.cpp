#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
    string name;
    string address;
    string id;
    string tel;
public:
    void setName(string name) { this->name = name; }
    void setAddress(string address) { this->address = address; }
    void setId(string id) { this->id = id; }
    void setTel(string tel) { this->tel = tel; }
    string getName() const { return name; }
    string getId() const { return id; }

    void print() const {
        cout << "이름: " << name << endl;
        cout << "주소: " << address << endl;
        cout << "학번: " << id << endl;
        cout << "전화번호: " << tel << endl;
    }
};

int display_menu() {
    cout << "=========================================================" << endl;
    cout << "추가: 1, 검색 : 2, 삭제 : 3, 모두보기 : 4, 종료 : 5" << endl;
    cout << "=========================================================" << endl;

    int n;
    cout << "하나를 선택하세요: ";
    cin >> n;

    switch (n) {
    case 1: case 2: case 3: case 4: case 5:
        return n;
        break;
    
    default:
        cout << "잘못된 입력입니다." << endl;
        return -1;
    }
}

void add_student(vector<Student>& students) {
    Student temp_student;
    string temp_input;      // 4가지 요소 다 만들기 귀찮으니까 이걸로 통일

    cout << "이름 : ";
    cin >> temp_input;
    temp_student.setName(temp_input);

    cin.ignore();  // 이전에 남아있는 개행 문자 제거
    cout << "주소 : ";
    getline(cin, temp_input);
    temp_student.setAddress(temp_input);

    cout << "학번 : ";
    cin >> temp_input;
    temp_student.setId(temp_input);

    cin.ignore();  // 이전에 남아있는 개행 문자 제거
    cout << "전화번호 : ";
    getline(cin, temp_input);
    temp_student.setTel(temp_input);

    students.push_back(temp_student);
    cout << "추가되었습니다" << endl;
}

void search_student(vector<Student>& students) {
    string name;
    cout << "검색할 학생 이름: ";
    cin >> name;

    bool found = false;
    for (const Student& s : students) {
        if (s.getName()==name) {
            s.print();
            cout << endl;

            found = true;
        }
    }

    if (!found) cout << "해당 학생이 존재하지 않습니다" << endl;
}

void delete_student(vector<Student>& students) {
    string search_id;
    cout << "삭제할 학생의 학번을 입력하세요" << endl;
    cin >> search_id;

    auto it = find_if(students.begin(), students.end(), [search_id](const Student& s)
                                                                {return s.getId() == search_id;});

    if (it != students.end()) {
        students.erase(it);
        cout << "삭제되었습니다" << endl;
    }
    else {
        cout << "해당 학생이 존재하지 않습니다" << endl;
    }
}

void show_students(vector<Student>& students) {
    if (students.empty()) {
        cout << "학생이 존재하지 않습니다" << endl;
        return;
    }

    cout << "모든 학생 목록:" << endl;
    for (const Student& s : students) {
        s.print();
        cout << endl;
    }
}

int main() {
    vector<Student> students;

    int menuCursor;
    while ((menuCursor = display_menu()) != 5) {
        switch (menuCursor) {
        case 1: add_student(students); break;
        case 2: search_student(students); break;
        case 3: delete_student(students); break;
        case 4: show_students(students); break;
        case 5: cout << "프로그램을 종료합니다"; break;
        }

    }

    return 0;
}