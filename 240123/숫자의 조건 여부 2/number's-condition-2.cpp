#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    char ans;
    cin >> a;
    if (a == 5){
        ans = 'A';
    }
    if (a / 2 == 0){
        ans = 'B';
    }
    cout << ans;
    return 0;
}