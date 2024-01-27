#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, cnt1, cnt2;
    cnt1 = 0;
    cnt2 = 0;
    for (int i=0; i<10; i++){
        cin >> a;
        if (a % 3 == 0){
            cnt1 ++;
        }
        if (a % 5 == 0){
            cnt2 ++;
        }
    }
    cout << cnt1 << " " << cnt2;
    return 0;
}