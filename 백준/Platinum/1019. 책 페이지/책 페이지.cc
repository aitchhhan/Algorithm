#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
ll cnt[10];

void count(ll N) {
    if (N <= 0) return;

    vector<ll> vt;
    while (N > 0) {
        vt.push_back(N % 10);
        N /= 10;
    }
    reverse(vt.begin(), vt.end());

    int len = vt.size();

    for (int i = 0; i < len; ++i) {
        ll d = vt[i];
        ll left = 0, right = 0, pl = 1;

        for (int k = 0; k < len - i - 1; ++k)
            pl *= 10;

        for (int j = 0; j < i; ++j)
            left = left * 10 + vt[j];

        for (int k = i + 1; k < len; ++k)
            right = right * 10 + vt[k];

        for (int num = 0; num <= 9; num++) {
            ll add = left * pl;

            if (num < d)
                add += pl;
            else if (num == d)
                add += right + 1;

            if (num == 0) {
                if (i == 0)
                    add = 0;
                else
                    add -= pl;
            }
            cnt[num] += add;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N;
    cin >> N;

    count(N);

    for (ll i : cnt)
        cout << i << " ";

    cout << "\n";
}