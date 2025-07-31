#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m;
int graph[1001][1001];
int res[1001][1001];
bool visited[1001][1001];
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

void bfs(int sy, int sx) {
    queue<pair<int, int>> q;
    q.push({sy, sx});
    visited[sy][sx] = true;
    res[sy][sx] = 0;

    while (!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (visited[ny][nx]) continue;
            if (graph[ny][nx] == 0) continue;

            visited[ny][nx] = true;
            res[ny][nx] = res[y][x] + 1;
            q.push({ny, nx});
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    int t, x, y;

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            cin >> t;
            graph[i][k] = t;

            if (t == 2) {
                x = i;
                y = k;
            }
        }
    }

    bfs(x, y);

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            if (graph[i][k] == 0)
                cout << 0 << ' ';
            else if (!visited[i][k])
                cout << -1 << ' ';
            else
                cout << res[i][k] << ' ';
        }
        cout << '\n';
    }
}