#include <iostream>
#include <time.h>
#include <set>

using namespace std;

int main() {
    srand(time(NULL));

    set<int> lottery;   // set�� �ڵ����ĵ�

    while (lottery.size() < 6) {
        lottery.insert( rand()%45 + 1 );
    }

    cout << "������ �ζ� ��ȣ: ";
    for (int i : lottery) {
        cout << i << " ";
    }
    cout << endl;
}