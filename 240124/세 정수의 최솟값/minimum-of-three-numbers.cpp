#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, ans;
    cin >> a >> b >> c;
    ans = a;
    if (ans >= b){
        ans = b;
    }
    if (ans >= c){
        ans = c;
    }

    cout << ans;
    return 0;
}