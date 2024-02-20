#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    
    int A[n1], B[n2];
    
    for (int i = 0; i < n1; ++i)
        cin >> A[i];
    for (int i = 0; i < n2; ++i)
        cin >> B[i];
    
    // 수열 B가 수열 A의 연속부분수열인지 확인
    bool isSubsequence = false;
    for (int i = 0; i <= n1 - n2; ++i) {
        bool found = true;
        for (int j = 0; j < n2; ++j) {
            if (A[i + j] != B[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            isSubsequence = true;
            break;
        }
    }
    
    if (isSubsequence)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}