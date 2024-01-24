#include <iostream>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int temp1, temp2, temp3, cnt;
    char symp1, symp2, symp3;
    cin >> symp1 >> temp1 >> symp2 >> temp2 >> symp3 >> temp3;
    if (symp1 == 'Y' && temp1 >= 37){
        cnt ++;
    }
    if (symp2 == 'Y' && temp2 >= 37){
        cnt ++;
    }
    if (symp3 == 'Y' && temp3 >= 37){
        cnt ++;
    }
    if (cnt >= 2){
        cout << 'E';
    }
    else{
        cout << 'N';
    }
    return 0;
}