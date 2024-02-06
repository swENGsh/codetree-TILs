#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, a, b, ans;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a >> b;
        ans = 1;
        for (int j=a; j<=b; j++){
            ans *= j;    
        }
        cout << ans << endl;
    }
    return 0;
}