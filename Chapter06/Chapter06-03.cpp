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
    cout << "�簢���� ����: ";
    cin >> n;

    vector <Rect> squares;
    for (int i=0; i<n; i++) {
        int w, h;
        cout << "�簢���� ��: ";
        cin >> w;

        cout << "�簢���� ����: ";
        cin >> h;

        squares.push_back(Rect(w, h));
    }

    for (int i=0; i<n; i++)
        if (squares[i].area() > 100) squares[i].print();
    
    return 0;
}