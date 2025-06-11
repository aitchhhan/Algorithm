#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, n;
    cin >> T;

    while (T--) {
        cin >> n;
        map<string, int> m;
        string name, type;
        while (n--) {
            cin >> name >> type;
            if (m.find(type) == m.end())
                m.insert({type, 1});
            else
                m[type]++;
        }
        int res = 1;
        for (auto i : m) {
            res *= (i.second + 1);
        }
        res -= 1;
        cout << res << '\n';
    }
}