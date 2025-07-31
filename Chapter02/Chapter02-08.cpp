#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "정수를 입력하시오: ";
    cin >> num;
    
    for (int i=1; i<num; i++) {
        if (num%i == 0)
            cout << i << " ";
    }
    cout << endl;
    
    return 0;
}