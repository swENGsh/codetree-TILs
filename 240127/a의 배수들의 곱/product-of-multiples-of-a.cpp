#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, prod;
    prod = 1;
    cin >> a >> b;
    for (int i=1; i<=b; i++){
        if (i % a == 0){
            prod *= i;
        }
    }
    cout << prod;
    return 0;
}