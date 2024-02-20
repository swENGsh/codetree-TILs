#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, idx, cnt;
    idx = cnt = 0;
    cin >> n;
    int* A = new int[n];
    for (int i=0; i<n; i++) cin >> A[i];
    for (int i=0; i<n; i++) {
        if (A[i] == 2){
            cnt ++;
            if (cnt == 3){
                cout << idx + 1;
                break;
            }
        }
        idx ++;
    }
    return 0;
}