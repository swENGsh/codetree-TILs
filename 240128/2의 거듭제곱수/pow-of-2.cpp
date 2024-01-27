#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, cnt;
    cin >> a;
    cnt = 0;
    while (a != 1){
        a /= 2;
        cnt ++;
    }
    cout << cnt;
    return 0;
}