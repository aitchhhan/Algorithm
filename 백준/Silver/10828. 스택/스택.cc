#include <iostream>
#include <stack>
using namespace std;

int main() {
    int N, X;
    cin >> N;
    string str;
    stack<int> s;
    for (int i = 0; i < N; i++) {
        cin >> str;
        if (str == "push") {
            cin >> X;
            s.push(X);
        }
        else if (str == "pop") {
            if (s.empty())
                cout << -1 << '\n';
            else {
                cout << s.top() << '\n';
                s.pop();
            }
        }
        else if (str == "size")
            cout << s.size() << '\n';
        else if (str == "empty")
            cout << s.empty() << '\n';
        else if (str == "top")
            if (s.empty())
                cout << -1 << '\n';
            else
                cout << s.top() << '\n';
    }
}