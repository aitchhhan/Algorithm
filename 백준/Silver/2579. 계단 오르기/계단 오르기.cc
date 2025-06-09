#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int dp[301];
    int arr[301] = {};
    for (int i = 1; i <= N; i++)
        cin >> arr[i];

    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    dp[3] = max(arr[1], arr[2]) + arr[3];

    for (int k = 4; k <= N; k++)
        dp[k] = max(dp[k - 2], dp[k - 3] + arr[k - 1]) + arr[k];

    cout << dp[N];
}