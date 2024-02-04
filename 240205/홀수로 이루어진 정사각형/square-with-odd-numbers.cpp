#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i=1; i<=n; i++){
        int tmp = 10;
        for (int j=0; j<n*2; j+=2){
            cout << tmp+(i*2)-1+j << ' ';
        }
        cout << endl;
    }
    return 0;
}