#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }
    vector<int> num(n);
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num.begin(), num.end());
    int avg = round(n * 0.15);
    double sum = 0;
    for (int k = avg; k < n - avg; k++)
        sum += num[k];
    int res = round(sum / (n - avg * 2));

    cout << res;
}