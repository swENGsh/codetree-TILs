#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt;
    cin >> n;
    cnt = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(i%2==0){
                cnt ++;
                cout << cnt << ' ';
            }
            else{
                cnt --;
                cout << cnt << ' ';
            }
        }
        if(i%2==0){
            cnt += n+1;
        }
        else{
            cnt += n-1;
        }
        cout << endl;
    }
    return 0;
}