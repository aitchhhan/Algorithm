#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    while (getline(cin, str)) {
        stack<char> s;
        bool res = true;
        if (str.length() == 1 && str[0] == '.')
            break;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '(' || str[i] == '[') {
                s.push(str[i]);
            }
            if (str[i] == ')') {
                if (!s.empty() && s.top() == '(')
                    s.pop();
                else {
                    res = false;
                    break;
                }
            } else if (str[i] == ']') {
                if (!s.empty() && s.top() == '[')
                    s.pop();
                else {
                    res = false;
                    break;
                }
            }
        }
        if (s.empty() && res)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
}