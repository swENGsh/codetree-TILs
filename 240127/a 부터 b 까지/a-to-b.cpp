#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i = a){
        if (i % 2 == 0){
            cout << i << " ";
            a += 3;
        }
        else{
            cout << i << " ";
            a *= 2;
        }
    }
    return 0;
}