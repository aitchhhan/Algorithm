#include <iostream>
using namespace std;

int main() {
    int a[9];
    int max = 0;
    int maxIndex = 0;
    for (int i = 0; i < 9; i++) {
        cin >> a[i];
        if (max < a[i]) {
            max = a[i];
            maxIndex = i;
        }
    }
    cout << max << '\n' << maxIndex + 1;
}