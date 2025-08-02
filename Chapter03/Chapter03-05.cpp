#include <iostream>

using namespace std;

void sayHello(int n=1) {
    for (int i=0; i<n; i++)
        cout << "Hello ";
}

int main()
{
    cout << "sayHello()->";
    sayHello();
    cout << endl;
    
    cout << "sayHello(3)->";
    sayHello(3);
    cout << endl;
    
    return 0;
}