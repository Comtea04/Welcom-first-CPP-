#include <iostream>

using namespace std;

int main()
{
	int hour, min, sec;

    cout << "��: ";
    cin >> hour;

    cout << "��: ";
    cin >> min;

    cout << "��: ";
    cin >> sec;

    int result = 3600*hour + 60*min + sec;
    cout << "��ü ��: " << result << endl;

	return 0;
}