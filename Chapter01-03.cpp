#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a, b, result;        // int로 정해도 문제의 입력값에 대해 작동함

	cout << "첫 번째 변: ";
	cin >> a;
	cout << "두 번째 변: ";
	cin >> b;

	result = sqrt(a * a + b * b);

	cout << "빗변 길이: " << result << endl;

	return 0;
}