#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    while (true){
        cin >> a;
        if (a < 25) cout << "Higher" << endl;
        else if (a == 25) {
            cout << "Good" << endl;
            break;
        }
        else cout << "Lower" << endl;
    }
    return 0;
}