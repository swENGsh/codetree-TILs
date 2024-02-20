#include <iostream>
using namespace std;

int n1, n2;
int* A;
int* B;

bool same(int n) {
    for (int f = 0; f < n2; f++) {
        if (B[f] != A[n + f]) return false;
    }
    return true;
}

bool is_subseq() {
    for (int i = 0; i < n1 - n2 + 1; i++) {
         if (same(i)) return true;
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n1 >> n2;
    A = new int[n1];
    B = new int[n2];
    for (int i = 0; i < n1; i++) cin >> A[i];
    for (int i = 0; i < n2; i++) cin >> B[i];

    if (is_subseq()) cout << "Yes";
    else cout << "No";

    delete[] A;
    delete[] B;

    return 0;
}