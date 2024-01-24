#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int month;
    string season;

    cin >> month;
    season = "";
    if (month == 12 || month <= 2){
        season = "Winter";
    }
    else if (month >= 9){
        season = "Fall";
    }
    else if (month >= 6){
        season = "Summer";
    }
    else {
        season = "Spring";
    }
    cout << season;
    return 0;
}