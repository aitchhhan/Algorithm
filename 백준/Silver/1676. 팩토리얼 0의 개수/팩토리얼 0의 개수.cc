#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int cnt = 0;
    for (int i = 5; N / i >= 1; i *= 5) {
        cnt += N / i;
    }
    cout << cnt;
}