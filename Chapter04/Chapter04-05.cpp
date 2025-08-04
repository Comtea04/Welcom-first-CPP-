#include <iostream>
#include <time.h>

using namespace std;

class Dice {
    int face = rand()%6 + 1;

    public:
    void roll() {
        face = rand()%6 + 1;
    }
    
    void print() {
        cout << "주사위 값=" << face << endl;
    }
};

int main() {
    srand(time(NULL));

    Dice obj;

    obj.print();

    obj.roll();
    obj.print();

    return 0;
}