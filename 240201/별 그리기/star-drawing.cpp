#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int k=0; k<n-i; k++){
            cout <<' ';
        }
        for (int k=0; k<(i*2)-1; k++){
            cout << '*';
        }
        cout << endl;
    }
    for (int i=n-1; i>0; i--){
        for (int k=0; k<n-i; k++){
            cout <<' ';
        }
        for (int k=0; k<(i*2)-1; k++){
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}