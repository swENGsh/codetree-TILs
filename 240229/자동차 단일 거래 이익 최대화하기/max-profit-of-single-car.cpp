#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, max_val, min_val, idx;
    cin >> n;
    max_val = idx = 0;
    min_val = INT_MAX;
    int* arr = new int[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    min_val = arr[0];
    for (int i=1; i<n; i++){
        if (min_val > arr[i]){
            min_val = arr[i];
            idx = i;
        }
    }
    for (int i=idx; i<n; i++){
        if (max_val < arr[i]){
            max_val = arr[i];
        }
    }
    if (max_val - min_val > 0){
       cout << max_val - min_val;
    }
    else {
        cout << 0;
    }
    return 0;
}