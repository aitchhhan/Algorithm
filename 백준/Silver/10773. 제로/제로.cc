#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int K, num, sum = 0;
    cin >> K;
    stack<int> s;
    for (int i = 0; i < K; i++) {
        cin >> num;
        if (!s.empty() && num == 0)
            s.pop();
        else
            s.push(num);
    }
    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }
    cout << sum;
}