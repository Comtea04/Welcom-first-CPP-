#include <iostream>
#include <string>

using namespace std;

class Book {
    string title;
    string author;

    public:
    // ������
    Book(string t, string a) {
        title = t;
        author = a;
    }

    // �����ڿ� ������
    string getTitle() { return title; }
    string getAuthor() { return author; }
    void setTitle(string t) { title = t; }
    void setAuthor(string a) { author = a; }
};

int main() {
    Book obj {"Great C++", "Bob"};

    cout << "å �̸�: " << obj.getTitle() << endl;
    cout << "å ����: " << obj.getAuthor() << endl;

    return 0;
}