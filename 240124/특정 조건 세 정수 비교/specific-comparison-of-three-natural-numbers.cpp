#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a == min({a, b, c})) << ' ' << (a == b && b == c) << endl;
    return 0;
}