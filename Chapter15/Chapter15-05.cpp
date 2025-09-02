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
        cout << "�̸�: " << name << endl;
        cout << "�ּ�: " << address << endl;
        cout << "�й�: " << id << endl;
        cout << "��ȭ��ȣ: " << tel << endl;
    }
};

int display_menu() {
    cout << "=========================================================" << endl;
    cout << "�߰�: 1, �˻� : 2, ���� : 3, ��κ��� : 4, ���� : 5" << endl;
    cout << "=========================================================" << endl;

    int n;
    cout << "�ϳ��� �����ϼ���: ";
    cin >> n;

    switch (n) {
    case 1: case 2: case 3: case 4: case 5:
        return n;
        break;
    
    default:
        cout << "�߸��� �Է��Դϴ�." << endl;
        return -1;
    }
}

void add_student(vector<Student>& students) {
    Student temp_student;
    string temp_input;      // 4���� ��� �� ����� �������ϱ� �̰ɷ� ����

    cout << "�̸� : ";
    cin >> temp_input;
    temp_student.setName(temp_input);

    cin.ignore();  // ������ �����ִ� ���� ���� ����
    cout << "�ּ� : ";
    getline(cin, temp_input);
    temp_student.setAddress(temp_input);

    cout << "�й� : ";
    cin >> temp_input;
    temp_student.setId(temp_input);

    cin.ignore();  // ������ �����ִ� ���� ���� ����
    cout << "��ȭ��ȣ : ";
    getline(cin, temp_input);
    temp_student.setTel(temp_input);

    students.push_back(temp_student);
    cout << "�߰��Ǿ����ϴ�" << endl;
}

void search_student(vector<Student>& students) {
    string name;
    cout << "�˻��� �л� �̸�: ";
    cin >> name;

    bool found = false;
    for (const Student& s : students) {
        if (s.getName()==name) {
            s.print();
            cout << endl;

            found = true;
        }
    }

    if (!found) cout << "�ش� �л��� �������� �ʽ��ϴ�" << endl;
}

void delete_student(vector<Student>& students) {
    string search_id;
    cout << "������ �л��� �й��� �Է��ϼ���" << endl;
    cin >> search_id;

    auto it = find_if(students.begin(), students.end(), [search_id](const Student& s)
                                                                {return s.getId() == search_id;});

    if (it != students.end()) {
        students.erase(it);
        cout << "�����Ǿ����ϴ�" << endl;
    }
    else {
        cout << "�ش� �л��� �������� �ʽ��ϴ�" << endl;
    }
}

void show_students(vector<Student>& students) {
    if (students.empty()) {
        cout << "�л��� �������� �ʽ��ϴ�" << endl;
        return;
    }

    cout << "��� �л� ���:" << endl;
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
        case 5: cout << "���α׷��� �����մϴ�"; break;
        }

    }

    return 0;
}