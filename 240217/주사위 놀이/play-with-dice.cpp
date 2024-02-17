#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int dice[7];
    for (int i=0; i<7; i++) dice[i] = 0;
    for (int i=0; i<10; i++){
        int a;
        cin >> a;
        dice[a] ++;
    }
    for (int i=1; i<7; i++){
        cout << i << " - " << dice[i] << endl;
    }
    return 0;
}