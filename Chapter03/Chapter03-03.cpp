#include <iostream>
#include <math.h>

using namespace std;

double hypot(double a, double b) {
    return sqrt(a*a + b*b);
}

int main()
{
    double a, b;
    
    cout << "�����ﰢ���� �� ��: ";
    cin >> a;
    
    cout << "�����ﰢ���� �� ��: ";
    cin >> b;
    
    cout << "����: " << hypot(a, b) << endl;

    return 0;
}