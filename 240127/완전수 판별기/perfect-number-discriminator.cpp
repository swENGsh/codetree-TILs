#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum, cur;
    cin >> n;
    cur = 1;
    sum = 0;
    while (cur < n){
        if (n % cur == 0){
            sum += cur;
        }
        cur ++;
    }

    if (sum == n){
        cout << 'P';
    }
    else{
        cout << 'N';
    }
    return 0;
}