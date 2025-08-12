#include <iostream>

using namespace std;

int main()
{
	int hour, min, sec;

    cout << "시: ";
    cin >> hour;

    cout << "분: ";
    cin >> min;

    cout << "초: ";
    cin >> sec;

    int result = 3600*hour + 60*min + sec;
    cout << "전체 초: " << result << endl;

	return 0;
}