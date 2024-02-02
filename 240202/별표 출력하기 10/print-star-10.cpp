#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, cur, cur2;
    cin >> n;
    cur = 1;
    cur2 = n-1;

    for (int i=1; i<=n*2; i++){
        if (i%2==0){
            for (int k=0; k<=cur2;k++){
                cout << '*' << ' ';
            }
            cur2 --;
        }
        else{
            for (int k=0; k<cur; k++){
                cout << '*' << ' ';
            }
            cur ++;
        }
        cout << endl;
    }
    return 0;
}