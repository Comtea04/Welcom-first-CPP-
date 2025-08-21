#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    
    int L[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i=0; i<100; i++) {
        L[ rand()%10 ]++;
    }
    
    int max_idx=0;
    for (int i=0; i<10; i++) {
        if (L[i] > L[max_idx]) max_idx = i;
    }
    
    cout << "가장 많이 생성된 수:  " << max_idx << endl;
    
    return 0;
}