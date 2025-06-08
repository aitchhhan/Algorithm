#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, K;
    cin >> N >> K;
    queue<int> q;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }
    cout << '<';
    while (!q.empty()) {
        for (int j = 1; j < K; j++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        if (q.size() != 1)
            cout << ", ";
        q.pop();
    }
    cout << '>';
}