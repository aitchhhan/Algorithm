#include <iostream>
using namespace std;

long long arr[101] = {0, 1, 1,};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    for (int i = 4; i < 101; i++) {
        arr[i] = arr[i - 2] + arr[i - 3];
    }

    int T;
    int N;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        cout << arr[N] << '\n';
    }
}