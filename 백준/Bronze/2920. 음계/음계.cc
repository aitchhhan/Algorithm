#include <iostream>
using namespace std;

int main() {
    int arr[8];
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
		if (arr[i] == i + 1) {
			cnt++;
		} else if (arr[i] == 8 - i) {
			cnt--;
		}
	}
	if (cnt == 8) {
		cout << "ascending";
	} else if (cnt == -8) {
		cout << "descending";
	} else {
		cout << "mixed";
	}
}