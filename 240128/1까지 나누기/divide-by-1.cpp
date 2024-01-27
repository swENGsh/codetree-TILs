#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cur, div, cnt;
    cin >> n;
    cnt = 0;
    cur = 1;
    div = n;
    while (true){
        div /= cur;
        cnt ++;
        if (div <= 1) break;
        cur ++;
    }
    cout << cnt;
    return 0;
}