#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, ans;
    ans = 1;
    for (int i=0; i<5; i++){
        cin >> a;
        if (a % 3 != 0) {
            ans = 0;
            break;
        }
    }
    cout << ans;
    return 0;
}