#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string s;
    s = "";
    cin >> n;
    for (int i=1; i<=n; i++){
        if (s == ""){
            for (int j=1; j<=n; j++){
                s += "*";
            }
        }
        cout << s <<endl;
    }
    return 0;
}