#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, cur;
    cin >> n;
    cur = 65;
    for (int i=0; i<n; i++){
        for (int j=n-i; j<=n; j++){
            cout << (char) cur;
            cur ++;
        }
        cout << endl;
    }
    return 0;
}