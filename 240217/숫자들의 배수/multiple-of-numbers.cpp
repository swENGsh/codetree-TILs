#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt, cur;
    cin >> n;
    cnt = 0;
    cur = 1;
    while (cnt < 2){
        int a = n * cur;
        cout << a << ' ';
        cur ++;
        if (a%5==0){
            cnt ++;
        }
    }

    return 0;
}