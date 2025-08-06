#include <iostream>
#include <string>

using namespace std;

class Book {
    string title;
    string author;

    public:
    // 생성자
    Book(string t, string a) {
        title = t;
        author = a;
    }

    // 접근자와 설정자
    string getTitle() { return title; }
    string getAuthor() { return author; }
    void setTitle(string t) { title = t; }
    void setAuthor(string a) { author = a; }
};

int main() {
    Book obj {"Great C++", "Bob"};

    cout << "책 이름: " << obj.getTitle() << endl;
    cout << "책 저자: " << obj.getAuthor() << endl;

    return 0;
}