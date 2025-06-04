#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[3];
    while (true) {
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }
        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
            break;
        sort(arr, arr + 3);
        if (arr[2]*arr[2] == arr[1]*arr[1] + arr[0]*arr[0]) {
            cout << "right" << "\n";
        } else {
            cout << "wrong" << "\n";
        }
    }
}