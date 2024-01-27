#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, ans;
    cin >> a >> b;
    ans = 0;
    for (a; a<=b; a++){
        if (1920 % a == 0 && 2880 % a == 0) {
            ans = 1;
            break;
        }
    }
    cout << ans;
    return 0;
}