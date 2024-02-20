#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int nums[10], max_val;
    for (int i=0; i<10; i++){
        cin >> nums[i];
    }
    max_val = 0;
    for (int i=0; i<10; i++){
        if (nums[i] > max_val) max_val = nums[i];
    }
    cout << max_val;
    return 0;
}