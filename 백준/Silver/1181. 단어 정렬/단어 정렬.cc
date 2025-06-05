#include <iostream>
#include <algorithm>
using namespace std;

int compare(string a, string b) {
    if (a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}

string str[20001];
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> str[i];
    }
    sort(str, str + N, compare);
    for (int i = 0; i < N; i++) {
        if (str[i] == str[i - 1]) {
            continue;
        }
        cout << str[i] << "\n";
    }
}