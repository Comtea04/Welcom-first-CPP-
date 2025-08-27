#include <iostream>

using namespace std;

// �迭 �� �Լ�
template <class T>
bool isEqual(T list1[], T list2[], int size) {      // �迭 ũ�� �ٸ� ��쵵 üũ�ؾ� �ϴµ�, �׷��� �� �迭�� ũ�Ⱑ ������ ������ �Է��� �߸��ϸ� false�� ��ȯ�ϰ� �ǰ�, �̸� �����ϸ� size�� �޴� ������ ����
    for (int i=0; i<size; i++) {                    // �׷��� üũ ���ϰ�, �� �迭�� ũ��� size�� ���ٰ� ����
        if (list1[i] != list2[i]) return false;
    }
    return true;
}

int main() {
    double list1[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
    double list2[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
    bool check = isEqual(list1, list2, 5);

    cout << boolalpha;      // boolean���� ����� �� 0/1�� false/true�� ��������� ��
    cout << check << endl;
}