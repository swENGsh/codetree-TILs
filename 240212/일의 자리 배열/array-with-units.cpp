#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    cin >> arr[0] >> arr[1];
    for (int i=0; i<10; i++){
        if (i < 2){
            cout << arr[i] << ' ';
            continue;
        }
        int sum = arr[i-1] + arr[i-2];
        arr[i] = sum % 10;
        cout << arr[i] << ' ';
    }
    return 0;
}