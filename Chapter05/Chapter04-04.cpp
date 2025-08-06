#include <iostream>
#include <string>

using namespace std;

class Movie {
    string title;
    string director;
    double rating;

    public:
    Movie() : title("N/A"), director("N/A"), rating(-1) { }
    Movie(string t, string d, double r) : title(t), director(d), rating(r) { }

    string getTitle() { return title; }
    string getDirector() { return director; }
    double getRating() { return rating; }

    void setTitle(string title_) { title = title_; }
    void setDirector(string director_) { director = director_; }
    void setRating(double rating_) { rating = rating_; }
};

int main() {
    Movie obj1;
    obj1.setTitle("Ÿ��Ÿ��");
    obj1.setDirector("���ӽ� ī�޷�");
    obj1.setRating(9.5);

    cout << "��ȭ #1: " << endl;
    cout << "��ȭ ����: " << obj1.getTitle() << endl;
    cout << "��ȭ ����: " << obj1.getDirector() << endl;
    cout << "��ȭ ����: " << obj1.getRating() << endl;
    cout << endl;

    Movie obj2 {"��������", "�� ����", 8.34};

    cout << "��ȭ #2: " << endl;
    cout << "��ȭ ����: " << obj2.getTitle() << endl;
    cout << "��ȭ ����: " << obj2.getDirector() << endl;
    cout << "��ȭ ����: " << obj2.getRating() << endl;

    return 0;
}