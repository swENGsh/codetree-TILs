#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int nums[10], max_val, min_val, tmp1, tmp2;
    max_val = min_val = 0;
    tmp1 = tmp2 = INT_MAX;
    for (int i = 0; i < 10; i++) cin >> nums[i];
    for (int i : nums) {
        if (i - 500 < tmp1 && i - 500 > 0) {
            tmp1 = i - 500;
            min_val = i;
        }
        if (500 - i < tmp2 && 500 - i > 0) {
            tmp2 = 500 - i;
            max_val = i;
        }
    }
    cout << max_val << ' ' << min_val;
    return 0;
}