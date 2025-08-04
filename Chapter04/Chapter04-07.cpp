#include <iostream>
#include <string>

using namespace std;

class CellPhone {
    public:
    bool on;
    string number;
    string model;
    string color;

    void setOn() {
        on = (on==true ? false : true);
    }

    void print() {
        cout << number << endl;
        cout << model << endl;
        cout << color << endl;
        cout << boolalpha << on << endl;
    }
};

int main() {
    CellPhone obj;
    obj.number = "010-1234-5678";
    obj.model = "galaxy";
    obj.color = "black";
    obj.on = true;

    cout << "CellPhone1:" << endl;
    obj.print();
    
    return 0;
}