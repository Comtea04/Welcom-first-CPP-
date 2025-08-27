#include <iostream>

using namespace std;

// 배열 비교 함수
template <class T>
bool isEqual(T list1[], T list2[], int size) {      // 배열 크기 다른 경우도 체크해야 하는데, 그러면 두 배열의 크기가 같은데 사이즈 입력을 잘못하면 false로 반환하게 되고, 이를 보완하면 size를 받는 이유가 없음
    for (int i=0; i<size; i++) {                    // 그래서 체크 안하고, 두 배열의 크기는 size와 같다고 가정
        if (list1[i] != list2[i]) return false;
    }
    return true;
}

int main() {
    double list1[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
    double list2[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
    bool check = isEqual(list1, list2, 5);

    cout << boolalpha;      // boolean값을 출력할 때 0/1을 false/true로 출력히도록 함
    cout << check << endl;
}