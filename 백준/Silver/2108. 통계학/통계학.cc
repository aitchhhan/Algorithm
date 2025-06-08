#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;

    vector<int> v(N);
    int num[8001] = {};
    int sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        sum += v[i];
        num[v[i] + 4000]++;
    }

    sort(v.begin(), v.end());

    int avg = round((double)sum / N);
    if (avg == -0)
        avg = 0;
    cout << avg << '\n';

    cout << v[N / 2] << '\n';

    int maxNum = 0;
    for (int i = 0; i <= 8000; i++) {
        if (num[i] > maxNum) {
            maxNum = num[i];
        }
    }

    vector<int> temp;
    for (int i = 0; i <= 8000; i++) {
        if (num[i] == maxNum) {
            temp.push_back(i - 4000);
        }
    }

    if (temp.size() > 1)
        cout << temp[1] << '\n';
    else
        cout << temp[0] << '\n';

    cout << v[N - 1] - v[0] << '\n';
}