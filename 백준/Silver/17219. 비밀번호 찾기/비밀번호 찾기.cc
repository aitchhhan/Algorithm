#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    map<string, string> ma;
    string s, str;
     for (int i = 0; i < N; i++) {
         cin >> s >> str;
         ma[s] = str;
     }
    for (int k = 0; k < M; k++) {
        cin >> s;

        cout << ma[s] << '\n';
    }
}