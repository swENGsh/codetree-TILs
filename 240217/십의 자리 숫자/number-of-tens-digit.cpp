#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    for (int i=0; i<10; i++) arr[i] = 0;
    for (int i=0; i<100; i++){
        int a;
        cin >> a;
        if (a==0) break;
        arr[a/10] ++;
    }
    for (int i=1; i<10; i++){
        cout << i << " - " << arr[i] << endl;
    }
    return 0;
}