#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N, X;
    cin >> N;
    string str;
    queue<int> q;
    for (int i = 0; i < N; i++) {
        cin >> str;
        if (str == "push") {
            cin >> X;
            q.push(X);
        }
        else if (str == "pop") {
            if (q.empty())
                cout << -1 << '\n';
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (str == "size")
            cout << q.size() << '\n';
        else if (str == "empty")
            cout << q.empty() << '\n';
        else if (str == "front")
            if (q.empty())
                cout << -1 << '\n';
            else
                cout << q.front() << '\n';
        else if (str == "back") {
            if (q.empty())
                cout << -1 << '\n';
            else
                cout << q.back() << '\n';
        }
    }
}