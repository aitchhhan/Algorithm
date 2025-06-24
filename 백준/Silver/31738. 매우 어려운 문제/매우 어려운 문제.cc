#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N, M, res = 1;

    cin >> N >> M;

    if (N >= M) {
        cout << 0;
        return 0;
    } else {
        for (long long i = 2; i <= N; i++)
            res = (res * i) % M;
    }
    cout << res;
}