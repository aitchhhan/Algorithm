#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> vt[1001];
bool vis[1001];

void dfs(int nd) {
    vis[nd] = true;
    cout << nd << ' ';

    for (int i = 0; i < vt[nd].size(); i++) {
        int next = vt[nd][i];
        if (!vis[next]) {
            dfs(next);
        }
    }
}

void bfs(int st) {
    queue<int> q;
    vis[st] = true;
    q.push(st);

    while (!q.empty()) {
        int nd = q.front();
        q.pop();
        cout << nd << ' ';

        for (int i = 0; i < vt[nd].size(); i++) {
            int next = vt[nd][i];
            if (!vis[next]) {
                vis[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, st;
    cin >> N >> M >> st;

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        vt[u].push_back(v);
        vt[v].push_back(u);
    }

    for (int i = 1; i <= N; i++) {
        sort(vt[i].begin(), vt[i].end());
    }

    dfs(st);
    cout << '\n';
    for (int k = 1; k <= N; k++)
        vis[k] = false;

    bfs(st);
}