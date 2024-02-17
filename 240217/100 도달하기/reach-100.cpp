#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[50];
    cin >> n;
    arr[0] = 1;
    arr[1] = n;
    cout << 1 << ' ' << n << ' ';
    for (int i=0; i<50; i++){
        arr[i+2] = arr[i] + arr[i+1];
        cout << arr[i+2] << ' ';
        if (arr[i+2] > 100) break;
    }
    return 0;
}