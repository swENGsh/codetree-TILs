#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum;
    sum = 0;
    cin >> a >> b;
    if (a <= b){
        for (a; a<=b; a++){
            if (a % 5 == 0){
                sum += a;
            }
        }
    }
    else{
        for (b; b<=a; b++){
            if (b % 5 == 0){
                sum += b;
            }
        }
    }
    cout << sum;
    return 0;
}