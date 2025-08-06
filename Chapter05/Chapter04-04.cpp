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
    obj1.setTitle("타이타닉");
    obj1.setDirector("제임스 카메론");
    obj1.setRating(9.5);

    cout << "영화 #1: " << endl;
    cout << "영화 제목: " << obj1.getTitle() << endl;
    cout << "영화 감독: " << obj1.getDirector() << endl;
    cout << "영화 평점: " << obj1.getRating() << endl;
    cout << endl;

    Movie obj2 {"지오스톰", "딘 데블린", 8.34};

    cout << "영화 #2: " << endl;
    cout << "영화 제목: " << obj2.getTitle() << endl;
    cout << "영화 감독: " << obj2.getDirector() << endl;
    cout << "영화 평점: " << obj2.getRating() << endl;

    return 0;
}