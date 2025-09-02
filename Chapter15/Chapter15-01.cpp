#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> values;

    int n=0;
    while (true) {
        cout << "정수를 입력하시오(음수는 종료): ";
        cin >> n;

        if (n<0) break;     // 음수 입력 시 종료

        values.push_back(n);
    }

    // 범위 기반 루프를 이용해, 합과 개수 구하기(함수 안쓰고 함)
    int sum=0, length=0;
    for (int i : values) {
        sum += i;
        length++;
    }

    // 최종 출력
    cout << "평균=" << sum/length << endl;

    return 0;
}