#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double cm, kg;
    int ans;
    cin >> cm >> kg;
    cm /= 100;
    ans = kg / (cm * cm);
    cout << ans << endl;
    if (ans >= 25) {
        cout << "Obesity";
    }
    return 0;
}