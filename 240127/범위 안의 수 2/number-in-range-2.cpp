#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum, cnt;
    double avg;
    sum = cnt = 0;
    for (int i=0; i<10; i++){
        int a;
        cin >> a;
        if (a >= 0 && a <= 200){
            sum += a;
            cnt ++;
        }
    }
    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double)sum / cnt;
    return 0;
}