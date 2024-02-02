#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n*2+1; i++) {
		for (int j = 0; j < n*2+1; j++) {
			if (i % 2 == 0 || (i % 2 == 1 && j % 2 == 0)) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
    return 0;
}