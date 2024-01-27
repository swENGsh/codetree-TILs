#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cur, sum;
    cin >> n;
    cur = 1;
    sum = 0;
    while (cur <= 100){
        sum += cur;
        if (sum >= n) break;
        cur ++;
    }
    cout << cur;
    return 0;
}