#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[101], cur;
    for (int i=0; i<101; i++){
        cin >> arr[i];
        if (arr[i] == 0) {
            cur = i;
            break;
        }
    }
    cout << arr[cur-1] + arr[cur-2] + arr[cur-3];
    return 0;
}