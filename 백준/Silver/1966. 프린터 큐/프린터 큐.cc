#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int N, M, num;
        cin >> N >> M;
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        for (int i = 0; i < N; i++) {
            cin >> num;
            q.push({i, num});
            pq.push(num);
        }
        int cnt = 0;
        while (!q.empty()) {
            int idx = q.front().first;
            int pri = q.front().second;
            q.pop();

            if (pri == pq.top()) {
                pq.pop();
                cnt++;
                if (idx == M) {
                    cout << cnt << '\n';
                    break;
                }
            } else {
                q.push({idx, pri});
            }
        }
    }
}