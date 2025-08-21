#include <iostream>
#include <string>

using namespace std;

class Book {
    public:
    string title;
    string author;
};

int main() {
    Book obj;

    cout << "책 이름: ";
    getline(cin, obj.title);

    cout << "책 저자: ";
    getline(cin, obj.author);

    return 0;
}