#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int mid, fin, ans;
    cin >> mid >> fin;
    if (mid < 90){
        ans = 0;
    }
    else if (fin >= 95){ 
        ans = 100000;
    }
    else if (fin >= 90){
        ans = 50000;
    }
    cout << ans;
    return 0;
}