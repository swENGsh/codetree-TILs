#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, min_val, cnt;
    cin >> n;
    int* nums = new int[n];
    for (int i=0; i<n; i++){
        cin >> nums[i];
    }
    min_val = INT_MAX;
    cnt = 0;

    for (int i=0; i<n; i++){
        if (min_val > nums[i]) min_val = nums[i];
    }
    cout << min_val << ' ';
    for (int i=0; i<n; i++){
        if (nums[i] == min_val) cnt ++;
    }
    cout << cnt;
    return 0;
}