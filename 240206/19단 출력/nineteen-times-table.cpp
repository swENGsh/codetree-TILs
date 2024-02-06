#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    for (int i=1; i<=19; i++){
        for (int j=1; j<=19; j++){
            if (j%2==0){
                cout << " / " << i << " * " << j << " = " << i*j;
            }
            else if (i==1 && j == 1) {
                cout << i << " * " << j << " = " << i*j;
            }
            else{
                cout << endl << i << " * " << j << " = " << i*j;
            }
        }
    }
    return 0;
}