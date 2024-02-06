#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, tmp;
    cin >> n;
    tmp = 1;
    for (int i=n; i>0; i--){
        for (int j=n-i; j>0; j--){
            cout << ' ' << ' ';
        }
        for (int j=i; j>0; j--){
            cout << tmp << ' ';
            tmp ++;
            if (tmp > 9) tmp = 1;
        }
        cout << endl;
    }
    return 0;
}