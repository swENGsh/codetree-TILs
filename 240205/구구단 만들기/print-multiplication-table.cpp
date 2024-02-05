#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    for (int i=1; i<=9; i++){
        for (int j=b; j>=2; j-=2){
            cout << j << " * " << i << " = " << j*i;
            if (j != 2) cout << " / ";
        }
        cout << endl;
    }
    return 0;
}