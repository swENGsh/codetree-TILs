#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], cnt, sum;
    cnt = sum = 0;
    for (int i=0; i<10; i++){
        cin >> arr[i];
        if (arr[i] == 0){
            break;
        }
        cnt ++;
        sum += arr[i];
    }
    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double) sum / cnt;
    return 0;
}