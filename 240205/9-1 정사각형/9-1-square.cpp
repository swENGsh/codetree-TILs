#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt;
    cin >> n;
    cnt = 10;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cnt --;
            if (cnt == 0) cnt = 9;
            cout << cnt;
        }
        cout << endl;
    }
    return 0;
}