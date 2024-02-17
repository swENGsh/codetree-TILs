#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    while (true){
        cin >> a;
        if (a == 0) break;
        if (a % 2 == 0){
            cout << a/2 << ' ';
        }
        else {
            cout << a + 3 << ' ';
        }
    }
    return 0;
}