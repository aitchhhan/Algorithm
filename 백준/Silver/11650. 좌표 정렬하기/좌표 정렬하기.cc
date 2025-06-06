#include <iostream>
#include <algorithm>
using namespace std;

struct XY {
    int x, y;
};

bool compare(XY a, XY b) {
    if (a.x != b.x)
        return a.x < b.x;
    else
        return a.y < b.y;
}

XY xy[100001];
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> xy[i].x >> xy[i].y;
    }
    sort(xy, xy + N, compare);
    for (int k = 0; k < N; k++)
        cout << xy[k].x << " " << xy[k].y << "\n";
}