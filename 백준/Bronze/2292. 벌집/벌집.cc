#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int layer = 0;
    if (N == 1) {
        cout << 1;
    } else {
        for (int sum = 2; sum <= N; layer++) {
            sum += 6 * layer;
        }
        cout << layer;
    }
}