#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, tmp;
    cin >> n;
    int* A = new int[n];
    for (int i=0; i<n; i++) cin >> A[i];

    for (int i=n-1; i>0; i--){
        for (int j=0; j<i; j++){
            if(A[j]<A[j+1]){
                tmp = A[j];
                A[j] = A[j+1];
                A[j+1] = tmp;
            }
        }
    }

    cout << A[0] << ' ' << A[1];
    delete[] A;
    return 0;
}