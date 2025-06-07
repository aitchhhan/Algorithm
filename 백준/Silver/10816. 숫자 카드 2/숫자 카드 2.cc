#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N,M, a, b;
    cin >> N;
    map<int, int> m;
    for (int i = 0; i < N; i++) {
        cin >> a;
        m[a]++;
    }

    cin >> M;
    for (int k = 0; k < M; k++){
        cin >> b;
        cout << m[b] << " ";
    }
}