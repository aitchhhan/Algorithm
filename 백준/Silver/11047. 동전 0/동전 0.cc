#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K, num[10];
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    int cnt = 0;
    for (int j = N - 1; j >= 0; j--) {
        if (num[j] <= K) {
            cnt += K / num[j];
            K %= num[j];
        }
    }
    cout << cnt;
}