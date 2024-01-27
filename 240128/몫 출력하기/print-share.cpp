#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, cnt;
    cnt = 0;
    while (true){
        cin >> a;
        if (cnt == 3) break;
        if (a % 2 == 1) continue;
        else cout << a/2 << endl;
        cnt ++;
    }
    return 0;
}