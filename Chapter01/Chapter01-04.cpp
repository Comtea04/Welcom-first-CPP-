#include <iostream>

using namespace std;

int main()
{
	int L, W, H;

    cout << "����: ";
    cin >> L;

    cout << "�ʺ�: ";
    cin >> W;

    cout << "����: ";
    cin >> H;

    int V = L * W * H;                          // ����
    int S = 2 * ((L * W) + (L * H) + (H * W));  // ǥ����

    cout << endl;
    cout << "������ ����: " << V << endl;
    cout << "������ ǥ����: " << S << endl;

	return 0;
}