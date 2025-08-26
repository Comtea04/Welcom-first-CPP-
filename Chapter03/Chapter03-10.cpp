#include <iostream>
#include <time.h>

using namespace std;

int flip() {
    return rand()%2;
}

int main()
{
    srand(time(NULL));
    
    int coin[2] = {0, 0};
    
    for (int i=0; i<100; i++) {
        coin[flip()]++;
    }
    
    cout << "동전의 앞면:  " << coin[0] << endl;
    cout << "동전의 뒷면:  " << coin[1] << endl;
    
    return 0;
}