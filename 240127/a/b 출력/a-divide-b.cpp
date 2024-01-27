#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, val, rem;
    cin >> a >> b;
    val = a/b;
    rem = a%b;
    cout << val << '.';
    for (int i = 0; i < 20; i++){
        rem *= 10;
        val = rem/b;
        rem %= b;
        cout << val;
    }
    return 0;
}