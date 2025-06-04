#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    int cnt[10] = {0};
    cin >> A >> B >> C;
    string s = to_string(A * B * C);
    for (char c : s) {
        cnt[c - '0']++;
    }

    for (int i = 0; i < 10; i++) {
        cout << cnt[i] << '\n';
    }
}