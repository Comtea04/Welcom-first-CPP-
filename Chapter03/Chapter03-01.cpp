#include <iostream>

using namespace std;

int maximum(int x, int y, int z) {
    if (x>y) {
        if (x>z) return x;
        else return z;
    }
    else {
        if (y>z) return y;
        else return z;
    }
}

int main()
{
    int x, y, z;

    cout << "3���� ������ �Է��Ͻÿ� :";
    cin >> x >> y >> z;
    
    cout << "���� ū ������ " << maximum(x, y, z) << endl;

    return 0;
}