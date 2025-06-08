#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    string str;
    for (int i = 0; i < T; i++) {
        cin >> str;
        stack<char> s;
        bool res = true;
        for (int k = 0; k < str.length(); k++) {
            if (str[k] == '(' || str[k] == '[') {
                s.push(str[k]);
            }
            if (str[k] == ')') {
                if (!s.empty() && s.top() == '(')
                    s.pop();
                else {
                    res = false;
                    break;
                }
            } else if (str[k] == ']') {
                if (!s.empty() && s.top() == '[')
                    s.pop();
                else {
                    res = false;
                    break;
                }
            }
        }
        if (s.empty() && res)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}