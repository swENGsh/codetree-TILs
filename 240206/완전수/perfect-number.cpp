#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int start, end, sum, cnt;
    cin >> start >> end;
    cnt = 0;
    for (int i=start; i<=end; i++){
        sum = 0;
        for(int j=1; j<i; j++) {
            if(i%j==0) {
                sum = sum + j;
            }
        }
        if (sum == i) cnt ++;
    }
    cout << cnt;
    return 0;
}