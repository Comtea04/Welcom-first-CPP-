#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ��� compare���� sore(begin, end)�� �ص� ��
bool compare(string A, string B) {
    return A<B;
}

int main() {
    int n;
    cout << "���ڿ���    ����: ";
    cin >> n;
    
    vector <string> words;
    for (int i=0; i<n; i++) {
        string tmp;
        cout << "���ڿ��� �Է��Ͻÿ�: ";
        cin >> tmp;
        
        words.push_back(tmp);
    }

    // ����
    sort(words.begin(), words.end(), compare);

    for (int i=0; i<n; i++) {
        cout << words[i] << endl;
    }

    return 0;
}