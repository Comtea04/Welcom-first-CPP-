#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>

using namespace std;

int main() {
    srand(time(NULL));

    vector<int> values(100);

    for (int i=0; i<100; i++) {
        values[i] = rand()%100;
    }

    int count = count_if(values.begin(), values.end(), [](int x)
                                                { return (x%2==0); });
    cout << "값이 짝수인 요소의 개수: " << count << endl;

    return 0;
}