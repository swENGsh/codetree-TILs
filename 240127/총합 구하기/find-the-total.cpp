#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum;
    cin >> a >> b;
    sum = 0;
    for (a; a<=b; a++){
        if (a%6 == 0 && a%8 !=0){
            sum += a;
        }
    }
    cout << sum;
    return 0;
}