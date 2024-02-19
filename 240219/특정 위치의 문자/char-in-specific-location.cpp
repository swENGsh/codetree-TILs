#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'}, ipt;
    int idx = 0;
    cin >> ipt;
    bool tf = true;
    for (char s : arr){
        if (s == ipt) {
            cout << idx;
            tf = false;
            break;
        }
        idx ++;
    }
    if (tf) {
        cout << "None";
    }
    return 0;
}