#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int math1, eng1, math2, eng2;
    char ans;
    cin >> math1 >> eng1 >> math2 >> eng2;
    if (math1 > math2 || (math1 == math2 && eng1 > eng2)){
        ans = 'A';
    }
    else if (math1 < math2 || (math1 == math2 && eng1 < eng2)){
        ans = 'B';
    }
    cout << ans;
    return 0;
}