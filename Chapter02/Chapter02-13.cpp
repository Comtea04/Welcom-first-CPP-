#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "�� �ױ��� ���ұ��: ";
    cin >> n;
    
    int seq[n] = {1, 0, 1, };
    for (int i=2; i<=n; i++) {
        seq[i] = seq[i-1] + seq[i-2];
    }
    
    for (int i=1; i<=n; i++) {
        cout << seq[i] << " ";
    }
    cout << endl;
    
    return 0;
}