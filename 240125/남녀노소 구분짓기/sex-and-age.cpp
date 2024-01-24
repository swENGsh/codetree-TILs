#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sex, age;
    cin >> sex >> age;
    if (sex){
        if (age >= 19){
            cout << "WOMAN";
        }
        else{
            cout << "GIRL";
        }
    }
    else{
        if (age >= 19){
            cout << "MAN";
        }
        else{
            cout << "BOY";
        }
    }
    return 0;
}