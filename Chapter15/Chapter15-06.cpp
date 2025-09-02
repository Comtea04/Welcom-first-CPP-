#include <iostream>
#include <time.h>
#include <set>

using namespace std;

int main() {
    srand(time(NULL));

    set<int> lottery;   // set은 자동정렬됨

    while (lottery.size() < 6) {
        lottery.insert( rand()%45 + 1 );
    }

    cout << "생성된 로또 번호: ";
    for (int i : lottery) {
        cout << i << " ";
    }
    cout << endl;
}