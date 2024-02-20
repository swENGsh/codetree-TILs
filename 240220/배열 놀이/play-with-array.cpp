#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, q;
    cin >> n >> q;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < q; i++) {
        int k, a, b;
        cin >> k;
        if (k == 1) {
            cin >> a;
            cout << arr[a - 1] << endl;
        }
        else if (k == 2) {
            cin >> a;
            bool tf = true;
            for (int j=0; j < n; j++) {
                if (arr[j] == a) {
                    cout << j+1 << endl;
                    tf = false;
                    break;
                }
            }
            if (tf) cout << 0 << endl;
        }
        else if (k == 3) {
            cin >> a >> b;
            for (int j = a; j <= b; j++) {
                cout << arr[j - 1] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}