#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cur;
    cin >> n;
    cur = 1;
    while (cur*3 <= n){
        cout << cur * 3 << " ";
        cur ++;
    }
    return 0;
}