#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N;
    cin >> T;
    vector<pair<int, int>> dp(41);
    dp[0] = {1, 0};
    dp[1] = {0, 1};
    dp[2] = {1, 1};
    for (int i = 3; i <= 40; i++) {
        dp[i].first = dp[i - 1].first + dp[i - 2].first;
        dp[i].second = dp[i - 1].second + dp[i - 2].second;
    }

    for (int k = 0; k < T; k++) {
        cin >> N;
        cout << dp[N].first << " " << dp[N].second << '\n';
    }
}