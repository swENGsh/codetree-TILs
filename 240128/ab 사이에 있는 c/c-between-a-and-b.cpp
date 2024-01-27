#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    for (a; a<=b; a++){
        if (a % c == 0) {
            cout << "YES";
            break;
        }
        if (a == b) cout << "NO";
    }
    return 0;
}