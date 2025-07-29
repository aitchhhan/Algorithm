#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double X, Y, D, T;
    cin >> X >> Y >> D >> T;
    double dist = sqrt(X * X + Y * Y);
    cout << fixed;
    cout.precision(9);

    if (D < T) {
        cout << dist << '\n';
    } else {
        double ans = dist;

        int jump = dist / D;
        dist -= jump * D;

        if (jump == 0)
            ans = min(ans, min(T + D - dist, 2.0 * T));
        else
            ans = min(ans, min(jump * T + dist, (jump + 1.0) * T));

        cout << ans;
    }
}