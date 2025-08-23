// 이렇게 푸는건지 잘 모르겠음
#include <iostream>

using namespace std;

class Weapon {
public:
    virtual void load() = 0;
};

class Bomb : public Weapon {
public:
    void load() {
        cout << "폭탄을 적재합니다." << endl;
    }
};

class Gun : public Weapon {
public:
    void load() {
        cout << "총을 적재합니다." << endl;
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