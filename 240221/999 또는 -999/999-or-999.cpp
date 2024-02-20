#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, min_val, max_val;
    min_val = INT_MAX;
    max_val = 0;
    while (true){
        cin >> n;
        if (n == 999 || n == -999) break;
        if (min_val > n) min_val = n;
        if (max_val < n) max_val = n;
    }
    cout << max_val << ' ' << min_val;
    return 0;
}