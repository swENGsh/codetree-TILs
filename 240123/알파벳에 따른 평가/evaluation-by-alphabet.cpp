#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c;
    string ans;
    cin >> c;
    if (c == 'S'){
        ans = "Superior";
    }
    else if (c == 'A'){
        ans = "Excellent";
    }
    else if (c == 'B'){
        ans = "Good";
    }
    else if (c == 'C'){
        ans = "Usually";
    }
    else if (c == 'D'){
        ans = "Effort";
    }
    else {
        ans = "Failure";
    }
    cout << ans;
    return 0;
}