#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;

    int weight = 13;
    double gravity = 0.165;
    
    cout.precision(6);
    cout << weight << " * " << gravity << " = " << weight * gravity;
    return 0;
}