#include <iostream>
using namespace std;

int main() {
    int T;
    int H, W, N;
    int ADD;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> H >> W >> N;
        if (N % H == 0) {
            ADD = H * 100 + (N / H);
        } else {
            ADD = (N % H) * 100 + (N / H) + 1;
        }
        cout << ADD << '\n';
    }
}