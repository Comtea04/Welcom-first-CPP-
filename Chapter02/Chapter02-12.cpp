#include <iostream>

using namespace std;

int main()
{
    for (int i=1; i<=100; i++) {
        if (i%3==0)
            cout << "박수 ";
        else
            cout << i << " ";
    }
    cout << endl;
    
    return 0;
}