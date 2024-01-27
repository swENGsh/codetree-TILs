#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cur, prod;
    cin >> n;
    cur = prod = 1;
    while (cur <= 10){
        prod *= cur;
        if (prod >= n) break;
        cur ++;
    }
    cout << cur;
    return 0;
}