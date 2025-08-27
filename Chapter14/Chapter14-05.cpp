#include <iostream>

using namespace std;

template <class T>
T getAverage(T arr[], int size) {
    T sum=0;
    for (int i=0; i<size; i++) {
        sum += arr[i];
    }
    
    return sum/size;
}

int main() {
    double list[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
    double n = getAverage(list, 5);

    cout << "ÃÖ¼Ò°ª: " << n << endl;

    return 0;
}