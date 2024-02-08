#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[11], sum, cnt;
    double avg;
    sum = cnt = 0;
    for (int i=1; i<=10; i++){
        cin >> arr[i];
        if (i % 2 == 0) {
            sum += arr[i];
        }
        if (i % 3 == 0) {
            avg += arr[i];
            cnt ++;
        }
    }
    cout << sum << ' ';
    cout << fixed;
    cout.precision(1);
    cout << avg/cnt;
    return 0;
}