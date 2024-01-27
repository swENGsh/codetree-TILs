#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum, cnt;
    cin >> a >> b;
    sum = 0;
    cnt = 0;
    for (a; a<=b; a++){
        if(a % 5 == 0 || a % 7 == 0){
            sum += a;
            cnt ++;
        }
    }
    cout << sum << " " ;
    cout << fixed;
    cout.precision(1);
    cout << (double)sum/(double)cnt;
    return 0;
}