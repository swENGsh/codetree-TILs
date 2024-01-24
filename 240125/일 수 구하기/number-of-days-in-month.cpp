#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int month;
    cin >> month;
    if (month == 2){
        cout << 28;
    }
    else if (month < 8){
        if (month % 2){
            cout << 31;
        }
        else{
            cout << 30;
        }
    }
    else {
        if (month % 2){
            cout << 30;
        }
        else{
            cout << 31;
        }
    }
    return 0;
}