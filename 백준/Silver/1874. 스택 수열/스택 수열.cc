#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, num;
    int cnt = 1;
    stack<int> s;
    vector<char> v;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;

        while (cnt <= num) {
            v.push_back('+');
            s.push(cnt);
            cnt++;
        }
        if (num == s.top()) {
            s.pop();
            v.push_back('-');
        } else {
            cout << "NO";
            return 0;
        }
    }
    for (char k : v)
        cout << k << '\n';
}