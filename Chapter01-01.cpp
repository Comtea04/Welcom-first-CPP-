#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S, V, O;

    cout << "주어: ";
    cin >> S;

    cout << "동사: ";
    cin >> V;

    cout << "목적어: ";
    cin >> O;

    cout << S << " " << V << " a " << O << endl;

	return 0;
}