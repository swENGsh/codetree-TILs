#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], sum, cnt;
    cnt = sum = 0;
    for (int i=0; i<10; i++){
        cin >> arr[i];
        if (arr[i] == 0){
            break;
        }
        if (arr[i] % 2 == 0){
            cnt ++;
            sum += arr[i];
        }
    }
    cout << cnt << ' ' << sum;
    return 0;
}