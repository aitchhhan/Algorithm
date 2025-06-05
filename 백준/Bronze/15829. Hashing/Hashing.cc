#include <iostream>
using namespace std;

int main() {
    int L;
    string str;
    cin >> L >> str;
    long long hash = 0, r = 1, M = 1234567891;

    for (int i = 0; i < L; i++) {
        char a = str[i];
        hash = (hash + (a - 96) * r) % M;
        r = (r * 31) % M;
    }
    cout << hash;
}