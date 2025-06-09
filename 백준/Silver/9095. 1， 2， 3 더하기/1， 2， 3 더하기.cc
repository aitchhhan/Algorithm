#include <iostream>
#include <vector>
using namespace std;

vector<int> arr(12, -1);

int sum(int num) {
    if (num == 1)
        return 1;
    if (num == 2)
        return 2;
    if (num == 3)
        return 4;
    if (arr[num] != -1)
        return arr[num];
    return arr[num] = sum(num - 1) + sum(num - 2) + sum(num - 3);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        cout << sum(n) << '\n';
    }
}