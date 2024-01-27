#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    string ans;
    cin >> a >> b >> c;
    ans = "YES";
    for (a; a<=b; a++){
        if (a % c == 0) {
            ans = "NO";
            break;
        }
    }
    cout << ans;
    return 0;
}