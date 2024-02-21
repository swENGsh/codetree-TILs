#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, max_val;
    max_val = 0;
    cin >> n;
    int* arr = new int[n];
    bool* dup = new bool[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        bool flag = true;
        for (int j=0; j<n; j++){
            if (i != j && arr[i] == arr[j]) {
                flag = false;
                dup[i] = true;
                dup[j] = true;
                break;
            }
        }
    }
    for (int i=0; i<n; i++){
        if (!dup[i] && max_val < arr[i]) max_val = arr[i]; 
    }
    cout << max_val;

    return 0;
}