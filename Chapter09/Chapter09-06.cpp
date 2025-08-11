#include <iostream>
#include <string>

using namespace std;


class Game {
    string name;
    int size;
public:
    static int count;
    Game(string name, int size) : name(name), size(size) {
        count++;
        cout << "현재 경기자 수: " << count << endl;
    } 
    ~Game() {
        count--;
        cout << "현재 경기자 수: " << count << endl;
    }
};

int Game :: count = 0;

int main() {
    Game player1("1", 4);
    Game player2("2", 5);

    return 0;
}