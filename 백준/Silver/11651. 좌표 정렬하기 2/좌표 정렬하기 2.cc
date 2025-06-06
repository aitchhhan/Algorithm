#include <iostream>
#include <algorithm>
using namespace std;

struct XY {
    int x, y;
};

bool compare(XY a, XY b) {
    if (a.y != b.y)
        return a.y < b.y;
    else
        return a.x < b.x;
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