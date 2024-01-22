#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string ans;
    cin >> n;
    if (n >= 3000){
        ans = "book";
    }
    else if (n >= 1000){
        ans = "mask";
    }
    else if (n >= 500){
        ans = "pen";
    }
    else {
        ans = "no";
    }
    cout << ans;
    return 0;
}