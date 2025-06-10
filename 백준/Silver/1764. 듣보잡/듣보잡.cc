#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    string str;
    map<string, int> m;
    vector<string> v;
    for (int i = 1; i <= N + M; i++) {
        cin >> str;
        m[str]++;
        if (m[str] > 1)
            v.push_back(str);
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for (string str : v)
        cout << str << '\n';
}