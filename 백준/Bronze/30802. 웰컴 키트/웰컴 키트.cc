#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[6], T, P;
    int t_cnt = 0, p1 = 0, p2 = 0;

    for (int i = 0; i < 6; i++)
        cin >> arr[i];

    cin >> T >> P;

    for (int i = 0; i < 6; i++) {
        if (arr[i] % T == 0) {
            t_cnt += arr[i] / T;
        } else {
            t_cnt += arr[i] / T + 1;
        }
    }
    p1 = N / P;
    p2 = N % P;

    cout << t_cnt << '\n' << p1 << " " << p2;
}