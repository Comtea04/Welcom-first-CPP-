#include <iostream>
#include <vector>

using namespace std;

class Rect {
    int w, h;
public:
    Rect() : w(0), h(0) { }
    Rect(int w, int h) : w(w), h(h) { }

    int area() { return w*h; }
    void print() {
        cout << "(" << w << "," << h << ")" << endl;
    }
};

int main() {
    int n;
    cout << "사각형의 개수: ";
    cin >> n;

    vector <Rect> squares;
    for (int i=0; i<n; i++) {
        int w, h;
        cout << "사각형의 폭: ";
        cin >> w;

        cout << "사각형의 높이: ";
        cin >> h;

        squares.push_back(Rect(w, h));
    }

    for (int i=0; i<n; i++)
        if (squares[i].area() > 100) squares[i].print();
    
    return 0;
}