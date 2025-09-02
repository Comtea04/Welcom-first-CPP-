#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    list<int> years = {2012, 2013, 2014};

    cout << "����� ����: ";
    for (int& i : years) {
        cout << i << " ";
    }
    cout << endl;

    // ���� �Ǵ� ���� �Լ�
    auto isLeapYear = [](int x) {
        if (x%4==0) {
            if (x%100==0) {
                if (x%400==0) {
                    return true;
                }
                return false;
            }
            return true;
        }
        return false;
    };

    // find_if�� ������ ã��
    auto it = find_if(years.begin(), years.end(), isLeapYear);

    // ������ �ִٸ� ���
    if (it != years.end()) {
        cout << "������: " << *it << endl;  // ���ͷ����͸� ���� ���� ���
    } else {
        cout << "������ �����ϴ�." << endl;
    }

    return 0;
}