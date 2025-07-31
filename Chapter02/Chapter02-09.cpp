#include <iostream>

using namespace std;

int main()
{
    for (int i=0; i<=100; i+=10) {
        cout << i << "\t" << (i - 32.0) * 5.0 / 9.0 << endl;
    }
    
    return 0;
}