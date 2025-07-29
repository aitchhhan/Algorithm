#include <algorithm>
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;
using ll = long long;


ll sum(ll N) {
    if (N < 10) return N * (N + 1) / 2;

    vector<ll> vt;
    while (N > 0) {
        vt.push_back(N % 10);
        N /= 10;
    }
    reverse(vt.begin(), vt.end());

    ll res = 0;
    ll len = vt.size();

    for (int i = 0; i < len; ++i) {
        ll d = vt[i];
        ll left = 0, right = 0, pl = 1;

        for (int k = 0; k < len - i - 1; ++k)
            pl *= 10;

        for (int j = 0; j < i; ++j)
            left = left * 10 + vt[j];

        for (int k = i + 1; k < len; ++k)
            right = right * 10 + vt[k];

        res += left * 45 * pl;
        res += d * (d - 1) / 2 * pl;
        res += d * (right + 1);
    }
    return res;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll L, U;
    cin >> L >> U;

    cout << sum(U) - sum(L - 1);
}