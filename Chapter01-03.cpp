#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a, b, result;        // int�� ���ص� ������ �Է°��� ���� �۵���

	cout << "ù ��° ��: ";
	cin >> a;
	cout << "�� ��° ��: ";
	cin >> b;

	result = sqrt(a * a + b * b);

	cout << "���� ����: " << result << endl;

	return 0;
}