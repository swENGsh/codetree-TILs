#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    double arr[n], sum, avg;
    sum = 0;
    for (int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    avg = sum / n;
    cout << fixed;
    cout.precision(1);
    cout << avg << endl;
    if (avg >= 4.0) cout << "Perfect";
    else if (avg >=3.0) cout << "Good";
    else cout << "Poor";
    return 0;
}