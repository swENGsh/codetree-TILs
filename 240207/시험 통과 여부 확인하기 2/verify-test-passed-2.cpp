#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[4], sum, cnt;
    cin >> n;
    cnt = 0;
    for (int i=0; i<n; i++){
        sum = 0;
        for (int j=0; j<4; j++){
            cin >> arr[j];
            sum += arr[j];
        }
        if ((double) sum / 4 >= 60) {
            cout << "pass" << endl;
            cnt ++ ;
        }
        else{
            cout << "fail" << endl;
        }
    }
    cout << cnt;
    return 0;
}