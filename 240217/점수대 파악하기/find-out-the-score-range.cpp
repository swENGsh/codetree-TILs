#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int score[11];
    for (int i=0; i<11; i++) score[i] = 0;
    for (int i=0; i<100; i++){
        int a;
        cin >> a;
        if (a == 0) break;
        score[a/10] ++;
    }
    for (int i=10; i>0; i--){
        cout << i * 10 << " - " << score[i] << endl;
    }
    return 0;
}