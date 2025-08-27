// 3���� 1������ ��� �̰� �´��� �𸣰���
#include <iostream>

using namespace std;

class HomeAppliance {
protected:
    int price;
public:
    HomeAppliance(int p) : price(p) { }
    virtual double getPrice() = 0;
};

class Television : public HomeAppliance {
public:
    Television(int p) : HomeAppliance(p) { }
    double getPrice() { return price * 0.9; }
};

class Refrigerator : public HomeAppliance {
public:
    Refrigerator(int p) : HomeAppliance(p) { }
    double getPrice() { return price * 0.95; }
};

int main() {
    Television t1{100000};
    Refrigerator r1{200000};
    Television t2{300000};

    cout << "����: " << t1.getPrice() << endl;
    cout << "����: " << r1.getPrice() << endl;
    cout << "����: " << t2.getPrice() << endl;

    return 0;
}