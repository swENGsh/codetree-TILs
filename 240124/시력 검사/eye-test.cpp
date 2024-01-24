#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double right, left;
    cin >> right >> left;
    if (right >= 1.0 && left >= 1.0){
        cout << "High";
    }
    else if (right >= 0.5 && left >= 0.5){
        cout << "Middle";
    }
    else{
        cout << "Low";
    }
    return 0;
}