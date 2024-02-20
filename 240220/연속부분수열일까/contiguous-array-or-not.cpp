#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;
    int* A = new int[n1];
    int* B = new int[n2];
    for (int i=0; i<n1; i++) cin >> A[i];
    for (int i=0; i<n2; i++) cin >> B[i];
    bool tf1 = true;
    bool tf2 = true;
    for (int i=0; i<n1; i++){
        if (B[0] == A[i]){
            for (int f=1; f<n2; f++){
                if (B[f] != A[i+f]) {
                    cout << "No";
                    tf1 = false;
                    tf2 = false;
                    break;
                }
            }
            if (tf2) {
                cout << "Yes";
                tf1 = false;
                break;
            }
        }
    }
    if (tf1) cout << "No";
    return 0;
}