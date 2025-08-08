#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 사실 compare없이 sore(begin, end)만 해도 됨
bool compare(string A, string B) {
    return A<B;
}

int main() {
    int n;
    cout << "문자열의    개수: ";
    cin >> n;
    
    vector <string> words;
    for (int i=0; i<n; i++) {
        string tmp;
        cout << "문자열을 입력하시오: ";
        cin >> tmp;
        
        words.push_back(tmp);
    }

    // 정렬
    sort(words.begin(), words.end(), compare);

    for (int i=0; i<n; i++) {
        cout << words[i] << endl;
    }

    return 0;
}