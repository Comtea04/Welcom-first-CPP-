#include <iostream>
#include <math.h>

using namespace std;

double hypot(double a, double b) {
    return sqrt(a*a + b*b);
}

int main()
{
    double a, b;
    
    cout << "직각삼각형의 한 변: ";
    cin >> a;
    
    cout << "직각삼각형의 한 변: ";
    cin >> b;
    
    cout << "빗변: " << hypot(a, b) << endl;

    return 0;
}