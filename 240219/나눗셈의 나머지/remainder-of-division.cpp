#include <iostream>
#include<cmath>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int arr[b];
    for (int i = 0; i < b; i++) arr[i] = 0;
    while (a > 1) {
        int mod = a % b;
        a /= b;
        arr[mod] ++;
    }
    int ans = 0;
    for (int i = 0; i < b; i++) {
        ans += pow(arr[i],2);
    }
    cout << ans;
    return 0;
}