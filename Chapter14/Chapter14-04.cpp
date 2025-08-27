#include <iostream>
#include <algorithm>

using namespace std;

template <class T>
T getSmallest(T arr[], int size) {
    T min = arr[0];
    for (int i=0; i<size; i++) {
        if ( arr[i] < min ) min = arr[i];
    }
    return min;
}

int main() {
    double list[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
    double min = getSmallest(list, 5);
    
    cout << "ÃÖ¼Ò°ª: " << min << endl;

    return 0;
}