#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,  ans;
    cin >> n;
    ans = 0;
    int* arr = new int[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            int a = arr[j] - arr[i];
            if (a > ans){
                ans = a;
            }
        }
    }

    if (ans > 0){
       cout << ans;
    }
    else {
        cout << 0;
    }
    return 0;
}