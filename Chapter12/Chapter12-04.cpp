#include <iostream>

using namespace std;

class GameCharacter {
public:
    GameCharacter() { }
    virtual void draw() = 0;
};

class Hobbit : public GameCharacter {
public:
    Hobbit() { }
    void draw() {
        cout << "ȣ���� �׸��ϴ�." << endl;
    }
};

class Sorcerer : public GameCharacter {
public:
    Sorcerer() { }
    void draw() {
        cout << "�ּ��縦 �׸��ϴ�." << endl;
    }
};

int main() {
    GameCharacter* arr[3];
    arr[0] = new Hobbit;
    arr[1] = new Sorcerer;
    arr[2] = new Hobbit;

    for (auto& c : arr) {
        c->draw();
    }

    return 0;
}