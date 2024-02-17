#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    char YN;
    int temp, cnt, hospital[4];
    for (int i=0; i<4; i++) hospital[i] = 0;
    for (int i=0; i<3; i++){
        cin >> YN >> temp;
        if (YN == 'Y' && temp >= 37) hospital[0] ++;
        else if (YN == 'N' && temp >= 37) hospital[1] ++;
        else if (YN == 'Y' && temp < 37) hospital[2] ++;
        else if (YN == 'N' && temp < 37) hospital[3] ++;
    }
    for (int i=0; i<4; i++){
        cout << hospital[i] << ' ';
    }
    if (hospital[0] >= 2) cout << 'E';
    return 0;
}