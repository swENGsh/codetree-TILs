#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char ans;
    cin >> n;
    if (n >= 90) {
        ans = 'A';
    }
    else if (n >= 80){
        ans = 'B';
    }
    else if (n >= 70) {
        ans = 'C';
    }
    else if (n >= 60) {
        ans = 'D';
    }
    else {
        ans = 'F';
    }
    cout << ans;
    return 0;
}