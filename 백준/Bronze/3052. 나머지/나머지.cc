#include <iostream>
using namespace std;

int main() {
    int arr[42] = {};
    int n;
    int res = 0;
    for (int i = 0; i < 10; ++i) {
        cin >> n;
        arr[n % 42]++;
    }
    for (int i : arr) {
        if (i > 0) {
            res++;
        }
    }
    cout << res;
}