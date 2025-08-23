// �̷��� Ǫ�°��� �� �𸣰���
#include <iostream>

using namespace std;

class Weapon {
public:
    virtual void load() = 0;
};

class Bomb : public Weapon {
public:
    void load() {
        cout << "��ź�� �����մϴ�." << endl;
    }
};

class Gun : public Weapon {
public:
    void load() {
        cout << "���� �����մϴ�." << endl;
    }
};

int main() {
    Weapon* list[3];
    list[0] = new Gun;
    list[1] = new Bomb;
    list[2] = new Bomb;

    for (Weapon* weapon : list) {
        weapon->load();
    }

    for (Weapon* weapon : list) {
        delete weapon;
    }

    return 0;
}