#include <iostream>
#include <math.h>

using namespace std;

inline double calc_volume(double radius) {
    return (4.0 / 3.0 * 3.14 * pow(radius, 3));
}

int main()
{
    double r;
    
    cout << "�������� �Է��Ͻÿ�: ";
    cin >> r;
    
    cout << "���� ���Ǵ� " << calc_volume(r) << endl;

    return 0;
}