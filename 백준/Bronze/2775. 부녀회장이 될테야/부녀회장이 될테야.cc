#include <iostream>
using namespace std;

int apt(int k, int n) {
    if (k == 0) {
        return n;
    } else if (n == 1) {
        return 1;
    } else {
        return apt(k, n - 1) + apt(k - 1, n);
    }
}

int main() {
    int T;
    cin >> T;
    int k, n;
    for (int i = 0; i < T; i++) {
        cin >> k >> n;
        cout << apt(k, n) << "\n";
    }
}