#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, max_val;
    cin >> n;

    max_val = 0;

    int* A = new int[n];
    int* max_nums = new int[n];
    for (int i=0; i<n; i++) cin >> A[i];

    for (int i=0; i<n; i++){
        if (A[i] > max_val){
            max_val = A[i];
            max_nums[i] = i+1;
        }
    }

    for (int i=n-1; i>=0; i--){
        if (max_nums[i] != 0) cout << max_nums[i] << ' ';
    }
    delete[] A;
    delete[] max_nums;
    return 0;
}