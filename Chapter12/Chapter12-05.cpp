#include <iostream>
#include <vector>

using namespace std;

class Animal {
public:
    virtual void speak() = 0;
    virtual ~Animal() { }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "港港!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() {
        cout << "具克!" << endl;
    }
};

int main() {
    vector <Animal*> Barn;
    Barn.push_back(new Dog());
    Barn.push_back(new Cat());
    Barn.push_back(new Cat());

    for (auto& a : Barn) {
        a->speak();
    }

    for (auto& a : Barn) {
        delete a;
    }
    
    return 0;
}