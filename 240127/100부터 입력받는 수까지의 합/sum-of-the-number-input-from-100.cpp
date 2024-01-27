#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum;
    cin >> n;
    sum = 0;
    for (n; n<=100; n++){
        sum += n;
    }
    cout << sum;
    return 0;
}