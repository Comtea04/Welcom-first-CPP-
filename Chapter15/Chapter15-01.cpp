#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> values;

    int n=0;
    while (true) {
        cout << "������ �Է��Ͻÿ�(������ ����): ";
        cin >> n;

        if (n<0) break;     // ���� �Է� �� ����

        values.push_back(n);
    }

    // ���� ��� ������ �̿���, �հ� ���� ���ϱ�(�Լ� �Ⱦ��� ��)
    int sum=0, length=0;
    for (int i : values) {
        sum += i;
        length++;
    }

    // ���� ���
    cout << "���=" << sum/length << endl;

    return 0;
}