#include <iostream>
#include <map>
using namespace std;

string name[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    string str;
    map<string, int> num;
    for (int i = 0; i < N; i++) {
        cin >> str;
        num.insert({str, i});
        name[i] = str;
    }
    for (int k = 1; k <= M; k++) {
        cin >> str;
        if (isdigit(str[0]))
            cout << name[stoi(str) - 1] << '\n';
        else
            cout << num[str] + 1 << '\n';
    }
}