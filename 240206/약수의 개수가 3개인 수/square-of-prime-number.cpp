#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int start, end, cnt, ans;
    cin >> start >> end;
    ans = 0;
    for (int i=start; i<=end; i++){
        cnt = 0;
        for (int j=1; j<=i; j++){
            if (i%j==0) cnt ++;
        }
        if (cnt == 3) ans ++;
    }
    cout << ans;
    return 0;
}