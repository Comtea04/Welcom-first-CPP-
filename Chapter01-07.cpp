#include <iostream>

using namespace std;

int main()
{
    const double pi = 3.14;
	double r;

    cout << "������: ";
    cin >> r;

    double S = 4 * pi * (r*r);
    double V = (4.0/3.0) * pi * (r*r*r);
    
    cout << "ǥ����: " << S << endl;
    cout << "����: " << V << endl;

	return 0;
}