#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        for (int j=n; j>=n-i; j--){
            cout << '*';
        }
        cout << endl << endl;
    }
    for (int i=1; i<n; i++){
        for (int j=0; j<n-i; j++){
            cout << '*';
        }
        cout << endl << endl;
    }
    return 0;
}