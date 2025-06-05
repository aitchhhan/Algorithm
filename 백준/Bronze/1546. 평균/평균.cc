#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N];
    double sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int max = *max_element(arr, arr + N);
    for (int i = 0; i < N; i++) {
        sum += (double)arr[i] / max * 100;
    }
    cout.precision(5);
    cout << fixed;
    cout << sum / N;
}