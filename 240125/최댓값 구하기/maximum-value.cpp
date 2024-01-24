#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, ans;
    cin >> a >> b >> c;
    if (a >= b){
        if (a >= c){
            ans = a;
        }
        else {
            ans = c;
        }
    }
    else{
        if (b >= c){
            ans = b;
        }
        else {
            ans = c;
        }
    }
    cout << ans;
    return 0;
}