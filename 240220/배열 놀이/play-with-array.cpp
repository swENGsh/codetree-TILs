#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    for (int i=0; i<q; i++){
        int k, a, b;
        cin >> k;
        if (k == 1){
            cin >> a;
            cout << arr[a-1] << endl;
        }
        else if (k == 2){
            cin >> a;
            int idx = 1;
            bool tf = true;
            for (int j: arr){
                if (j == a){
                    cout << idx << endl;
                    tf = false;
                    break;
                }
                idx ++;
            }
            if (tf) cout << 0;
        }
        else if (k == 3) {
            cin >> a >> b;
            for (int j=a; j<=b; j++){
                cout << arr[j-1] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}