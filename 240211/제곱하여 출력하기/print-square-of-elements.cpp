#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, cur;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> cur;
        cout << cur * cur << ' ';
    }

    return 0;
}