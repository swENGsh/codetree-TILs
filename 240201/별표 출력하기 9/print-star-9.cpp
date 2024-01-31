#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        for (int b=0; b<n-i-1; b++){
            cout << ' ' << ' ';
        }
        for (int k=0; k<i*2+1; k++){
            cout << '*' << ' ';
        }
        cout << endl;
    }
    return 0;
}