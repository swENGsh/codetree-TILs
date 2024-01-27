#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum, cnt;
    sum = cnt = 0;
    cin >> n;
    for (int i = 0; i< n; i++){
        int a;
        cin >> a;
        sum += a;
        cnt ++;
    }
    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double) sum/cnt;
    return 0;
}