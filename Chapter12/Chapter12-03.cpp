// 3번이 1번보다 쉬운데 이게 맞는지 모르겠음
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

    cout << "가격: " << t1.getPrice() << endl;
    cout << "가격: " << r1.getPrice() << endl;
    cout << "가격: " << t2.getPrice() << endl;

    return 0;
}