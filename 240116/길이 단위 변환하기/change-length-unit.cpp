#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    double ft = 30.48;
    double mi = 160934;

    double a = 9.2;
    double b = 1.3;

    cout.precision(1);
    cout << a << "ft = " << a * ft << "cm" << endl;
    cout << b << "mi = " << b * mi << "cm" << endl;
    return 0;
}