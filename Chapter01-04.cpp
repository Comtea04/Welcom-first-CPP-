#include <iostream>

using namespace std;

int main()
{
	int L, W, H;

    cout << "길이: ";
    cin >> L;

    cout << "너비: ";
    cin >> W;

    cout << "높이: ";
    cin >> H;

    int V = L * W * H;                          // 부피
    int S = 2 * ((L * W) + (L * H) + (H * W));  // 표면적

    cout << endl;
    cout << "상자의 부피: " << V << endl;
    cout << "상자의 표면적: " << S << endl;

	return 0;
}