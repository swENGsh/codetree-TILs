#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cur;
    cin >> n;
    cur = 2;
    char ans = 'N';
    while (cur < n){
        if (n % cur == 0) {
            ans = 'C';
            break;
        }
        cur ++;
    }
    cout << ans;
    return 0;
}