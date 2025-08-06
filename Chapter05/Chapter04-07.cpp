#include <iostream>
#include <string>

using namespace std;

class Character {
    int x, y;
    double HP;

    public:
    Character() : x(0), y(0) { }
    Character(int px, int py, double pHP) : x(px), y(py), HP(pHP) { }

    void print() {
        cout << "x: " << x << " y: " << y << " HP: " << HP << endl;
    }

    int getX() { return x; }
    int getY() { return y; }
    int getHP() { return HP; }
    void setX(int x_) { x = x_; }
    void setY(int y_) { y = y_; }
    void setHP(int HP_) { HP = HP_; }
};

int main() {
    Character obj {0, 0, 100};

    for (int i=0; i<10; i++) {
        obj.print();

        obj.setX( obj.getX() + 10 );
    }

    return 0;
}