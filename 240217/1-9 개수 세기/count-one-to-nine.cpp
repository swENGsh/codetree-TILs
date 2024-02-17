#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[10];
    cin >> n;
    int lst[n];
    for (int i=0; i<10; i++) arr[i] = 0;

    for (int i=0; i<n; i++){
        cin >> lst[i];
        arr[lst[i]] ++;
    }

    for (int i=1; i<10; i++){
        cout << arr[i] << endl;
    }
    return 0;
}