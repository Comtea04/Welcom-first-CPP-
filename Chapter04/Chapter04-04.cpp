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

    cout << "å �̸�: ";
    getline(cin, obj.title);

    cout << "å ����: ";
    getline(cin, obj.author);

    return 0;
}