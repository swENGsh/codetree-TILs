#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x, y;
    char c;
    while (true){
        cin >> x >> y >> c;
        cout << x*y << endl;
        if (c == 'C') break;
    }
    return 0;
}