#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int f, s, arr[10];
    cin >> f >> s;
    arr[0] = f;
    arr[1] = s;
    cout << f << ' ' << s << ' ';
    for (int i=0; i<8; i++){
        arr[i+2] = 2 * arr[i] + arr[i+1];
        cout << arr[i+2] << ' ';
    }
    return 0;
}