#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt_a, cnt_b, cnt_c, cur, n;
    cin >> n;
    cnt_a = cnt_b = cnt_c = 0;
    cur = 1;
    for (cur; cur <= n; cur++){
        if (cur%12 == 0){
            cnt_c ++;
        }
        else if (cur%3 == 0){
            cnt_b ++;
        }
        else if (cur%2 == 0){
            cnt_a ++;
        }
    }
    cout << cnt_a << " " << cnt_b << " " << cnt_c;
    return 0;
}