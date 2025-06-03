#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    int sum = 0;
    cin >> n >> s;

    for(int i = 0; i < n; i++) {
        sum += (s[i] - '0');
    }
    cout << sum;
}