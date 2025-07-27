#include <iostream>

using namespace std;

int main()
{
    const double pi = 3.14;
	double r;

    cout << "반지름: ";
    cin >> r;

    double S = 4 * pi * (r*r);
    double V = (4.0/3.0) * pi * (r*r*r);
    
    cout << "표면적: " << S << endl;
    cout << "부피: " << V << endl;

	return 0;
}