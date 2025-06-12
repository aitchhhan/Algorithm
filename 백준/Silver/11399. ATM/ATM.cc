#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, sum = 0, res = 0;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++) {
        sum += v[i];
        res += sum;
    }
    cout << res;
}